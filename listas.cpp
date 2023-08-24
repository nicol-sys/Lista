#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;
};

void crearlista(Nodo *&,int );

int main(){
Nodo *lista = NULL;

int dato;

cout<<"Digite un numero:  ";
cin>> dato;
crearlista(lista,dato);
getch();
return 0;
}

void crearlista(Nodo *&lista, int x){
Nodo *nodo_nuevo=new Nodo();
nodo_nuevo->dato= x;

Nodo *nodoprimero=lista;


if (lista==nodoprimero){
lista=nodo_nuevo;
}
nodo_nuevo->siguiente=nodoprimero;

cout<<"El elemento"<<x<<"ha sido introducido a la lista correctamente";
}

