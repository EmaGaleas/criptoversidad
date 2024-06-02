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


        // Busca la posición del valor modulado en la lista de caracteres disponibles
        for (int pos = 0; pos < chars.size(); pos++)
        {
            if (charsMod.at(pos) == mod) {
                cifrado += chars.at(pos);
                break;
            }
        }
    }

    QMessageBox::information(this, "ENCRIPTADO", QString::fromStdString(cifrado));
    return;

    /*
    PtrAct = N.PrimPtr;
    for (; PtrAct!=0; PtrAct=PtrAct->SigPtr) {
        O.InsertarCreciente(Modular(PtrAct->Dato,11413,3533));
        //QMessageBox::information(this,".:.",QString::number(Modular(PtrAct->Dato,11413,3533)));
        //QMessageBox::information(this,".:.",QString::number(Modular(PtrAct->Dato,11413,3533))+"\t"+QString::number(O.PrimPtr->Dato));
    }
    */
}

void cframe::descifrar() {
    string cifrado = ui->TBx_Frase->text().toStdString();
    string descifrado = "";

    for (int i = 0; i < cifrado.size(); i++) {
        // Buscar la posicion de ese char en los disponibles
        int posC;

        for (int pos = 0; pos < chars.size(); pos++) {
            if (chars.at(pos) == cifrado.at(i)) {
                posC = pos;
                break;
            }
        }

        int mod = charsMod.at(posC);

        int inversa = Modular(mod, 11413, 6597);
        cout << inversa << "\n";
        cout << (char) mod << "\n";

        descifrado += (char) inversa;

    }

    QMessageBox::information(this, "ASD", QString::fromStdString(descifrado));
}

void cframe::on_Btn_Aceptar_clicked()
{
    if(ui->RB_Cifrar->isChecked()){
        cifrar();
    } else if (ui->RB_Descifrar->isChecked()) {
        descifrar();
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
