#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void loop (char c[3][3]);
void Intro_Primera(char c[3][3]	);
void tablero (char c[3][3]);
void intro (char c[3][3]);
void intro2 (char c[3][3]);
void bot (char c[3][3]);
int ganar(char c[3][3]);

int main(){
	int p;
char c [3][3];
loop (c);


	
return 0;
}

void loop (char c[3][3]){
	int i;
	int j;
	int a;
	int p;
	i=0;
	cout<< "\n        ***BIENVENIDO AL TRES EN RAYA***"<<"\n\n          EN QUE MODO QUIERES JUGAR?:"<<"\n             1-Con Amigos\n             2-Solo\n ";
	cin>>a;
	
	switch(a)
	{
		case 1:
		{
		    Intro_Primera(c);
	        tablero(c);
	        do
	       {
		       system("cls");
		       tablero(c);
		       if(i % 2 ==0)
			   {
			   intro(c);
			  
		       }else{
			   intro2(c);
			   
	                }
	           j=ganar(c);
		       i++;
		       
  	       }while(i<=9 && j==2);
  	       system("cls");
		        tablero(c);
	      if(j==0){
	      	cout<<"\n\n Jugador 1 has GANADO!!";
	      	
            cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }else if(j==1){
		  	cout<<"\n\n Jugador 2 has GANADO!!";
		  	cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }else{
		  	cout<<"\n\n Habeis EMPATADO :(";
		  	cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }
		 break;
	    }
	case 2:
		{
		    Intro_Primera(c);
	        tablero(c);
	        do
	       {
		       system("cls");
		        tablero(c);
		       if(i % 2 ==0)
			   {
			   intro(c);
			   
		       }else{
			   bot(c);
			   
	                }
		   j = ganar(c);
		    i++;
  	       }while(i<=9 && j==2);
  	       system("cls");
		    tablero(c);
	    if(j==0){
	      	cout<<"\n\n Has GANADO!!";
	      	cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }else if(j==1){
		  	cout<<"\n\n Has PERDIDO :(";
		  	cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }else{
		  	cout<<"\n\n Has EMPATADO";
		  	cout<<" \n Para volver ha jugar pulsa 1\n Para salir pulsa 2";
            cin>>p;
            switch(p){
	          case 1:{
		      system("cls");
		      loop(c);
			  break;
	                 }
	          case 2:{
		      system("cls");
	     	   break;
	                 }
                    }
		  }
		 break;
	    }
	}
                        }

void Intro_Primera (char c[3][3]){
	
int i,j;
	char a = '1';
	for(int i=0; i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
	     c[i][j]= a++;
		}
	}
}
void tablero (char c[3][3]){
	 int i,j;
	
	for(int i=0; i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
		  
		  if(j<1)
			  {
		 	  cout <<  "  " ;
		      }
	      if(j<2)
		      {
		      cout <<  "  " << c[i][j] << "  |";
		      }else{
		  	  cout <<  "  " << c[i][j];
		           }
		}
	
	  if(i<2)
	    {
		cout << "\n   ----------------\n";
	    }
	}
}
void intro (char c[3][3]){	

	int a;
	int k, i, j;
	do{
		do{
			
			cout << " \n\nJugador 1:"  "\nDonde quieres poner tu ficha?:";
			cin >> a;
		} while(a<1 || a>9);
		k=0;
		switch(a){
			case 1:
			{
			    i= 0;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
					
				}
				break;
			}
				
				case 2:{
				i= 0;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				
				case 3:{
					i= 0;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
					
				
				case 4:{
					
				i= 1;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 5:{
					
				i= 1;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 6:{
				i= 1;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 7:{
					
				i= 2;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 8:{
				i= 2;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 9:{
				i= 2;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				
		}
		c[i][j] = 'X';
	}while(k==1);
	
}
void intro2 (char c[3][3]){
	int a;
	int k, i, j;
	do{
		do{
			
			cout << " \n\nJugador 2:"  "\nDonde quieres poner tu ficha?:";
			//fflush (stdin);
			//scanf("%c", &a);
			cin >> a;
		} while(a<1 || a>9);
		k=0;
		switch(a){
			case 1:
			{
			    i= 0;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
				break;
			}
				
				case 2:{
				i= 0;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				
				case 3:{
					i= 0;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
					
				
				case 4:{
					
				i= 1;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 5:{
					
				i= 1;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 6:{
				i= 1;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 7:{
					
				i= 2;
				j= 0;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 8:{
				i= 2;
				j= 1;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				case 9:{
				i= 2;
				j= 2;
				if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
					cout << "Ya has utilizado esta casilla"<<"\nPrueba con otra :)";
				}
					break;
				}
				
		}
		c[i][j] = 'O';
	}while(k==1);
	
}
void bot (char c[3][3]){
	int i, j,k;
	srand (time(NULL));
	do{
		i = rand()%3;
		j = rand()%3;
	    k=0;
		if (c[i][j] == 'X' || c[i][j] == 'O'){
					k=1;
				}
	}while(k==1);
	c[i][j]='O';
}
int ganar (char c[3][3]){
  if (c[0][0] == 'X' || c[0][0] == 'O')	
  {
     if(c[0][0] == c[0][1] && c[0][0] == c[0][2])
	 {
     	if(c[0][0]=='X')
		 {
		 return 0;
		 }
		 else{
	 	  return 1;
	     }
	 }
	 
	 
	 if(c[0][0] == c[1][0] && c[0][0] == c[2][0])
	 {
     	if(c[0][0]=='X')
		 {
		 return 0;
		 }
		 else{
	 	  return 1;
	     }
	 }
	 
  }
  
  if (c[1][1]=='X' || c[1][1]=='O'){
  	if(c[1][1]==c[0][0] && c[1][1]==c[2][2] ){
  		if(c[1][1]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
	  if(c[1][1]==c[1][0] && c[1][1]==c[1][2] ){
  		if(c[1][1]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
	  if(c[1][1]==c[0][1] && c[1][1]==c[2][1] ){
  		if(c[1][1]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
	  if(c[1][1]==c[0][2] && c[1][1]==c[2][0] ){
  		if(c[1][1]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
  }
  
  if (c[2][2]=='X'|| c[2][2]=='O'){
  	if(c[2][2]==c[2][0] && c[2][2]==c[2][1]){
  			if(c[2][2]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
	  if(c[2][2]==c[0][2] && c[2][2]==c[1][2]){
  			if(c[2][2]=='X'){
  			return 0;
		  }else{
		  	return 1;
		  }
	  }
  }
  
  
  return 2;
}

