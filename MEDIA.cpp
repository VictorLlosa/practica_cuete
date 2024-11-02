#include <iostream>

using namespace std;

int main(){
	int tamanio;
	int a=0;
	int suma=0;
	cout<<"cuantas notas vas a escribir: ";
	cin>>tamanio;
	int notas[tamanio];
	for(int i = 0; i<tamanio; i++){
		cout<<"escribe la nota "<<i+1<<": ";
		cin>>notas[i];
		suma+=notas[i];
		
	}
	cout<<"Tu media es de: "<<(float)suma/tamanio;
	return 0;
	
	
}
