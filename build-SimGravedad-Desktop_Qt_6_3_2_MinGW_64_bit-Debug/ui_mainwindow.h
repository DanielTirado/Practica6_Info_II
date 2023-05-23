/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *sistema1_btn;
    QPushButton *sistema2_btn;
    QPushButton *finalizar_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1375, 941);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(230, 20, 1100, 851));
        sistema1_btn = new QPushButton(centralwidget);
        sistema1_btn->setObjectName(QString::fromUtf8("sistema1_btn"));
        sistema1_btn->setGeometry(QRect(40, 90, 151, 81));
        sistema2_btn = new QPushButton(centralwidget);
        sistema2_btn->setObjectName(QString::fromUtf8("sistema2_btn"));
        sistema2_btn->setGeometry(QRect(40, 230, 151, 81));
        finalizar_btn = new QPushButton(centralwidget);
        finalizar_btn->setObjectName(QString::fromUtf8("finalizar_btn"));
        finalizar_btn->setGeometry(QRect(50, 390, 131, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1375, 25));
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
        sistema1_btn->setText(QCoreApplication::translate("MainWindow", "SISTEMA 1", nullptr));
        sistema2_btn->setText(QCoreApplication::translate("MainWindow", "SISTEMA 2", nullptr));
        finalizar_btn->setText(QCoreApplication::translate("MainWindow", "FINALIZAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
