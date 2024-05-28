#ifndef COLAD_H
#define COLAD_H
#include <listaD.h>

template<typename tipo>
class colaD: public listaD<tipo>{
private:
public:
    colaD();
    ~colaD();
    void Empujar(const tipo &);
    bool Sacar(tipo &);

};

template<typename tipo>
colaD<tipo>::colaD() :listaD<tipo> () //llamar al constructor del padre
{}

template<typename tipo>
colaD<tipo>::~colaD()
{
    listaD<tipo>::Limpiar();
}

template<typename tipo>
void colaD<tipo>::Empujar(const tipo &Dato)
{
    listaD<tipo>::InsertarInicio(Dato);
}

template<typename tipo>
bool colaD<tipo>::Sacar(tipo &Dato)
{
    return listaD<tipo>::EliminarFin(Dato);
}


#endif // COLAD_H
