#ifndef NODOD_H
#define NODOD_H
#include <iostream>
using std::cout;
using std::string;

template<typename tipo> class listaD;
template<typename tipo> class arbol;
template<typename tipo>
class nodoD{
    friend class listaD<tipo>;
    friend class arbol<tipo>;
    friend class cframe;
private:
    nodoD<tipo> *AntPtr;
    tipo Dato;
    nodoD<tipo> *SigPtr;
public:
    nodoD(const tipo &);
    nodoD(nodoD<tipo> *, const tipo &, nodoD<tipo> *);
    tipo getDato()const;
    void setDato(const tipo &);
    nodoD<tipo>* SubArbolIzq();
    nodoD<tipo>* SubArbolDer();
    void ramaIzq(nodoD<tipo>* );
    void ramaDer(nodoD<tipo>*);
};

template<typename tipo>
nodoD<tipo>::nodoD(const tipo &Dato) : AntPtr(0), Dato(Dato), SigPtr(0)
{}

template<typename tipo>
nodoD<tipo>::nodoD(nodoD<tipo> *IzqPtr,const tipo &Dato, nodoD<tipo> *DerPtr) : AntPtr(IzqPtr), Dato(Dato), SigPtr(DerPtr){}

template<typename tipo>
tipo nodoD<tipo>::getDato() const
{
    return Dato;
}

template<typename tipo>
void nodoD<tipo>::setDato(const tipo &Dato)
{
    this->Dato = Dato;
}

//Exclusivo para Manejo de Árboles Binarios y/o AVL
template<typename tipo>
nodoD<tipo> *nodoD<tipo>::SubArbolIzq(){
    return this->AntPtr;
}

template<typename tipo>
nodoD<tipo> *nodoD<tipo>::SubArbolDer()
{
    return this->SigPtr;
}

template<typename tipo>
void nodoD<tipo>::ramaIzq(nodoD<tipo> *IzqPtr)
{
    this->AntPtr = IzqPtr;
}

template<typename tipo>
void nodoD<tipo>::ramaDer(nodoD<tipo> *DerPtr)
{
    this->SigPtr = DerPtr;
}

#endif // NODOD_H
