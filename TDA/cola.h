#ifndef COLA_H
#define COLA_H
#include <lista.h>
//Insertar al Final
//Eliminar del Frente

template<typename tipo>
class cola : public lista<tipo>{
private:
public:
    cola();
    ~cola();
    void Encolar(const tipo &);
    bool desencolar(tipo &);
};

template<typename tipo>
cola<tipo>::cola() : lista<tipo> ()
{}

template<typename tipo>
cola<tipo>::~cola()
{
    lista<tipo>::Limpiar();
}

template<typename tipo>
void cola<tipo>::Encolar(const tipo &Dato)
{
    lista<tipo>::InsertarFinal(Dato);
}

template<typename tipo>
bool cola<tipo>::desencolar(tipo &Dato)
{
    return lista<tipo>::EliminarInicio(Dato);
}
#endif // COLA_H
