#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString sPath = "C:/Users/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(sPath);
    ui->treeView->setModel(dirmodel);
    ui->treeView->setColumnWidth(0,1000);

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    //filemodel->setRootPath(sPath);
    ui->listView->setModel(filemodel);

    //enlazar señales provenientes del servicio
    connect(&process, SIGNAL(readyReadStandardOutput()), this, SLOT(on_readyReadStandardOutput()));
    connect(&process, SIGNAL(readyReadStandardError()), this, SLOT(on_readyReadStandardError()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Select_clicked()
{
    QMessageBox messageBox;

    QString uname = qgetenv("USER");
    if (uname.isEmpty())
        uname = qgetenv("USERNAME");

    QString port = ui->lineEdit_port->text();

    if(port.length() <= 0)
    {
        messageBox.critical(0,"Error","Debe seleccionar un puerto ");
        messageBox.setFixedSize(500,200);
        return;
    }

    QString commandStr = "C:/Windows/System32/where.exe";
    QStringList arguments;

    arguments << "esptool.py";

    if(!executeService(commandStr, arguments, true))
    {
        messageBox.critical(0,"Error","El servicio: "+commandStr+ " no funciono correctamente");
        messageBox.setFixedSize(500,200);
        return;
    }


    commandStr = this->rStdOut.trimmed();
    arguments.clear();
    arguments << "-p" << port << "write_flash" << "0x000000" << (ui->lineEdit_filePath->text());


    if(!executeService(commandStr, arguments, false))
    {
        messageBox.critical(0,"Error","El servicio: "+commandStr+ " no funciono correctamente");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        messageBox.setText("Finalizado.");
        messageBox.setFixedSize(500,200);
        messageBox.exec();
    }
    return;
}

int MainWindow::systemCall(QString command, QStringList arguments)
{
    command = command + arguments.join(" ");

    QByteArray ba = command.toLocal8Bit();
    const char *c_str2 = ba.data();

    system(c_str2);
    return true;
}

void MainWindow::on_readyReadStandardError()
{
    QString rStdError;
    rStdError = process.readAllStandardError();

    this->rStdError = rStdError;

    if(rStdError.length() > 0)
    {
        ui->textEdit_console->setText(ui->textEdit_console->toPlainText() + "/nError: " + rStdError);
    }
}

void MainWindow::on_readyReadStandardOutput()
{
    QString rStdOut;
    rStdOut = process.readAllStandardOutput();

    this->rStdOut = rStdOut;

    if(rStdOut.length() > 0)
    {
        ui->textEdit_console->setText(ui->textEdit_console->toPlainText() + rStdOut);
    }

}

int MainWindow::executeService(QString command, QStringList arguments, bool waitUntilFinish)
{
  QString rStdOut, rStdError;

  process.waitForFinished();
  process.start(command,arguments);

  //esperar a que el servicio arranque
  if(process.waitForStarted())
  {
      if(waitUntilFinish)
      {
           //process.waitForFinished();
           process.waitForReadyRead();
      }

    return true;
  }
  else
  {
      return false;
  }

}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}


void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    QString sPath = filemodel->fileInfo(index).absoluteFilePath();
    ui->lineEdit_filePath->setText(sPath);

}

