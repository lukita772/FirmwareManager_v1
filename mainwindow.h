#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Select_clicked();
    void on_treeView_clicked(const QModelIndex &index);
    void on_listView_doubleClicked(const QModelIndex &index);
    void on_readyReadStandardOutput();
    void on_readyReadStandardError();


private:
    Ui::MainWindow *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
    QProcess process;
    int executeService(QString command, QStringList arguments, bool waitUntilFinish);
    int systemCall(QString command, QStringList arguments);
    QString rStdError;
    QString rStdOut;

};
#endif // MAINWINDOW_H
