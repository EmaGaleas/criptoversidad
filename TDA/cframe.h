#ifndef CFRAME_H
#define CFRAME_H
#include <QMainWindow>
#include <QMessageBox>
#include <lista.h>
#include <vector>
using std::vector;

QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_Btn_Aceptar_clicked();
    void mostrar(string,string);




private:
    Ui::cframe *ui;
    int Modular(int N, int a, int b);
    vector<int *> de2bi(int x);

    void cifrar();
    void descifrar();

    vector<char> criptoABC;
    vector<int> criptoCHAR;

    void llenarListaChars();

    void ordenarVector(vector<int>& vec);

    lista<char> ListaABC;
    lista<int> ListaNormal,ListaOrdenada;
    nodo<char> *ActPtr;
    nodo<int> *PtrAct;
    char Letra;
    int h,f,Pos;

    void MostrarListaSimple();
    void cifrar2();

    void PreOrden();//GUI
    void ListaChar();
    void ListaInt();

};
#endif // CFRAME_H
