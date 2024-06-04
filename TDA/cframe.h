#ifndef CFRAME_H
#define CFRAME_H
#include <QMainWindow>
#include <QMessageBox>
#include <vector>
using std::vector;
using std::string;

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

    void on_pushButton_clicked();

private:
    Ui::cframe *ui;
    int Modular(int N, int a, int b);
    vector<int *> de2bi(int x);

    string cifrar(string cadena);
    bool descifrar();

    vector<char> criptoABC1;
    vector<int> criptoCHAR;

    void llenarListaChars();

    void ordenarVector(vector<int>& vec);

    string stuff;
    string extraer();
    QString texto;
    QString rutaArchivo = "C:\\Users\\pcast\\OneDrive - Universidad Tecnologica Centroamericana\\q\\Q2 2024\\CRIPTOVERSIDAD\\criptoversidad\\ma.txt";


};
#endif // CFRAME_H
