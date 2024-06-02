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

    /*
     * Prepara la lista de caracteres para la encriptacion
     */
    void llenarListaChars() {
        chars.push_back(' ');
        chars.push_back('!');
        chars.push_back('#');
        chars.push_back('$');
        chars.push_back(',');
        chars.push_back('.');

        // Insertar los caracteres del 0 al 9 (estos la suma que se le hace es convertida a char)
        for (int i = 0; i < 10; i++) {
            chars.push_back('0' + i);
        }

        chars.push_back(';');

        // Insertar el alfabeto en mayuscula
        for (int i = 0; i < 26; i++) {
            chars.push_back('A' + i);
        }

        // Insertar el alfabeto en minuscula
        for (int i = 0; i < 26; i++) {
            chars.push_back('a' + i);
        }

        // Popular charsMod
        for (int i = 0; i< chars.size(); i++) {
            charsMod.push_back(Modular((int) chars.at(i), 11413, 3533));
        }

        ordenarVector(charsMod);
    }

    void ordenarVector(vector<int>& vec) {
        int n = vec.size();

        // Bucle externo para iterar a través de todos los elementos del vector
        for (int i = 0; i < n - 1; i++) {
            // Bucle interno para comparar y intercambiar elementos
            for (int j = 0; j < n - i - 1; j++) {
                // Si el elemento actual es mayor que el siguiente elemento, intercambiarlos
                if (vec[j] > vec[j + 1]) {
                    // Intercambiar los elementos
                    int temp = vec[j];
                    vec[j] = vec[j + 1];
                    vec[j + 1] = temp;
                }
            }
        }
    }

    /*
     * Cifra la cadena ingresa en el TextBox
     */
    void cifrar();
    void descifrar();

    vector<char> chars;
    vector<int> charsMod; // Lista de los caracteres disponibles modulados en orden ascendente.
};
#endif // CFRAME_H
