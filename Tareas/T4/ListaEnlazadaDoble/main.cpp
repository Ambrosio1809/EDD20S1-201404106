#include <iostream>

using namespace std;
class NodoLD{
    public: char dato;
    NodoLD*Siguiente;
    NodoLD*Anterior;
};

void InsertarLD(NodoLD*,char);
void EliminarLD(NodoLD*);


int main()
{
    NodoLD *lista  = NULL;
    cout << "Hello world!" << endl;
    return 0;
}

void InsertarLD(NodoLD* lista, char x){
    NodoLD *nuevo = new NodoLD();
    nuevo->dato=x;
    NodoLD *aux1=lista;

    if(lista==aux1){
            lista = nuevo;
            //nuevo->Siguiente=aux1;
            //aux1->Anterior = nuevo;
    }else{
        lista->Siguiente=nuevo;
        aux1= nuevo;
        aux1->Anterior=lista;
    }
    cout<<"Nodo Ingresado"
}

