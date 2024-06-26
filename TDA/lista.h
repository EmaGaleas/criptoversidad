#ifndef LISTA_H
#define LISTA_H
#include <nodo.h>
#include <iostream>
using std::cout;
using std::string;

template<typename tipo>
class lista{
    friend class cframe;
private:
    nodo<tipo> *PrimPtr;
    nodo<tipo> *UltPtr;
    int Cant;
public:
    lista();
    ~lista();
    void Limpiar();
    void InsertarInicio(const tipo &);
    void Insertar2daPos(const tipo &);
    void Insertar3raPos(const tipo &);
    void InsertarAntePenultimo(const tipo &);
    void InsertaPenultimo(const tipo &);
    void InsertarFinal(const tipo &);
    void InsertarCreciente(const tipo &);
    void InsertarDecreciente(const tipo &);
    void InsertarPosicion(const tipo &,int);
    bool EliminarInicio(tipo &);
    bool Eliminar2daPos(tipo &);
    bool Eliminar3raPos(tipo &);
    bool EliminarAntePenultimo(tipo &);
    bool EliminarPenultimo(tipo &);
    bool EliminarFinal(tipo &);
    bool EliminarCreciente(tipo &);
    bool EliminarDecreciente(tipo &);
    bool EliminarPosicion(tipo &,int);
    bool Vacia()const;
    bool Guardar(string Nombre)const;
    bool Importar(string Nombre);
};

template<typename tipo>
lista<tipo>::lista() : PrimPtr(0), UltPtr(0), Cant(0)
{}

template<typename tipo>
lista<tipo>::~lista()
{
    Limpiar();
}

template<typename tipo>
void lista<tipo>::Limpiar()
{
    if( !Vacia() ){
        cout<<"Limpiando Memoria!!!\n";
        nodo<tipo> *ActPtr = PrimPtr;
        nodo<tipo> *TempPtr;
        for( ; ActPtr!=0; Cant--){
            TempPtr = ActPtr;
            cout<<TempPtr->Dato<<"\t";
            ActPtr = ActPtr->SigPtr;
            delete TempPtr;
        }
        cout<<"Se Completo la destruccion con el Chasquido de Azalia!!!\n";
    }
}

template<typename tipo>
void lista<tipo>::InsertarInicio(const tipo &Dato)//ec
{
    nodo<tipo> *NuevoPtr = new nodo<tipo> (Dato);
    if(Vacia()){
       PrimPtr = UltPtr = NuevoPtr;
    }else{
        NuevoPtr->SigPtr = PrimPtr;
        PrimPtr = NuevoPtr;
    }
    Cant++;
}

template<typename tipo>
void lista<tipo>::InsertarFinal(const tipo &Dato)
{
    nodo<tipo> *NuevoPtr = new nodo<tipo> (Dato);
    if(Vacia()){
        PrimPtr = UltPtr = NuevoPtr;
    }else{
        UltPtr->SigPtr = NuevoPtr;
        UltPtr = NuevoPtr;
    }
    Cant++;
}

template<typename tipo>
void lista<tipo>::InsertarCreciente(const tipo &Dato)
{
    nodo<tipo> *P, *Q, *Ant;
    if (!PrimPtr || PrimPtr->Dato > Dato){
        InsertarInicio(Dato);
    }else{
        Q = PrimPtr;
        for ( ;Q && Q->Dato < Dato; Q=Q->SigPtr){
            Ant = Q;
        }
        P = new nodo<tipo>(Dato);
        Ant->SigPtr = P;
        P->SigPtr = Q;
    }
}

template<typename tipo>
bool lista<tipo>::EliminarInicio(tipo &Dato)
{
    if( !Vacia() ){
        nodo<tipo> *ElimPtr = PrimPtr;
        PrimPtr = PrimPtr->SigPtr;
        Dato = ElimPtr->Dato;
        delete ElimPtr;
        Cant--;
        return true;
    }else{
        return false;
    }
}

template<typename tipo>
bool lista<tipo>::Vacia()const
{
    return PrimPtr==0;
}

#endif // LISTA_H
