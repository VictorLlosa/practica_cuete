#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
      struct nodo {
      	int n;
      	nodo *siguiente;
	  }*cabeza=NULL, *aux, *aux1;
	  
	  
	  do{
	  	    aux=(nodo*)malloc(sizeof(struct nodo));
	      	cout<<"Ingresa un dato: ";
	        cin>>aux->n;
	  
	  if(cabeza==NULL){
	  	cabeza=aux1=aux;
	  }
	  else{
	  	aux1->siguiente=aux;
	  	aux1=aux;
	  	aux1->siguiente=NULL;
	  }
	  }while(aux->n!=0);
	  
	  
	  cout<<"Tu lista es: ";
	  aux1=cabeza;
	  while(aux1!=NULL){
	  	cout<<aux1->n<<"-",
	  	aux1=aux1->siguiente;
	  }


	return 0;
}
