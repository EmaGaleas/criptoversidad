#ifndef ARBOL_H
#define ARBOL_H
#include <nodoD.h>

template<typename tipo>
class arbol{
    friend class cframe;
private:
    nodoD<tipo> *RaizPtr;
    void preOrden(nodoD<tipo> *actPtr);//se le enviara la raiz
    void postOrden(nodoD<tipo> *actPtr);
    void InOrden(nodoD<tipo> *actPtr);
    int Cant;
    void vaciar(nodoD<tipo>* r);
public:
    arbol();
    ~arbol();
    arbol(nodoD<tipo>* r);
    void setRaiz(nodoD<tipo> *n);
    nodoD<tipo>* getRaiz();
    bool esVacio();
    nodoD<tipo> *hijoIzq();
    nodoD<tipo> *hijoDer();
    nodoD<tipo> raizArbol();
    nodoD<tipo> *nuevoArbol(nodoD<tipo> *Derecha, const tipo &Dato, nodoD<tipo> *Izquierda);

    //recorridos con sobrecarga de metodos PARA CLI (COMMAND LINE INTERFACE)
    void preOrden();
    void postOrden();
    void InOrden();

    int altura(nodoD<tipo> *r);
    void vaciar();
    void insertar(const tipo &Dato);
    nodoD<tipo>* insertar(nodoD<tipo> *r,const tipo &Dato);

};

template<typename tipo>
void arbol<tipo>::preOrden()
{
    preOrden(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::postOrden()
{
    postOrden(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::InOrden()
{
    InOrden(RaizPtr);
}


template<typename tipo>
void arbol<tipo>::preOrden(nodoD<tipo> *actPtr)//RID
{
    if (actPtr != 0){
         actPtr->getDato();
         preOrden(actPtr->SubArboIzq());
         preOrden(actPtr->SubArbolDel());
    }
}

template<typename tipo>
void arbol<tipo>::postOrden(nodoD<tipo> *actPtr)//IDR
{
    if (actPtr != 0){
        postOrden(actPtr->SubArboIzq());
        postOrden(actPtr->SubArbolDel());
        actPtr->getDato();
    }
}

template<typename tipo>
void arbol<tipo>::InOrden(nodoD<tipo> *actPtr)//IRD
{
    if (actPtr != 0){
        InOrden(actPtr->SubArboIzq());
        actPtr->getDato();
        InOrden(actPtr->SubArbolDel());
    }
}


template<typename tipo>
arbol<tipo>::arbol() : RaizPtr(0) , Cant(0){}

template<typename tipo>
arbol<tipo>::~arbol()
{
    vaciar();
}
template<typename tipo>
int arbol<tipo>::altura(nodoD<tipo> *r)
{
    if (r == 0){
        return 0 ;
    }else{
        int alturaIz = altura(r->SubArboIzq());
        int alturaDr = altura(r->SubArbolDel());
        if (alturaIz > alturaDr)
            return alturaIz + 1;
        else
            return alturaDr + 1;
    }
}

template<typename tipo>
void arbol<tipo>::vaciar()
{
    vaciar(RaizPtr);
}

template<typename tipo>
void arbol<tipo>::vaciar(nodoD<tipo> *r)
{
    if(r!=0){
        vaciar(r->SubArboIzq());
        vaciar(r->SubArbolDel());
        r=nullptr;
        delete r;
    }
}


template<typename tipo>
arbol<tipo>::arbol(nodoD<tipo> *r) : RaizPtr(r){}

template<typename tipo>
void arbol<tipo>::setRaiz(nodoD<tipo> *n) {
    this->RaizPtr = n;
}

template<typename tipo>
bool arbol<tipo>::esVacio()
{
    return RaizPtr==0;
}

template<typename tipo>
nodoD<tipo>* arbol<tipo>::getRaiz() {
    return RaizPtr;
}

template<typename tipo>
nodoD<tipo> arbol<tipo>::raizArbol(){
    if(RaizPtr)
        return *RaizPtr;
    else
        throw std::runtime_error("Árbol es Vacío");
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
    Cant++;
    return new nodoD<tipo>(IzqPtr, Dato, DerPtr);
}

template<typename tipo>
void arbol<tipo>::insertar(const tipo &dato)
{
    RaizPtr = insertar(RaizPtr,dato);
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::insertar(nodoD<tipo> *r,const tipo &dato)
{
    if (r == 0){
        r = nuevoArbol(0, dato, 0);
        Cant ++;
    }else if (dato < r->getDato()){
         nodoD<tipo> *iz;
         iz = insertar(r->SubArboIzq(), dato);
         r->ramaIzda(iz);
         Cant ++;
    }else if (dato > r->getDato()){
        nodoD<tipo>  *dr;
        dr = insertar(r->SubArbolDel(), dato);
        r->ramaDcha(dr);
        Cant ++;
    }else{
        throw "Nodo duplicado"; // tratamiento de repetición
        return r;
    }

}


#endif // ARBOL_H

