#include "cframe.h"
#include "ui_cframe.h"
#include <QtWidgets>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <istream>
#include <string>
#include <sstream>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QFileDialog>
#include <QProcess>
#include <fstream>
#include <iostream>
#include <sstream>
#include <QDateTime>
#include <cstdlib>
#include <ctime>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
using std::ofstream;
using std::ios;
using std::string;
using std::ios;
using std::cout;
//Ema, Inge, Daniel Lorenzo, Cole, Harol, Rafael, Martín

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{

    ui->setupUi(this);
    llenarListaChars();
    ui->frame_fondo->setStyleSheet("background-color: #87CEEB;");
    ui->Btn_Aceptar->setStyleSheet("background-color: #2596be;");
    ui->TW_Mostrar->setStyleSheet("background-color: #d0f0ef;");

    //letra
    ui->TBx_Frase->setStyleSheet("color: black;");
    ui->RB_Cifrar->setStyleSheet("color: black;");
    ui->RB_Descifrar->setStyleSheet("color: black;");

    ui->frame_no->setVisible(false);



}

cframe::~cframe()
{
    delete ui;
}


string cframe::cifrar(string cadena)
{

    string cifrado = "";

    for (int i = 0; i < cadena.size(); i++) {
        int ascii = static_cast<int>(cadena[i]);
        int mod = Modular(ascii, 11413, 3533);


        for (int pos = 0; pos < criptoABC1.size(); pos++)
        {
            if (criptoCHAR.at(pos) == mod) {
                cifrado += criptoABC1.at(pos);
                break;
            }
        }
    }

    return cifrado;

}


void cframe::llenarListaChars() {

    criptoABC1.push_back(' ');
    criptoABC1.push_back(' ');
    criptoABC1.push_back('!');
    criptoABC1.push_back('"');
    criptoABC1.push_back('#');
    criptoABC1.push_back('$');
    criptoABC1.push_back('%');
    criptoABC1.push_back('&');
    criptoABC1.push_back('\'');
    criptoABC1.push_back('(');
    criptoABC1.push_back(')');
    criptoABC1.push_back('*');
    criptoABC1.push_back('+');
    criptoABC1.push_back(',');
    criptoABC1.push_back('-');
    criptoABC1.push_back('.');
    criptoABC1.push_back('/');


    for (int i = 0; i < 10; i++) {
        criptoABC1.push_back('0' + i);
    }

    criptoABC1.push_back(';');

    for (int i = 0; i < 26; i++) {
        criptoABC1.push_back('A' + i);
    }

    for (int i = 0; i < 26; i++) {
        criptoABC1.push_back('a' + i);
    }

    for (int i = 0; i< criptoABC1.size(); i++) {
        criptoCHAR.push_back(Modular((int) criptoABC1.at(i), 11413, 3533));
    }

    ordenarVector(criptoCHAR);
}
void cframe::ordenarVector(vector<int> &vec) {
    int n = vec.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

string cframe::extraer()
{

    QFile archivo(rutaArchivo);
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text))
    {            return "Error";
    }

    QTextStream textoArchivo(&archivo);

    texto = textoArchivo.readLine();

    archivo.close();


    return texto.toStdString();

}

void cframe::on_Btn_Aceptar_clicked()
{
    if(ui->TBx_Frase->text().toStdString() =="SALAmandra"){
        if(cifrar(ui->TBx_Frase_2->text().toStdString() )==extraer()){
            ui->Btn_Aceptar->setEnabled(false);
            ui->te_datos->setText("Contraseña:\tSALAmandra\nContraseña cifrada:\t"+QString::fromStdString(cifrar("SALAmandra"))+"\nToken ingresado:\t"+QString::fromStdString(ui->TBx_Frase_2->text().toStdString())+"\nToken cifrado:\t"+texto);
        }else{
            QMessageBox::warning(this,"no","Token incorrecto");

        }

    }else{
        QMessageBox::warning(this,"no","Contra icnorrecta");
    }

}


vector<int *> cframe::de2bi(int x)
{
    vector <int*> b;
    int mod=0;
    while(x>0){
        mod=x%2;
        b.push_back(new int(mod));
        x=x/2;
    }
    return b;
}


int cframe::Modular(int b, int N, int n)
{
    int a = 1;
    b = b % N;
    vector <int *> Villanueva = de2bi(n);

    for(int i=0 ; i < Villanueva.size(); i++){
        if(*Villanueva[i] == 1)
            a = (a*b)%N;
        b = b*b;
        b = b%N;
    }
    return a%N;
}

void cframe::on_pushButton_clicked()
{
    ui->te_datos->clear();
    ui->Btn_Aceptar->setEnabled(true);
    ui->TBx_Frase->clear();
    ui->TBx_Frase_2->clear();

}

