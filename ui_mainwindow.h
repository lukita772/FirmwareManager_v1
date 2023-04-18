/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit_console;
    QTreeView *treeView;
    QLabel *label_file;
    QLabel *label_title;
    QLabel *label_2;
    QLineEdit *lineEdit_filePath;
    QListView *listView;
    QFrame *line_title;
    QLabel *label_filePath;
    QLabel *label;
    QPushButton *pushButton_Select;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(639, 456);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_console = new QTextEdit(centralwidget);
        textEdit_console->setObjectName(QString::fromUtf8("textEdit_console"));
        textEdit_console->setGeometry(QRect(60, 270, 561, 121));
        textEdit_console->setAutoFillBackground(true);
        textEdit_console->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_console->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_console->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textEdit_console->setReadOnly(true);
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 60, 311, 171));
        label_file = new QLabel(centralwidget);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setGeometry(QRect(10, 40, 91, 16));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(10, 0, 191, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 270, 41, 16));
        lineEdit_filePath = new QLineEdit(centralwidget);
        lineEdit_filePath->setObjectName(QString::fromUtf8("lineEdit_filePath"));
        lineEdit_filePath->setGeometry(QRect(60, 240, 261, 20));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(330, 60, 291, 171));
        line_title = new QFrame(centralwidget);
        line_title->setObjectName(QString::fromUtf8("line_title"));
        line_title->setGeometry(QRect(10, 10, 611, 16));
        line_title->setFrameShape(QFrame::HLine);
        line_title->setFrameShadow(QFrame::Sunken);
        label_filePath = new QLabel(centralwidget);
        label_filePath->setObjectName(QString::fromUtf8("label_filePath"));
        label_filePath->setGeometry(QRect(10, 240, 41, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 40, 51, 16));
        pushButton_Select = new QPushButton(centralwidget);
        pushButton_Select->setObjectName(QString::fromUtf8("pushButton_Select"));
        pushButton_Select->setGeometry(QRect(60, 400, 151, 21));
        label_port = new QLabel(centralwidget);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setGeometry(QRect(330, 240, 41, 16));
        lineEdit_port = new QLineEdit(centralwidget);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(370, 240, 101, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit_console->setMarkdown(QString());
        textEdit_console->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_file->setText(QCoreApplication::translate("MainWindow", "Ruta de archivo", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "BCYL Firmware Manager", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Consola", nullptr));
        label_filePath->setText(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        pushButton_Select->setText(QCoreApplication::translate("MainWindow", "Grabar", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "Puerto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
