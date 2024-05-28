#ifndef LISTAD_H
#define LISTAD_H
#include <nodoD.h>
#include <iostream>
#include <QMessageBox>

using std::cout;
using std::string;

template<typename tipo>
class listaD{
    friend class cframe;
private:
    nodoD<tipo> *PrimPtr;
    nodoD<tipo> *UltPtr;
    int Cantidad;

public:
    listaD();
    ~listaD();
    void actualizarUltimo();
    void InsertarInicio(const tipo &);
    void Insertar2daPos(const tipo &);
    void Insertar3raPos(const tipo &);
    void Insertar4taPos(const tipo &);
    void InsertarAntePneultima(const tipo &);
    void InsertarPenultima(const tipo &);
    void InsertarFin(const tipo &);
//    void InsertarCreciente(const tipo &);
//    void InsertarDecreciente(const tipo &);
    bool InsertarPosicion(const tipo &,int);

    bool EliminarInicio(tipo &);
//    bool Eliminar2daPos(tipo &);
//    bool Eliminar3raPos(tipo &);
//    bool EliminarAntePneultima(tipo &);
//    bool EliminarPenultima(tipo &);
    bool EliminarFin(tipo &);
//    bool EliminarCreciente(tipo &);
//    bool EliminarDecreciente(tipo &);
//    bool EliminarPosicion(tipo &,int);

    bool Vacia()const;
//    bool Guardar(string Nombre)const;
//    bool Importar(string Nombre);
    void Limpiar();


};

template<typename tipo>
listaD<tipo>::listaD() :PrimPtr(0),UltPtr(0), Cantidad(0)
{}

template<typename tipo>
listaD<tipo>::~listaD()
{
    if (!Vacia()) {
        cout << "Limpiando\n" << std::endl;
        nodoD<tipo> *ptrAct = PrimPtr;
        nodoD<tipo> *ptrTemp;
        while (ptrAct != 0) {
            ptrTemp = ptrAct;
            cout << ptrTemp->Dato << "\n";
            ptrAct = ptrAct->SigPtr;
            if (ptrAct != nullptr) {
                ptrAct->AntPtr = nullptr;
            }
            Cantidad--;
            delete ptrTemp;
        }
        cout << "Vacio\n";
    }
}

template<typename tipo>
void listaD<tipo>::actualizarUltimo()
{
    nodoD<tipo> *temp = PrimPtr;
    while (temp->SigPtr != nullptr) {
        temp = temp->SigPtr;
    }
    UltPtr = temp;

}

template<typename tipo>
void listaD<tipo>::InsertarInicio(const tipo &Dato)
{
    nodoD<tipo> *Nuevo= new nodoD<tipo>(Dato);
    if(Vacia()){
       // PrimPtr =Nuevo=UltPtr;
        PrimPtr=Nuevo;
        UltPtr=Nuevo;
    }else{
        Nuevo->SigPtr= PrimPtr;
        PrimPtr->AntPtr= Nuevo;
        PrimPtr=Nuevo;
    }
    Cantidad++;

}

template<typename tipo>
void listaD<tipo>::Insertar2daPos(const tipo &Dato)
{
    nodoD<tipo> *Nuevo= new nodoD<tipo>(Dato);
    if(Vacia()){
        PrimPtr=UltPtr=Nuevo;
    }else{
        if(Cantidad==1){
            Nuevo->SigPtr=nullptr;
            Nuevo->AntPtr=PrimPtr;
            UltPtr=Nuevo;
            PrimPtr->SigPtr=Nuevo;
        }else{
            Nuevo->SigPtr=PrimPtr->SigPtr;
            Nuevo->AntPtr=PrimPtr;
            PrimPtr->SigPtr->AntPtr=Nuevo;
            PrimPtr->SigPtr=Nuevo;
        }
    }
    Cantidad++;

}

template<typename tipo>
void listaD<tipo>::Insertar3raPos(const tipo &Dato)
{
    nodoD<tipo> *Nuevo= new nodoD<tipo>(Dato);
    if(Vacia() || Cantidad==1){
        Insertar2daPos(Dato);
    }else{
        if(Cantidad==2){
            Nuevo->SigPtr=nullptr;
            Nuevo->AntPtr=PrimPtr->SigPtr;
            PrimPtr->SigPtr->SigPtr=Nuevo;
            UltPtr=Nuevo;
        }else{
            Nuevo->SigPtr=PrimPtr->SigPtr->SigPtr;
            Nuevo->AntPtr=PrimPtr->SigPtr;
            PrimPtr->SigPtr->SigPtr->AntPtr=Nuevo;
            PrimPtr->SigPtr->SigPtr=Nuevo;
        }
        Cantidad++;
    }

}

