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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tw_mostrarCola;
    QTableWidget *tw_mostrarPila;
    QRadioButton *rb_elimiar;
    QRadioButton *rb_delPenultimo;
    QRadioButton *rb_delCrec;
    QRadioButton *rb_delI;
    QTableWidget *tw_mostrar;
    QRadioButton *rb_in4ta;
    QRadioButton *rb_del2;
    QSpinBox *sp_pos;
    QSpinBox *sp_del;
    QRadioButton *rb_inCrec;
    QRadioButton *rb_in3ra;
    QRadioButton *rb_delPos;
    QPushButton *btn_ingresar;
    QRadioButton *rb_delPila;
    QRadioButton *rb_inicio;
    QRadioButton *rb_delCola;
    QRadioButton *rb_delAnt;
    QRadioButton *rb_inPos;
    QRadioButton *rb_inCola;
    QRadioButton *rb_inFin;
    QRadioButton *rb_ante;
    QRadioButton *rb_in4ta_2;
    QRadioButton *rb_del3;
    QRadioButton *rb_inPila;
    QRadioButton *rb_in2nd;
    QRadioButton *rb_inCrec_2;
    QRadioButton *rb_delDec;
    QLineEdit *tbx_letra;
    QLabel *lbl1;
    QWidget *tab_2;
    QLabel *lbl1_2;
    QLineEdit *tbx_textD;
    QRadioButton *rb_delfind;
    QRadioButton *rb_inantd;
    QPushButton *pb_doble;
    QTableWidget *tw_doble;
    QSpinBox *sp;
    QWidget *tab_3;
    QTableWidget *TW_MOSTRAR;
    QGroupBox *GB_Menu;
    QRadioButton *RB_Lista;
    QRadioButton *RB_Pila;
    QRadioButton *RB_Cola;
    QRadioButton *RB_Arbol;
    QGroupBox *GB_Sub_Menu;
    QRadioButton *RB_Simple;
    QRadioButton *RB_Doble;
    QLineEdit *TB_Letra;
    QPushButton *Btn_Aceptar;
    QLabel *Lbl_Letra;
    QComboBox *CB_ORDEN;
    QWidget *tab_4;
    QFrame *frameC1;
    QRadioButton *rb_cifrar;
    QRadioButton *rb_descifrar;
    QLabel *label;
    QFrame *frameC2;
    QLabel *label_2;
    QLineEdit *le_frase;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(1314, 748);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1311, 851));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tw_mostrarCola = new QTableWidget(tab);
        tw_mostrarCola->setObjectName(QString::fromUtf8("tw_mostrarCola"));
        tw_mostrarCola->setGeometry(QRect(610, 50, 271, 501));
        tw_mostrarPila = new QTableWidget(tab);
        tw_mostrarPila->setObjectName(QString::fromUtf8("tw_mostrarPila"));
        tw_mostrarPila->setGeometry(QRect(340, 50, 271, 501));
        rb_elimiar = new QRadioButton(tab);
        rb_elimiar->setObjectName(QString::fromUtf8("rb_elimiar"));
        rb_elimiar->setGeometry(QRect(780, -40, 221, 31));
        rb_delPenultimo = new QRadioButton(tab);
        rb_delPenultimo->setObjectName(QString::fromUtf8("rb_delPenultimo"));
        rb_delPenultimo->setGeometry(QRect(1120, 210, 221, 31));
        rb_delCrec = new QRadioButton(tab);
        rb_delCrec->setObjectName(QString::fromUtf8("rb_delCrec"));
        rb_delCrec->setGeometry(QRect(1120, 240, 221, 31));
        rb_delI = new QRadioButton(tab);
        rb_delI->setObjectName(QString::fromUtf8("rb_delI"));
        rb_delI->setGeometry(QRect(1120, 90, 221, 31));
        tw_mostrar = new QTableWidget(tab);
        tw_mostrar->setObjectName(QString::fromUtf8("tw_mostrar"));
        tw_mostrar->setGeometry(QRect(30, 50, 311, 501));
        rb_in4ta = new QRadioButton(tab);
        rb_in4ta->setObjectName(QString::fromUtf8("rb_in4ta"));
        rb_in4ta->setGeometry(QRect(930, 210, 201, 31));
        rb_del2 = new QRadioButton(tab);
        rb_del2->setObjectName(QString::fromUtf8("rb_del2"));
        rb_del2->setGeometry(QRect(1120, 120, 221, 31));
        sp_pos = new QSpinBox(tab);
        sp_pos->setObjectName(QString::fromUtf8("sp_pos"));
        sp_pos->setGeometry(QRect(1050, 270, 46, 25));
        sp_pos->setMinimum(1);
        sp_pos->setMaximum(20);
        sp_del = new QSpinBox(tab);
        sp_del->setObjectName(QString::fromUtf8("sp_del"));
        sp_del->setGeometry(QRect(1230, 300, 46, 25));
        sp_del->setMinimum(1);
        rb_inCrec = new QRadioButton(tab);
        rb_inCrec->setObjectName(QString::fromUtf8("rb_inCrec"));
        rb_inCrec->setGeometry(QRect(930, 300, 201, 31));
        rb_in3ra = new QRadioButton(tab);
        rb_in3ra->setObjectName(QString::fromUtf8("rb_in3ra"));
        rb_in3ra->setGeometry(QRect(930, 180, 201, 31));
        rb_delPos = new QRadioButton(tab);
        rb_delPos->setObjectName(QString::fromUtf8("rb_delPos"));
        rb_delPos->setGeometry(QRect(1120, 300, 221, 31));
        btn_ingresar = new QPushButton(tab);
        btn_ingresar->setObjectName(QString::fromUtf8("btn_ingresar"));
        btn_ingresar->setGeometry(QRect(1050, 440, 101, 71));
        rb_delPila = new QRadioButton(tab);
        rb_delPila->setObjectName(QString::fromUtf8("rb_delPila"));
        rb_delPila->setGeometry(QRect(930, 400, 201, 31));
        rb_inicio = new QRadioButton(tab);
        rb_inicio->setObjectName(QString::fromUtf8("rb_inicio"));
        rb_inicio->setGeometry(QRect(930, 100, 151, 22));
        rb_delCola = new QRadioButton(tab);
        rb_delCola->setObjectName(QString::fromUtf8("rb_delCola"));
        rb_delCola->setGeometry(QRect(1120, 400, 201, 31));
        rb_delAnt = new QRadioButton(tab);
        rb_delAnt->setObjectName(QString::fromUtf8("rb_delAnt"));
        rb_delAnt->setGeometry(QRect(1120, 180, 221, 31));
        rb_inPos = new QRadioButton(tab);
        rb_inPos->setObjectName(QString::fromUtf8("rb_inPos"));
        rb_inPos->setGeometry(QRect(930, 270, 131, 31));
        rb_inCola = new QRadioButton(tab);
        rb_inCola->setObjectName(QString::fromUtf8("rb_inCola"));
        rb_inCola->setGeometry(QRect(1120, 370, 201, 31));
        rb_inFin = new QRadioButton(tab);
        rb_inFin->setObjectName(QString::fromUtf8("rb_inFin"));
        rb_inFin->setGeometry(QRect(930, 120, 201, 31));
        rb_ante = new QRadioButton(tab);
        rb_ante->setObjectName(QString::fromUtf8("rb_ante"));
        rb_ante->setGeometry(QRect(550, -40, 201, 31));
        rb_in4ta_2 = new QRadioButton(tab);
        rb_in4ta_2->setObjectName(QString::fromUtf8("rb_in4ta_2"));
        rb_in4ta_2->setGeometry(QRect(930, 240, 201, 31));
        rb_del3 = new QRadioButton(tab);
        rb_del3->setObjectName(QString::fromUtf8("rb_del3"));
        rb_del3->setGeometry(QRect(1120, 150, 221, 31));
        rb_inPila = new QRadioButton(tab);
        rb_inPila->setObjectName(QString::fromUtf8("rb_inPila"));
        rb_inPila->setGeometry(QRect(930, 370, 201, 31));
        rb_in2nd = new QRadioButton(tab);
        rb_in2nd->setObjectName(QString::fromUtf8("rb_in2nd"));
        rb_in2nd->setGeometry(QRect(930, 150, 201, 31));
        rb_inCrec_2 = new QRadioButton(tab);
        rb_inCrec_2->setObjectName(QString::fromUtf8("rb_inCrec_2"));
        rb_inCrec_2->setGeometry(QRect(930, 330, 201, 31));
        rb_delDec = new QRadioButton(tab);
        rb_delDec->setObjectName(QString::fromUtf8("rb_delDec"));
        rb_delDec->setGeometry(QRect(1120, 270, 221, 31));
        tbx_letra = new QLineEdit(tab);
        tbx_letra->setObjectName(QString::fromUtf8("tbx_letra"));
        tbx_letra->setGeometry(QRect(1010, 40, 113, 24));
        lbl1 = new QLabel(tab);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(1010, 0, 121, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lbl1_2 = new QLabel(tab_2);
        lbl1_2->setObjectName(QString::fromUtf8("lbl1_2"));
        lbl1_2->setGeometry(QRect(990, 20, 121, 41));
        tbx_textD = new QLineEdit(tab_2);
        tbx_textD->setObjectName(QString::fromUtf8("tbx_textD"));
        tbx_textD->setGeometry(QRect(980, 60, 113, 24));
        rb_delfind = new QRadioButton(tab_2);
        rb_delfind->setObjectName(QString::fromUtf8("rb_delfind"));
        rb_delfind->setGeometry(QRect(980, 130, 97, 22));
        rb_inantd = new QRadioButton(tab_2);
        rb_inantd->setObjectName(QString::fromUtf8("rb_inantd"));
        rb_inantd->setGeometry(QRect(980, 180, 251, 22));
        pb_doble = new QPushButton(tab_2);
        pb_doble->setObjectName(QString::fromUtf8("pb_doble"));
        pb_doble->setGeometry(QRect(980, 250, 151, 91));
        tw_doble = new QTableWidget(tab_2);
        tw_doble->setObjectName(QString::fromUtf8("tw_doble"));
        tw_doble->setGeometry(QRect(60, 60, 521, 461));
        sp = new QSpinBox(tab_2);
        sp->setObjectName(QString::fromUtf8("sp"));
        sp->setGeometry(QRect(1220, 240, 46, 25));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        TW_MOSTRAR = new QTableWidget(tab_3);
        TW_MOSTRAR->setObjectName(QString::fromUtf8("TW_MOSTRAR"));
        TW_MOSTRAR->setGeometry(QRect(20, 20, 921, 621));
        GB_Menu = new QGroupBox(tab_3);
        GB_Menu->setObjectName(QString::fromUtf8("GB_Menu"));
        GB_Menu->setGeometry(QRect(980, 20, 120, 101));
        RB_Lista = new QRadioButton(GB_Menu);
        RB_Lista->setObjectName(QString::fromUtf8("RB_Lista"));
        RB_Lista->setGeometry(QRect(0, 20, 96, 23));
        RB_Pila = new QRadioButton(GB_Menu);
        RB_Pila->setObjectName(QString::fromUtf8("RB_Pila"));
        RB_Pila->setGeometry(QRect(0, 40, 96, 23));
        RB_Cola = new QRadioButton(GB_Menu);
        RB_Cola->setObjectName(QString::fromUtf8("RB_Cola"));
        RB_Cola->setGeometry(QRect(0, 60, 96, 23));
        RB_Arbol = new QRadioButton(GB_Menu);
        RB_Arbol->setObjectName(QString::fromUtf8("RB_Arbol"));
        RB_Arbol->setGeometry(QRect(0, 80, 96, 23));
        GB_Sub_Menu = new QGroupBox(tab_3);
        GB_Sub_Menu->setObjectName(QString::fromUtf8("GB_Sub_Menu"));
        GB_Sub_Menu->setGeometry(QRect(1140, 30, 120, 80));
        RB_Simple = new QRadioButton(GB_Sub_Menu);
        RB_Simple->setObjectName(QString::fromUtf8("RB_Simple"));
        RB_Simple->setGeometry(QRect(0, 20, 96, 23));
        RB_Doble = new QRadioButton(GB_Sub_Menu);
        RB_Doble->setObjectName(QString::fromUtf8("RB_Doble"));
        RB_Doble->setGeometry(QRect(0, 40, 96, 23));
        TB_Letra = new QLineEdit(tab_3);
        TB_Letra->setObjectName(QString::fromUtf8("TB_Letra"));
        TB_Letra->setGeometry(QRect(1080, 260, 113, 25));
        Btn_Aceptar = new QPushButton(tab_3);
        Btn_Aceptar->setObjectName(QString::fromUtf8("Btn_Aceptar"));
        Btn_Aceptar->setGeometry(QRect(1100, 310, 81, 41));
        Lbl_Letra = new QLabel(tab_3);
        Lbl_Letra->setObjectName(QString::fromUtf8("Lbl_Letra"));
        Lbl_Letra->setGeometry(QRect(1010, 260, 54, 17));
        CB_ORDEN = new QComboBox(tab_3);
        CB_ORDEN->addItem(QString());
        CB_ORDEN->addItem(QString());
        CB_ORDEN->setObjectName(QString::fromUtf8("CB_ORDEN"));
        CB_ORDEN->setGeometry(QRect(1150, 150, 81, 24));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        frameC1 = new QFrame(tab_4);
        frameC1->setObjectName(QString::fromUtf8("frameC1"));
        frameC1->setGeometry(QRect(980, 40, 131, 111));
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
        frameC2 = new QFrame(tab_4);
        frameC2->setObjectName(QString::fromUtf8("frameC2"));
        frameC2->setGeometry(QRect(980, 180, 231, 111));
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
        tableWidget = new QTableWidget(tab_4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 40, 901, 561));
        tabWidget->addTab(tab_4, QString());
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1314, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QApplication::translate("cframe", "cframe", nullptr));
        rb_elimiar->setText(QApplication::translate("cframe", "Eliminar final", nullptr));
        rb_delPenultimo->setText(QApplication::translate("cframe", "Eliminar penultimo", nullptr));
        rb_delCrec->setText(QApplication::translate("cframe", "Eliminar Creciente", nullptr));
        rb_delI->setText(QApplication::translate("cframe", "Eliminar inicio", nullptr));
        rb_in4ta->setText(QApplication::translate("cframe", "Insertar 4ta Pos", nullptr));
        rb_del2->setText(QApplication::translate("cframe", "Eliminar 2da pos", nullptr));
        rb_inCrec->setText(QApplication::translate("cframe", "Insertar Creciente", nullptr));
        rb_in3ra->setText(QApplication::translate("cframe", "Insertar 3ra Pos", nullptr));
        rb_delPos->setText(QApplication::translate("cframe", "Eliminar Pos", nullptr));
        btn_ingresar->setText(QApplication::translate("cframe", "Proceder", nullptr));
        rb_delPila->setText(QApplication::translate("cframe", "Eliminar Pila", nullptr));
        rb_inicio->setText(QApplication::translate("cframe", "Insertar Inicio", nullptr));
        rb_delCola->setText(QApplication::translate("cframe", "Eliminar Cola", nullptr));
        rb_delAnt->setText(QApplication::translate("cframe", "Eliminar Antepenultimo", nullptr));
        rb_inPos->setText(QApplication::translate("cframe", "Insertar Posicion", nullptr));
        rb_inCola->setText(QApplication::translate("cframe", "Insertar Cola", nullptr));
        rb_inFin->setText(QApplication::translate("cframe", "Insertar Final", nullptr));
        rb_ante->setText(QApplication::translate("cframe", "Insertar Antepenultima", nullptr));
        rb_in4ta_2->setText(QApplication::translate("cframe", "Insertar Penultima", nullptr));
        rb_del3->setText(QApplication::translate("cframe", "Eliminar 3ra pos", nullptr));
        rb_inPila->setText(QApplication::translate("cframe", "Insertar Pila", nullptr));
        rb_in2nd->setText(QApplication::translate("cframe", "Insertar 2da Pos", nullptr));
        rb_inCrec_2->setText(QApplication::translate("cframe", "Insertar Decreciente", nullptr));
        rb_delDec->setText(QApplication::translate("cframe", "Eliminar Decreciente", nullptr));
        lbl1->setText(QApplication::translate("cframe", "INGRESE LETRA:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("cframe", "L/COL/PIL", nullptr));
        lbl1_2->setText(QApplication::translate("cframe", "INGRESE LETRA:", nullptr));
        rb_delfind->setText(QApplication::translate("cframe", "Eliminar final", nullptr));
        rb_inantd->setText(QApplication::translate("cframe", "Insertar ", nullptr));
        pb_doble->setText(QApplication::translate("cframe", "Porceder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("cframe", "DOBLE", nullptr));
        GB_Menu->setTitle(QApplication::translate("cframe", "Menu", nullptr));
        RB_Lista->setText(QApplication::translate("cframe", "Lista", nullptr));
        RB_Pila->setText(QApplication::translate("cframe", "Pila", nullptr));
        RB_Cola->setText(QApplication::translate("cframe", "Cola", nullptr));
        RB_Arbol->setText(QApplication::translate("cframe", "\303\201rbol", nullptr));
        GB_Sub_Menu->setTitle(QApplication::translate("cframe", "Sub_Menu", nullptr));
        RB_Simple->setText(QApplication::translate("cframe", "Simple", nullptr));
        RB_Doble->setText(QApplication::translate("cframe", "Doble", nullptr));
        Btn_Aceptar->setText(QApplication::translate("cframe", "INGRESAR", nullptr));
        Lbl_Letra->setText(QApplication::translate("cframe", "Letra:", nullptr));
        CB_ORDEN->setItemText(0, QApplication::translate("cframe", "PUSH", nullptr));
        CB_ORDEN->setItemText(1, QApplication::translate("cframe", "POP", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("cframe", "TDA", nullptr));
        rb_cifrar->setText(QApplication::translate("cframe", "Cifrar", nullptr));
        rb_descifrar->setText(QApplication::translate("cframe", "Descifrar", nullptr));
        label->setText(QApplication::translate("cframe", "MENU", nullptr));
        label_2->setText(QApplication::translate("cframe", "Frase:", nullptr));
        pushButton->setText(QApplication::translate("cframe", "INGRESAR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("cframe", "Cripto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
