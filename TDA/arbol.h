#ifndef ARBOL_H
#define ARBOL_H

#include <nodoD.h>

template<typename tipo>
class arbol{
    friend class cframe;
private:
    nodoD<tipo> *RaizPtr;
    int Cant;
public:
    arbol();
    arbol(nodoD<tipo>* );
    ~arbol();
    void Vaciar(nodoD<tipo> *);
    void setRaiz(nodoD<tipo> *);
    nodoD<tipo>* getRaiz();
    bool esVacio();
    bool esLleno(nodoD<tipo>*);
    nodoD<tipo> *hijoIzq();
    nodoD<tipo> *hijoDer();
    nodoD<tipo> raizArbol();
    nodoD<tipo> *nuevoArbol(nodoD<tipo> *, const tipo &, nodoD<tipo> *);
    //Recorridos en CLI, para GUI se Hacen en el cframe
    void PreOrden();
    void PreOrden(nodoD<tipo>*);
    void PostOrden();
    void PostOrden(nodoD<tipo>*);
    void InOrden();
    void InOrden(nodoD<tipo>*);

    //07/03/2024
    int Altura(nodoD<tipo>*);
    int CantNodos(nodoD<tipo>*);

    void CopiarArbol(arbol &);
    nodoD<tipo>* CopiarArbol(nodoD<tipo>*);
    nodoD<tipo>* Buscar(tipo);
    nodoD<tipo>* Buscar(nodoD<tipo>*, tipo);

    //Examen
    void insertar (tipo &);
    nodoD<tipo>* insertar(nodoD<tipo>*, tipo &);
};

template<typename tipo>
arbol<tipo>::arbol() : RaizPtr(0), Cant(0) {}

template<typename tipo>
arbol<tipo>::arbol(nodoD<tipo> *r) : RaizPtr(r), Cant(1){}

