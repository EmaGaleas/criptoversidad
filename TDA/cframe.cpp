#include "cframe.h"
#include "ui_cframe.h"
#include <vector>
using std::vector;
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
    ListaChar();
    ListaInt();
    cifrar2();
    MostrarListaSimple();



}

cframe::~cframe()
{
    delete ui;
}


void cframe::cifrar()
{

    string cadena = ui->TBx_Frase->text().toStdString();
    string cifrado = "";

    for (int i = 0; i < cadena.size(); i++) {
        int ascii = static_cast<int>(cadena[i]);
        int mod = Modular(ascii, 11413, 3533);


        for (int pos = 0; pos < criptoABC.size(); pos++)
        {
            if (criptoCHAR.at(pos) == mod) {
                cifrado += criptoABC.at(pos);
                break;
            }
        }
    }
    mostrar(cadena,  cifrado);

    return;

}

void cframe::descifrar() {
    string cifrado = ui->TBx_Frase->text().toStdString();
    string descifrado = "";

    for (int i = 0; i < cifrado.size(); i++) {
        int posC;
        for (int pos = 0; pos < criptoABC.size(); pos++) {
            if (criptoABC.at(pos) == cifrado.at(i)) {
                posC = pos;
                break;
            }
        }

        int mod = criptoCHAR.at(posC);
        int inversa = Modular(mod, 11413, 6597);
        cout << inversa << "\n";
        cout << (char) mod << "\n";

        descifrado += (char) inversa;

    }
    mostrar(cifrado,  descifrado);

}

void cframe::llenarListaChars() {

    criptoABC.push_back(' ');
    criptoABC.push_back('!');
    criptoABC.push_back('"');
    criptoABC.push_back('#');
    criptoABC.push_back('$');
    criptoABC.push_back('%');
    criptoABC.push_back('&');
    criptoABC.push_back('\'');
    criptoABC.push_back('(');
    criptoABC.push_back(')');
    criptoABC.push_back('*');
    criptoABC.push_back('+');
    criptoABC.push_back(',');
    criptoABC.push_back('-');
    criptoABC.push_back('.');
    criptoABC.push_back('/');

    for (int i=0;i<10 ;i++ ) {
        criptoABC.push_back('0'+i);
    }
    criptoABC.push_back(':');
    criptoABC.push_back(';');
    criptoABC.push_back('<');
    criptoABC.push_back('=');
    criptoABC.push_back('>');
    criptoABC.push_back('?');
    criptoABC.push_back('@');

    for (int i=0;i<26 ;i++ ) {
        criptoABC.push_back('A'+i);
    }
    criptoABC.push_back('[');
    criptoABC.push_back('\\');
    criptoABC.push_back(']');
    criptoABC.push_back('^');
    criptoABC.push_back('_');
    criptoABC.push_back('`');

    for (int i=0;i<26 ;i++ ) {
        criptoABC.push_back('a'+i);
    }
    for (int i = 123; i <= 165; i++) {
       criptoABC.push_back(static_cast<char>(i));
    }


    for (int i = 0; i< criptoABC.size(); i++) {
        criptoCHAR.push_back(Modular((int) criptoABC.at(i), 11413, 3533));
    }

//    criptoABC.push_back(' ');
//    criptoABC.push_back('!');
//    criptoABC.push_back('#');
//    criptoABC.push_back('$');
//    criptoABC.push_back(',');
//    criptoABC.push_back('.');

//    for (int i = 0; i < 10; i++) {
//        criptoABC.push_back('0' + i);
//    }

//    criptoABC.push_back(';');

//    for (int i = 0; i < 26; i++) {
//        criptoABC.push_back('A' + i);
//    }

//    for (int i = 0; i < 26; i++) {
//        criptoABC.push_back('a' + i);
//    }

//    for (int i = 0; i< criptoABC.size(); i++) {
//        criptoABC.push_back(Modular((int) criptoABC.at(i), 11413, 3533));
//    }

    ordenarVector(criptoCHAR);
}
void cframe::ListaChar() {
    ListaABC.InsertarFinal(' ');
    ListaABC.InsertarFinal('!');
    ListaABC.InsertarFinal('"');
    ListaABC.InsertarFinal('#');
    ListaABC.InsertarFinal('$');
    ListaABC.InsertarFinal('%');
    ListaABC.InsertarFinal('&');
    ListaABC.InsertarFinal('\'');
    ListaABC.InsertarFinal('(');
    ListaABC.InsertarFinal(')');
    ListaABC.InsertarFinal('*');
    ListaABC.InsertarFinal('+');
    ListaABC.InsertarFinal(',');
    ListaABC.InsertarFinal('-');
    ListaABC.InsertarFinal('.');
    ListaABC.InsertarFinal('/');

    for (int i=0; i<10 ; i++) {
        ListaABC.InsertarFinal('0' + i);
    }
    ListaABC.InsertarFinal(':');
    ListaABC.InsertarFinal(';');
    ListaABC.InsertarFinal('<');
    ListaABC.InsertarFinal('=');
    ListaABC.InsertarFinal('>');
    ListaABC.InsertarFinal('?');
    ListaABC.InsertarFinal('@');

    for (int i=0; i<26 ; i++) {
        ListaABC.InsertarFinal('A' + i);
    }
    ListaABC.InsertarFinal('[');
    ListaABC.InsertarFinal('\\');
    ListaABC.InsertarFinal(']');
    ListaABC.InsertarFinal('^');
    ListaABC.InsertarFinal('_');
    ListaABC.InsertarFinal('`');

    for (int i=0; i<26 ; i++) {
        ListaABC.InsertarFinal('a' + i);
    }
    for (int i = 123; i <= 165; i++) {
        ListaABC.InsertarFinal(static_cast<char>(i));
    }




}

