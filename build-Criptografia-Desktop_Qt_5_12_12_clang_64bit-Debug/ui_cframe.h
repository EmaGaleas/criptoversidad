/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QTableWidget *TW_MOSTRAR;
    QFrame *frameC1;
    QRadioButton *rb_cifrar;
    QRadioButton *rb_descifrar;
    QLabel *label;
    QFrame *frameC2;
    QLabel *label_2;
    QLineEdit *le_frase;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(1188, 676);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TW_MOSTRAR = new QTableWidget(centralwidget);
        TW_MOSTRAR->setObjectName(QString::fromUtf8("TW_MOSTRAR"));
        TW_MOSTRAR->setGeometry(QRect(20, 40, 791, 571));
        frameC1 = new QFrame(centralwidget);
        frameC1->setObjectName(QString::fromUtf8("frameC1"));
        frameC1->setGeometry(QRect(850, 30, 131, 111));
        frameC1->setFrameShape(QFrame::StyledPanel);
        frameC1->setFrameShadow(QFrame::Raised);
        rb_cifrar = new QRadioButton(frameC1);
        rb_cifrar->setObjectName(QString::fromUtf8("rb_cifrar"));
        rb_cifrar->setGeometry(QRect(10, 40, 97, 22));
        rb_descifrar = new QRadioButton(frameC1);
        rb_descifrar->setObjectName(QString::fromUtf8("rb_descifrar"));
        rb_descifrar->setGeometry(QRect(10, 70, 97, 22));
        label = new QLabel(frameC1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 16));
        frameC2 = new QFrame(centralwidget);
        frameC2->setObjectName(QString::fromUtf8("frameC2"));
        frameC2->setGeometry(QRect(850, 190, 231, 111));
        frameC2->setFrameShape(QFrame::StyledPanel);
        frameC2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frameC2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 55, 16));
        le_frase = new QLineEdit(frameC2);
        le_frase->setObjectName(QString::fromUtf8("le_frase"));
        le_frase->setGeometry(QRect(90, 10, 113, 24));
        pushButton = new QPushButton(frameC2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 70, 80, 25));
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1188, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QApplication::translate("cframe", "cframe", nullptr));
        rb_cifrar->setText(QApplication::translate("cframe", "Cifrar", nullptr));
        rb_descifrar->setText(QApplication::translate("cframe", "Descifrar", nullptr));
        label->setText(QApplication::translate("cframe", "MENU", nullptr));
        label_2->setText(QApplication::translate("cframe", "Frase:", nullptr));
        pushButton->setText(QApplication::translate("cframe", "INGRESAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
