
#include "header.h"





int main() {
   bool empezar = false;
    int opcion = 0;
    float a = 0;
    float b = 0;
    cout<<"1: Suma \n2: Resta\n3: multiplicacion ";
    cout<<"\n Que quieres hacer? \n";
    cin>>opcion;
   
    switch(opcion){
    case 1:	
    
    	cout<<"ingresa el primer número \n";
		cin>>a;
		cout<<"ingresa el segundo número \n";
		cin>>b;
		cout<<a-b;
		
    break;
	case 2:
        cout<<"ingresa el primer número \n";
		cin>>a;
		cout<<"ingresa el segundo número \n";
		cin>>b;
		cout<<a-b;
      break;	
  	case 3:
    	cout<<"ingresa el primer número \n";
		cin>>a;
		cout<<"ingresa el segundo número \n";
		cin>>b;
		cout<<a*b;
		break;	
}

   



	return 0;
}
