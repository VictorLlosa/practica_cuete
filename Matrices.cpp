#include <iostream>


using namespace std;
void matriz1();

void elegir();

int filas, columnas;



void matriz1(){
int numeros1 [100][100];
cout<<"Matriz 1: ";
cout<<"Numero de filas: ";
cin>>filas;
cout<<"Numero de columnas: ";
cin>>columnas;


for(int i = 1; i<=filas; i++)
{
  for( int j = 1; j<=columnas; j++)
  {
  	cout<<"escribe el numero ["<<i<<"]["<<j<<"]: " ;
	cin>>numeros1[i][j];	
  }
}

cout<<"Matriz:\n";

for(int i = 1; i<=filas; i++)
{
  for( int j = 1; j<=columnas; j++)
  {
  	cout<<"   "<<numeros1[i][j];
  	
  }
  cout<<"\n";
}
elegir();
}
void elegir(){
char c;
cout<<"1 --> Crear matriz\n2 --> Salir\nElige:  ";
cin>>c;
switch (c){
	case '1':
	matriz1();
	 break;
		
	case '2': exit(0);
}
}
int main(){
elegir();

	
	return 0;
}










