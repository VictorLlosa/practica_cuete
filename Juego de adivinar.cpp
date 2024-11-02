#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
                  
int main(){
int numero, dato, contador = 0;

srand(time(NULL));
dato = 1 + rand()%(100);
cout<<"Adivina que numero he cogido del 1 al 100:"<<endl;
	do{
			cin>>numero;
		if(numero<dato){
		contador ++;
			cout<<"NO. Es mas grande"<<endl;
			cout<<"Adivina:"<<endl;
		
		}
		
		if(numero>dato){ 
	contador++;
	    cout<<"NO. Es mas pequeno"<<endl;
		  cout<<"Adivina:"<<endl;
		  
		}	
	}while(numero != dato);
	
	cout<<"\nADIVINASTE!"<<"\nIntentos:"<<contador;
}
