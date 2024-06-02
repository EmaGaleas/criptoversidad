#ifndef PILA_H
#define PILA_H
#include <lista.h>

template<typename tipo>
class pila : public lista<tipo>{
private:
public:
    pila();
    ~pila();
    void Empujar(const tipo &);
    bool Sacar(tipo &);
};

template<typename tipo>
pila<tipo>::pila() : lista<tipo> ()
{}

template<typename tipo>
pila<tipo>::~pila()
{
    lista<tipo>::Limpiar();
}

template<typename tipo>
void pila<tipo>::Empujar(const tipo &Dato)
{
    lista<tipo>::InsertarInicio(Dato);
}

template<typename tipo>
bool pila<tipo>::Sacar(tipo &Dato)
{
    return lista<tipo>::EliminarInicio(Dato);
}

#endif // PILA_H
