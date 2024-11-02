#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>


using namespace std;
int a;
  char ltrs[]={
  	'a',
  	'b',
  	'c',
  	'd',
  	'e',
  	'f',
  	'g',
  	'h',	
  	'i',
  	'j',
  	'k',	
  	'l',
  	'm',
  	'n',	
  	'ñ',
  	'o',
  	'p',
  	'q',
  	'r',
  	's',	
  	't',
  	'u',
  	'v',	
  	'w',
  	'x',
  	'y',
  	'z',
  	'A',
  	'B',
  	'C',
  	'D',
  	'E',
  	'F',
  	'G',
  	'H',	
  	'I',
  	'J',
  	'K',
  	'L',
  	'M',
  	'N',
  	'Ñ',
  	'O',
  	'P',
  	'Q',
  	'R',
  	'S',
  	'T',
  	'U',
  	'V',	
  	'W',
  	'X',
  	'Y',
  	'Z',
  };
 void cifrado()
{ 
	char txt[30];
	cin.ignore();
	cout << "Escribe el texto a cifrar : ";
	cin.getline(txt, 30);
	for(int i = 0; i < strlen(txt); i++)
	{
		for(int j = 0 ; j < strlen(ltrs); j++)
		{
			if(txt[i] == ltrs[j])
			{
				int aux = (j + a) % 52;
				txt[i] = ltrs[aux];
				break;
			}
			
		}
	}
	cout << "\t\nEl texto cifrado es: " << txt << endl;
}
int main() {
     int contra, op, x, y ;
    cout << "elige dos numeros: \n" << endl;
    cout << "Numero 1 : " << endl;
    cin >> x;
      cout << "Numero 2 : " << endl;
    cin >> y;
     a= x * y;
     cout << "Tu contraseña es: " << a << endl;
     string txt;
     do
     {
     	cout <<"¿Que quieres hacer?";
     	cout <<"\n"<< endl;
     	cout << "1 --> CIFRAR" << endl;
     
     	cout << "2 --> CERRAR" << endl;
     	cin >> op;
     	switch(op)
     	{
     		case 1:
     			cifrado();
     			break;
     		
		 }
	 } while(op != 2);
  
	return 0;
}
