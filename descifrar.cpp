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

void descifrado()
{
	char txt[30];
	cin.ignore();
	cout << "Ingrese texto a descifrar: ";
	cin.getline(txt, 100);
	for (int i = 0; i < strlen(txt); i++)
     { 
	      for(int j = 0; j < strlen(ltrs); j++)
		  {
		    if (txt[i] == ltrs[j])
     	{
     	    int aux;
			 if	((j-a) < 0)
			 {
			 	aux = 52+ (j-a);
			 }
			 else
			 {
			 	aux = (j-a) % 52;
			 }
			 txt[i] = ltrs[aux];
			 break;
     	}
   	}
	   }cout << "\t\nEl texto descifrado es: " << txt << endl;
}




int main() {
     int contra, op ;
     string txt;
     do
     {
     	cout <<"¿CONTRASEÑA?:"<< endl;
     	cin >> a;
     	cout <<"¿Que quieres hacer?";
     	cout <<"\n"<< endl;
     	cout << "1 --> DESCIFRAR" << endl;
     	cout << "2 --> CERRAR" << endl;
     	cin >> op;
     	switch(op)
     	{	
     		case 1:
     			descifrado();
     			break;		
		 }
	 } while(op != 2);
  
	return 0;
}

