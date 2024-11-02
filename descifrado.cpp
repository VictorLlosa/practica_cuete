#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>


using namespace std;
int a;
char ltrs[]= {
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

void cifrado() {
	char txt[300];
	cin.ignore();
	cout << "Escribe el texto a cifrar : ";
	cin.getline(txt, 300);
	for(int i = 0; i < strlen(txt); i++) {
		for(int j = 0 ; j < strlen(ltrs); j++) {
			if(txt[i] == ltrs[j]) {
				int aux = (j + a) % 52;
				txt[i] = ltrs[aux];
				break;
			}

		}
	}
	cout << "\t\nEl texto cifrado es: " << txt << endl;
}

void descifrado() {
	char txt[300];
	cin.ignore();
	cout << "Ingrese texto a descifrar: ";
	cin.getline(txt, 300);
	for (int i = 0; i < strlen(txt); i++) {
		for(int j = 0; j < strlen(ltrs); j++) {
			if (txt[i] == ltrs[j]) {
				int aux;
				if	((j-a) < 0) {
					aux = 52+ (j-a);
				} else {
					aux = (j-a) % 52;
				}
				txt[i] = ltrs[aux];
				break;
			}
		}
	}
	cout << "\t\nEl texto descifrado es: " << txt << endl;
}

int main() {
	int contra, op, y, x ;
	string txt;
	do {

		cout<< "   ====   "<<"\n"<<"  |    |"<<"\n  |    |"<<"\n ========            ==="<<"\n |      |           |   |"<<"\n |  []  |   ========    |"<<"\n |      |   | |     |   |"<<"\n ========            ===";
		cout <<"\n\n Que quieres hacer";
		cout <<"\n"<< endl;
		cout << "1 --> CIFRAR" << endl;
		cout << "2 --> DESCIFRAR" << endl;
		cout << "3 --> CERRAR" << endl;
		cin >> op;
		switch(op) {
			case 1:
				cout << "elige dos numeros: \n" << endl;
				cout << "Numero 1 : " << endl;
				cin >> x;
				cout << "Numero 2 : " << endl;
				cin >> y;
				a= (x + y)*3;
				cout << "Tu contrasena es: " << a << endl;
				cifrado();
				break;
			case 2:
				cout <<"¿CONTRASENA?:"<< endl;
				cin >> a;
				descifrado();
				break;
		}
	} while(op != 3);

	return 0;
}
