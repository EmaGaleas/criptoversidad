#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include <lista.h>
#include <QMessageBox>
#include <nodoD.h>
#include <vector>
#include <QTimer>
#include <fstream>

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
    void on_rb_cifrar_clicked();

    void on_pushButton_clicked();

    void on_rb_descifrar_clicked();

private:
    Ui::cframe *ui;


    vector<long *> de2bi(long x);
    long Modular(long x, long N, long n);
    lista<char> criptoABC,Frase;
    lista<int> criptoINT;
    void insertarABC();
    void insertarINT();
    long encrypt(long);
    long decrypt(long);

};
#endif // CFRAME_H
