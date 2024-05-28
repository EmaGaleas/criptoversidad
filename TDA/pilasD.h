#ifndef PILASD_H
#define PILASD_H
#include <listaD.h>

template<typename tipo>
class pilasD: public listaD<tipo>{
private:
public:
    pilasD();
    ~pilasD();
    void Empujar(const tipo &);
    bool Sacar(tipo &);
};

template<typename tipo>
pilasD<tipo>::pilasD() :listaD<tipo> () //llamar al constructor del padre
{}

template<typename tipo>
pilasD<tipo>::~pilasD()
{
    listaD<tipo>::Limpiar();
}

template<typename tipo>
void pilasD<tipo>::Empujar(const tipo &Dato)
{
    listaD<tipo>::InsertarInicio(Dato);
}

template<typename tipo>
bool pilasD<tipo>::Sacar(tipo &Dato)
{
    return listaD<tipo>::EliminarInicio(Dato);
}

#endif // PILASD_H
