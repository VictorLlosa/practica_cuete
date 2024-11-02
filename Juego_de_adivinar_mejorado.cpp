#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Start();
void GetResults();

int i, j, life, maxrand;
char c;

void Start() {
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	
	cout << "Elije la dificultad:\n"; 
	cout << "1 : Facil (0-15)\n";
	cout << "2 : Medio (0-30)\n";
	cout << "3 : Dificil (0-50)\n";
	cout << "o escribe cualquier otra cosa para salir\n";
	c = 30;

	cin >> c;                  
	cout << "\n";

	switch (c) {
		case '1':
			maxrand = 15; 
			break;
		case '2':
			maxrand = 30;
			break;
		case '3':
			maxrand = 50;
			break;
		default:
			exit(0);
		break;
	}

	life = 5;       
	srand((unsigned)time(NULL)); 
	j = rand() % maxrand;  
	
	GetResults();
}

void GetResults() {
	if (life <= 0) { 
		cout << "Has perdido!\n\n";
		Start();
	}

	cout << "Escribe un numero: \n";
	cin >> i;
	
	if((i>maxrand) || (i<0)) { 
		cout << "Error: tiene que ser entre 0 y \n" << maxrand;
		GetResults();
	}

	if(i == j) {
		cout << "Has ganado!\n\n"; 
		Start();
	} else if(i>j) {
		cout << "Muy grande\n";
		life = life - 1;
		cout << "Vidas restantes: " << life << "\n\n";
		GetResults();
	} else if(i<j) {
		cout << "Muy pequeno\n";
		life = life - 1;
		cout << "Vidas restantes: " << life << "\n\n";
		GetResults();
	}
}

int main() {
	cout << "** Juego del numero secreto **\n";
	cout << "El objetivo de este juego es adivinar un numero.\n";
	cout << "Te dire si el numero que has escrito es mas grande \n";
	cout << "o pequeno comparado con el numero secreto.\n\n";
	Start();
	return 0;
}
