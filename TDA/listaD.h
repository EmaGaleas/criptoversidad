#ifndef listaDD_H
#define listaDD_H
#include <nodoD.h>

template<typename tipo>
class listaD{
    friend class cframe;
private:
    nodoD<tipo> *PrimPtr;
    nodoD<tipo> *UltPtr;
    int Cant;
public:
    listaD();
    ~listaD();
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
listaD<tipo>::listaD() : PrimPtr(0), UltPtr(0), Cant(0)
{}

template<typename tipo>
listaD<tipo>::~listaD()
{
    Limpiar();
}

template<typename tipo>
void listaD<tipo>::Limpiar()
{
    if( !Vacia() ){
        cout<<"Limpiando Memoria!!!\n";
        nodoD<tipo> *ActPtr = PrimPtr;
        nodoD<tipo> *TempPtr;
        for( ; ActPtr!=0; Cant--){
            TempPtr = ActPtr;
            cout<<TempPtr->Dato<<"\t";
            ActPtr = ActPtr->SigPtr;
            ActPtr->AntPtr = 0;
            delete TempPtr;
        }
        cout<<"Se Completo la destruccion con el Chasquido de Azalia!!!\n";
    }
}

template<typename tipo>
void listaD<tipo>::InsertarInicio(const tipo &Dato)
{
    nodoD<tipo> *NuevoPtr = new nodoD<tipo> (Dato);
    if(Vacia()){
       PrimPtr = UltPtr = NuevoPtr;
    }else{
        NuevoPtr->SigPtr = PrimPtr;
        PrimPtr->AntPtr = NuevoPtr;
        PrimPtr = NuevoPtr;
    }
    Cant++;
}

template<typename tipo>
void listaD<tipo>::InsertarFinal(const tipo &Dato)
{
    nodoD<tipo> *NuevoPtr = new nodoD<tipo> (Dato);
    if(Vacia()){
        PrimPtr = UltPtr = NuevoPtr;
    }else{
        UltPtr->SigPtr = NuevoPtr;
        NuevoPtr->AntPtr = UltPtr;
        UltPtr = NuevoPtr;
    }
    Cant++;
}

template<typename tipo>
bool listaD<tipo>::EliminarInicio(tipo &Dato)
{
    if( !Vacia() ){
        nodoD<tipo> *ElimPtr = PrimPtr;
        PrimPtr = PrimPtr->SigPtr;
        PrimPtr->AntPtr = 0;
        Dato = ElimPtr->Dato;
        delete ElimPtr;
        Cant--;
        return true;
    }else{
        return false;
    }
}

template<typename tipo>
bool listaD<tipo>::Vacia()const
{
    return PrimPtr==0;
}

#endif // listaDD_H