template<typename tipo>
arbol<tipo>::~arbol()
{
    Vaciar(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::Vaciar(nodoD<tipo> *ActPtr)
{
    if (ActPtr != 0){
        Vaciar(ActPtr->SubArbolIzq());
        Vaciar(ActPtr->SubArbolDer());
        cout<<"\tDeforestando...\n";
        ActPtr = nullptr;
        delete ActPtr;
    }
}

template<typename tipo>
void arbol<tipo>::setRaiz(nodoD<tipo> *n) {
    this->RaizPtr = n;
}

template<typename tipo>
nodoD<tipo>* arbol<tipo>::getRaiz() {
    return RaizPtr;
}

template<typename tipo>
bool arbol<tipo>::esVacio()
{
    return RaizPtr==0;
}

template<typename tipo>
bool arbol<tipo>::esLleno(nodoD<tipo> *RaizPtr)
{
    if (RaizPtr == 0){
        return true;
    }else{
        if ( Altura(RaizPtr->SubArbolIzq()) != Altura(RaizPtr->SubArbolDer()) ){
            return false;
        }else{
            return esLleno(RaizPtr->SubArbolIzq()) && esLleno(RaizPtr->SubArbolDer());
        }
    }
}

template<typename tipo>
nodoD<tipo> arbol<tipo>::raizArbol(){
    if(RaizPtr)
        return *RaizPtr;
    else
        throw "Arbol es Vacio";
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::hijoIzq()
{
    if(RaizPtr){
        return RaizPtr->SubArboIzq();
    }else{
        throw std::runtime_error("Árbol vacío");
    }
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::hijoDer()
{
    if(RaizPtr){
        return RaizPtr->SubArbolDer();
    }else{
        throw std::runtime_error("Arbol vacio");
   }
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::nuevoArbol(nodoD<tipo> *IzqPtr, const tipo &Dato, nodoD<tipo> *DerPtr)
{
    return new nodoD<tipo>(IzqPtr, Dato, DerPtr);
}

template<typename tipo>
void arbol<tipo>::PreOrden()
{
    PreOrden(RaizPtr);
}

template<typename tipo>//CLI
void arbol<tipo>::PreOrden(nodoD<tipo> *ActPtr)//R,I,D
{
    if(ActPtr != 0){
        cout<<ActPtr->Dato;
        PreOrden(ActPtr->SubArbolIzq());
        PreOrden(ActPtr->SubArbolDer());
    }
}

template<typename tipo>
void arbol<tipo>::PostOrden()
{
    PostOrden(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::PostOrden(nodoD<tipo> *ActPtr)//I,D,R
{
    if(ActPtr != 0){
        PostOrden(ActPtr->SubArbolIzq());
        PostOrden(ActPtr->SubArbolDer());
        cout<<ActPtr->Dato;
    }
}

template<typename tipo>
void arbol<tipo>::InOrden()
{
    InOrden(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::InOrden(nodoD<tipo> *ActPtr)//I,R,D
{
    if(ActPtr != 0){
        InOrden(ActPtr->SubArbolIzq());
        cout<<ActPtr->Dato;
        InOrden(ActPtr->SubArbolDer());
    }
}

template<typename tipo>
int arbol<tipo>::Altura(nodoD<tipo> *RaizPtr)
{
    if (RaizPtr == 0){
        return 0 ;
    }else{
        int alturaIz = Altura(RaizPtr->SubArbolIzq());
        int alturaDr = Altura(RaizPtr->SubArbolDer());
        if (alturaIz > alturaDr)
            return alturaIz + 1;
        else
            return alturaDr + 1;
    }
}

template<typename tipo>
int arbol<tipo>::CantNodos(nodoD<tipo> *RaizPtr)
{
    if (RaizPtr == 0){
        return 0;
    }else{
        return 1 + CantNodos(RaizPtr->SubArbolIzq()) + CantNodos(RaizPtr->SubArbolDer());
    }
}

template<typename tipo>
void arbol<tipo>::CopiarArbol(arbol &A)
{
    A.setRaiz(CopiarArbol(this->RaizPtr));
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::CopiarArbol(nodoD<tipo> *RaizPtr)
{
    nodoD<tipo> *Copia;
    if (RaizPtr == 0){
        Copia = 0;
    }else{
        nodoD<tipo>* izq, *der;
        izq = CopiarArbol(RaizPtr->SubArbolIzq());
        der = CopiarArbol(RaizPtr->SubArbolDer());
        Copia = new nodoD<tipo>( izq,RaizPtr->Dato, der);
    }
    return Copia;
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::Buscar(tipo Buscado)
{
    return Buscar(RaizPtr, Buscado);
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::Buscar(nodoD<tipo> *Raiz, tipo Buscado)
{
    if (Raiz == 0){
        return 0;
    }else if (Buscado == Raiz->getDato()){
        return Raiz;
    }else if (Buscado < Raiz->getDato()){
        return Buscar(Raiz->SubArbolIzq(), Buscado);
    }else{
        return Buscar (Raiz->SubArbolDer(), Buscado);
    }
}

template<typename tipo>
void arbol<tipo>::insertar(tipo &Dato)
{
    this->RaizPtr = insertar(RaizPtr, Dato);
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::insertar(nodoD<tipo> *Raiz, tipo &Dato)
{
    if (Raiz == 0){
        Raiz = new nodoD<tipo>(Dato);
    }else if(Dato < Raiz->getDato()){
        nodoD<tipo>*Izq;
        Izq = insertar(Raiz->SubArbolIzq(),Dato);
        Raiz->ramaIzq(Izq);
    }else if(Dato > Raiz->getDato()){
        nodoD<tipo>* Der;
        Der = insertar(Raiz->SubArbolDer(),Dato);
        Raiz->ramaDer(Der);
    }else{
        throw "Nodo duplicado"; // tratamiento de repetición
    }
    return Raiz;
}


/*
*/
#endif // ARBOL_H