void cframe::ListaInt()
{
    for (int i=32;i<166;i++){
        ListaNormal.InsertarFinal(i);
    }
}
void cframe::cifrar2()
{
    PtrAct = ListaNormal.PrimPtr;

    for (; PtrAct!=0; PtrAct=PtrAct->SigPtr) {
        ListaOrdenada.InsertarCreciente(Modular(PtrAct->Dato,11413,3533));
        //QMessageBox::information(this,".:.",QString::number(Modular(PtrAct->Dato,11413,3533)));
        //QMessageBox::information(this,".:.",QString::number(Modular(PtrAct->Dato,11413,3533))+"\t"+QString::number(O.PrimPtr->Dato));
    }

    return;
}


void cframe::MostrarListaSimple()
{
    ui->TW_Mostrar2->clear();
    ui->TW_Mostrar2->setColumnCount(3);
    ui->TW_Mostrar2->setHorizontalHeaderLabels(QStringList()<<"Letra"<<"ASCII"<<"Cifrado 1");
    ui->TW_Mostrar2->setRowCount(ListaABC.Cant);
    ActPtr = ListaABC.PrimPtr;
    PtrAct = ListaNormal.PrimPtr;
    nodo<int> *ColePtr = ListaOrdenada.PrimPtr;
    for (int f=0; f<ListaABC.Cant; ActPtr=ActPtr->SigPtr, PtrAct=PtrAct->SigPtr, ColePtr=ColePtr->SigPtr, f++) {
        ui->TW_Mostrar2->setItem(f,0,new QTableWidgetItem(QString::fromStdString("") + ActPtr->Dato));
        ui->TW_Mostrar2->setItem(f,1,new QTableWidgetItem(QString::number(PtrAct->Dato)));
        ui->TW_Mostrar2->setItem(f,2,new QTableWidgetItem(QString::number(ColePtr->Dato)));
    }
}

void cframe::ordenarVector(vector<int> &vec) {
    int n = vec.size();

    //elementos del vector
    for (int i = 0; i < n - 1; i++) {
        //comparar y intercambiar elementos
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

void cframe::on_Btn_Aceptar_clicked()
{
    if(ui->RB_Cifrar->isChecked()){
        cifrar();
    } else if (ui->RB_Descifrar->isChecked()) {
        descifrar();
    }
}

void cframe::mostrar(string ingresado, string criptico)
{
    ui->TW_Mostrar->setColumnCount(3);
    QStringList headers;
    headers << "Ingresado" << "Cifrar" << "Descifrar";
    ui->TW_Mostrar->setHorizontalHeaderLabels(headers);
    ui->TW_Mostrar->resizeColumnsToContents();
    int rowCount = ui->TW_Mostrar->rowCount();
    ui->TW_Mostrar->insertRow(rowCount);

    ui->TW_Mostrar->setItem(rowCount, 0, new QTableWidgetItem(QString::fromStdString(ingresado)));

    // Verificar si el radio button de cifrado está marcado
    if (ui->RB_Cifrar->isChecked()) {
        ui->TW_Mostrar->setItem(rowCount, 1, new QTableWidgetItem(QString::fromStdString(criptico)));

    }else{
        ui->TW_Mostrar->setItem(rowCount, 2, new QTableWidgetItem(QString::fromStdString(criptico)));

    }

    ui->TW_Mostrar->resizeColumnsToContents();

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
