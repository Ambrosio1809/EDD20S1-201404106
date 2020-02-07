#include <iostream>

using namespace std;

class Node{

    public:int carne;
    public:string Nombre;
    Node *Siguiente;

};

void insertar(Node*&, int, string);
void mostrar(Node*);
void eliminar(Node*&, int);
void buscar(Node*,int);
void menu();

int main()
{
    menu();

}
void menu(){
    Node *lista=NULL;
    int seleccion;
    int dato;
    string nombre;
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
                    cout<<"Carne:\n";
                    cin>>dato;
                    cout<<"Nombre:\n";
                    cin>>nombre;
                    insertar(lista,dato,nombre);
                break;
                case 2:
                cout<<"favor ingresar carne a eliminar\n";
                cin>>dato;
                eliminar(lista,dato);
                break;
                case 3:
                    cout<<"favor ingresar el dato a buscar:\n";
                    cin>>dato;
                    buscar(lista,dato);
                break;
                case 4:
                    cout<<"El resultado de la lista es:\n";
                    mostrar(lista);
                break;
                case 5:
                    cout<<"hasta luego";
                break;
            }

    }while(seleccion!=5);
    system("pause");
}

void insertar(Node *&lista,int n, string nombre){

    Node *nuevo = new Node();
    nuevo->carne =n;
    nuevo->Nombre = nombre;
    Node *aux1 = lista;
    Node *aux2;

    if(lista==aux1){
            lista = nuevo;
            nuevo->Siguiente=aux1;
    }else{
        lista = nuevo;
        nuevo->Siguiente= aux1;

    }
    cout<<"nodo ingresado "<<n<<" "<<nombre<<" \n";
}

void eliminar(Node*& lista, int n){
    if(lista!= NULL){
        Node * aux;
        Node * anterior = NULL;
        aux = lista;
        while((aux!=NULL)&&(aux->carne!=n)){
            anterior=aux;
            aux=aux->Siguiente;
        }
        if(aux==NULL){
                cout<<"El elemento no existe en la lista\n";
        }else if(anterior==NULL){
            lista = lista->Siguiente;
            delete aux;
        }else{
            anterior->Siguiente=aux->Siguiente;
            delete aux;
        }


    }

}

void buscar(Node *lista,int n){
    bool aux = false;
    Node *actual = new Node();
    actual = lista;
    while((actual!=NULL)){
            if(actual->carne==n){
                aux = true;
            }
            actual = actual->Siguiente;
    }
    if(aux==true){
        cout<<"Elemento "<<n<<" encontrado en la lista\n";
    }else{
        cout<<"Elemento "<<n<<" No encontrado en la lista\n";
    }
}

void mostrar(Node *lista){
    Node *actual = new Node();
    actual = lista;
    cout<<"\n";
    while(actual!=NULL){
        cout<<actual->carne<<", "<<actual->Nombre;
        actual=actual->Siguiente;
        cout<<"->";
    }

}
