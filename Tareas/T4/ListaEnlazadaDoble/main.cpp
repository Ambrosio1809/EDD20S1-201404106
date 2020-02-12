#include <iostream>

using namespace std;

class NodoLD{
    public: char dato;
    NodoLD*Siguiente;
    NodoLD*Anterior;
}*primero,*ultimo;

void InsertarLD(char);
void mostrar();
void EliminarLD();
void buscarN();
void menu();

int main()
{
    menu();
    return 0;
}

void InsertarLD(char x){
    NodoLD *nuevo = new NodoLD();
    nuevo->dato=x;

    if(primero==NULL){
            primero = nuevo;
            primero->Siguiente=NULL;
            primero->Anterior=NULL;
            ultimo=primero;
    }else{
        ultimo->Siguiente=nuevo;
        nuevo->Siguiente=NULL;
        nuevo->Anterior=ultimo;
        ultimo = nuevo;
    }
    cout<<"Nodo Ingresado";
}
void mostrar(){
    NodoLD* actual = new NodoLD();
    actual = primero;

    if(primero!=NULL){
            while(actual!=NULL){
                    cout<<"\n"<<actual->dato;
                    actual=actual->Siguiente;
            }

    }else{
        cout<<"\n lista vacia";
    }

}

void EliminarLD(){
    NodoLD*actual = new NodoLD();
    actual = primero;
    NodoLD*anterior = new NodoLD();
    anterior = NULL;

    if(primero!=NULL){

            while(actual!=NULL){

                    if(actual==ultimo){
                            cout<<"nodo ultimo localizado \n";
                            anterior->Siguiente=NULL;
                            ultimo = anterior;
                            cout<<"Nodo eliminado \n";
                    }
            anterior=actual;
            actual=actual->Siguiente;
            }


    }else{
        cout<<"lista vacia \n";
    }
}
void buscarN(char NBuscado){
    NodoLD*actual = new NodoLD();
    actual = primero;
    bool encontrado = false;
    if(primero!=NULL){
            while(actual!=NULL && encontrado !=true){
                    if(actual->dato==NBuscado){
                        cout<<"Nodo encontrado en la lista;";
                        encontrado = true;
                    }
                    actual=actual->Siguiente;

            }
            if(!encontrado){
                cout<<"Nodo no encontrado\n";
            }

    }else{
        cout<<"\n la lista se encuentra vacia";
    }
}

void menu(){
    int seleccion;
    char dato;
    string cadena;
    do{
            cout<<"Bienvenido, Seleccione la opción que desee:\n";
            cout<<"1.Insertar:\n";
            cout<<"2.Eliminar\n";
            cout<<"3.Buscar\n";
            cout<<"4.Mostrar\n";
            cout<<"5.Salir\n";
            cin>>seleccion;
            switch(seleccion){
                case 1:
                    cout<<"por favor ingrese los valores a insertar en la lista:\n";
                    cout<<"caracter:\n";
                    cin>>dato;
                    InsertarLD(dato);
                break;
                case 2:
                cout<<"eliminando nodo ultimo\n";
                EliminarLD();
                break;
                case 3:
                    cout<<"favor ingresar el dato a buscar:\n";
                    cin>>cadena;
                    buscarN(dato);
                break;
                case 4:
                    cout<<"El resultado de la lista es:\n";
                    mostrar();
                break;
                case 5:
                    cout<<"hasta luego";
                break;
            }

    }while(seleccion!=5);
    system("pause");
}
