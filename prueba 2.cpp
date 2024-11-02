#include <iostream>

#define PI 3.1316
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
float peso = 0;
float altura = 0;
float resultado = 0;

cout<<"cuanto pesas";
cin>>peso;
cout<<"cuanto mides";
cin>>altura;
resultado = peso/altura;
cout<<"tu resultado:"<<setprecision(3)<<resultado<<"kg/m";


    



	return 0;
}
