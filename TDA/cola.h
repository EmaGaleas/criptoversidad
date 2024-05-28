#ifndef COLA_H
#define COLA_H
#include <lista.h>

template <typename tipo>
class cola: public lista<tipo>{
private:
public:
    cola();
    ~cola();

    void Entra(const tipo &);
    bool Sale(tipo &);

};

template<typename tipo>
cola<tipo>::cola():lista<tipo> ()
{}

template<typename tipo>
cola<tipo>::~cola()
{
    lista<tipo>::Limpiar();
}

template<typename tipo>
void cola<tipo>::Entra(const tipo &Dato)
{
    lista<tipo>::InsertarFin(Dato);
}

template<typename tipo>
bool cola<tipo>::Sale(tipo &Dato)
{
    return lista<tipo>::EliminarInicio(Dato);
}

#endif // COLA_H
