#ifndef CFRAME_H
#define CFRAME_H
#include <QMainWindow>
#include <QMessageBox>
#include <lista.h>
#include <listaD.h>
#include <arbol.h>
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


};
#endif // CFRAME_H
