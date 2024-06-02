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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QFrame *frame_fondo;
    QRadioButton *RB_Descifrar;
    QRadioButton *RB_Cifrar;
    QPushButton *Btn_Aceptar;
    QLabel *Lbl_Frase;
    QLineEdit *TBx_Frase;
    QTableWidget *TW_Mostrar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(882, 636);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_fondo = new QFrame(centralwidget);
        frame_fondo->setObjectName(QString::fromUtf8("frame_fondo"));
        frame_fondo->setGeometry(QRect(0, 0, 901, 641));
        frame_fondo->setFrameShape(QFrame::StyledPanel);
        frame_fondo->setFrameShadow(QFrame::Raised);
        RB_Descifrar = new QRadioButton(frame_fondo);
        RB_Descifrar->setObjectName(QString::fromUtf8("RB_Descifrar"));
        RB_Descifrar->setGeometry(QRect(60, 250, 96, 23));
        RB_Cifrar = new QRadioButton(frame_fondo);
        RB_Cifrar->setObjectName(QString::fromUtf8("RB_Cifrar"));
        RB_Cifrar->setGeometry(QRect(60, 220, 96, 23));
        Btn_Aceptar = new QPushButton(frame_fondo);
        Btn_Aceptar->setObjectName(QString::fromUtf8("Btn_Aceptar"));
        Btn_Aceptar->setGeometry(QRect(80, 300, 151, 41));
        Lbl_Frase = new QLabel(frame_fondo);
        Lbl_Frase->setObjectName(QString::fromUtf8("Lbl_Frase"));
        Lbl_Frase->setGeometry(QRect(60, 160, 61, 31));
        TBx_Frase = new QLineEdit(frame_fondo);
        TBx_Frase->setObjectName(QString::fromUtf8("TBx_Frase"));
        TBx_Frase->setGeometry(QRect(120, 160, 171, 41));
        TW_Mostrar = new QTableWidget(frame_fondo);
        TW_Mostrar->setObjectName(QString::fromUtf8("TW_Mostrar"));
        TW_Mostrar->setGeometry(QRect(320, 20, 511, 571));
        cframe->setCentralWidget(centralwidget);

        retranslateUi(cframe);

        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QApplication::translate("cframe", "cframe", nullptr));
        RB_Descifrar->setText(QApplication::translate("cframe", "Descifrar", nullptr));
        RB_Cifrar->setText(QApplication::translate("cframe", "Cifrar", nullptr));
        Btn_Aceptar->setText(QApplication::translate("cframe", "Aceptar", nullptr));
        Lbl_Frase->setText(QApplication::translate("cframe", "<html><head/><body><p><span style=\" font-size:18pt;\">Frase:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