template<typename tipo>
void listaD<tipo>::Insertar4taPos(const tipo &Dato)
{
    nodoD<tipo> *Nuevo= new nodoD<tipo>(Dato);
    if(Vacia() || Cantidad<=2){
        Insertar3raPos(Dato);
    }else{
        if(Cantidad==3){
            Nuevo->SigPtr=nullptr;
            Nuevo->AntPtr=PrimPtr->SigPtr->SigPtr;
            PrimPtr->SigPtr->SigPtr->SigPtr=Nuevo;
            UltPtr=Nuevo;
        }else{
            Nuevo->SigPtr=PrimPtr->SigPtr->SigPtr->SigPtr;
            Nuevo->AntPtr=PrimPtr->SigPtr->SigPtr;
            PrimPtr->SigPtr->SigPtr->SigPtr->AntPtr=Nuevo;
            PrimPtr->SigPtr->SigPtr->SigPtr=Nuevo;
        }
        Cantidad++;
    }
}

template<typename tipo>
void listaD<tipo>::InsertarAntePneultima(const tipo &Dato)
{
    if(Vacia() || Cantidad<=2){
        InsertarInicio(Dato);
    }else{
        nodoD<tipo>*nuevo = new nodoD<tipo>(Dato);
        nodoD<tipo>*Curr = PrimPtr;
        nodoD<tipo>*Ante = 0;
        while(Curr->SigPtr->SigPtr!=0){
            Ante = Curr;
            Curr = Curr->SigPtr;
            Curr->AntPtr = Ante;
        }
        Ante->SigPtr = nuevo;
        nuevo->AntPtr = Ante;
        nuevo->SigPtr = Curr;
        Curr->AntPtr = nuevo;
        //       A C
        // A B C D E F
        //        X
        Cantidad++;
    }
}

template<typename tipo>
void listaD<tipo>::InsertarPenultima(const tipo &Dato)
{
    if(Vacia() || Cantidad==1){
        InsertarInicio(Dato);
    }else{
        nodoD<tipo> *nuevo=new nodoD<tipo>(Dato);
        nuevo->SigPtr=UltPtr;
        nuevo->AntPtr=UltPtr->AntPtr;
        UltPtr->AntPtr->SigPtr=nuevo;
        UltPtr->AntPtr=nuevo;
        Cantidad++;
    }
}

template<typename tipo>
void listaD<tipo>::InsertarFin(const tipo &Dato)
{
    if(Vacia()){
        InsertarInicio(Dato);
    }else{
        if(Cantidad==1){
            Insertar2daPos(Dato);
        }else{
            nodoD<tipo> *nuevo=new nodoD<tipo>(Dato);
            nuevo->SigPtr=0;
            nuevo->AntPtr=UltPtr;
            UltPtr->SigPtr=nuevo;
            UltPtr=nuevo;
            Cantidad++;
        }
    }
}

template<typename tipo>
bool listaD<tipo>::InsertarPosicion(const tipo &Dato, int pos)
{
    if(Vacia() || Cantidad+1<pos){
        return false;
    }else{
        if(pos==1){
            InsertarInicio(Dato);
        }else if(Cantidad+1==pos){
            InsertarFin(Dato);
        }else{
            nodoD<tipo> *temp=PrimPtr;
            nodoD<tipo> *nuevo=new nodoD<tipo>(Dato);

            for(int i=1;i<pos-1;i++){
                temp=temp->SigPtr;
            }
            nuevo->SigPtr=temp->SigPtr;
            nuevo->AntPtr=temp;
            temp->SigPtr=nuevo;

            UltPtr=(Cantidad==pos-1) ? nuevo : UltPtr;
            Cantidad++;
        }
        return true;
    }

}

template<typename tipo>
bool listaD<tipo>::EliminarInicio(tipo &Dato)
{
    if(Vacia()){
        return false;
    }else{
        if (Cantidad == 1 && PrimPtr->Dato==Dato) {
                delete PrimPtr;
                PrimPtr=nullptr;
                UltPtr=nullptr;
                Cantidad = 0;
                return true;

        }else if(PrimPtr->Dato==Dato && Cantidad>1){
            nodoD<tipo> *eliminar=PrimPtr;
            PrimPtr = PrimPtr->SigPtr;
            PrimPtr->AntPtr=0;
            delete eliminar;
            Cantidad--;
            actualizarUltimo();
            return true;
        }

    }
    return false;
}

template<typename tipo>
bool listaD<tipo>::EliminarFin(tipo &Dato)
{
    if (!Vacia()) {
        if (Cantidad == 1) {
            if (PrimPtr->Dato == Dato) {
                delete PrimPtr;
                PrimPtr = UltPtr = nullptr;
                Cantidad = 0;
                return true;
            }
        } else {
            if (UltPtr->Dato == Dato) {
                nodoD<tipo> *ptrMantener = UltPtr->AntPtr;

                delete UltPtr;
                UltPtr = ptrMantener;
                if (UltPtr != nullptr) {
                    UltPtr->SigPtr = nullptr;
                    UltPtr->AntPtr = ptrMantener->AntPtr;

                }
                Cantidad--;
                return true;
            }
        }
    }
    return false;
}



template<typename tipo>
bool listaD<tipo>::Vacia() const
{
    return PrimPtr==nullptr;
}

template<typename tipo>
void listaD<tipo>::Limpiar()
{
    listaD<tipo>::~listaD();

}
#endif // LISTAD_H
