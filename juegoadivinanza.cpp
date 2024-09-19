#include <iostream>
using namespace std;
int main(){
cout<<"***************************************"<<endl;
cout<<"*Bienvenido al juego de la adivinanza!*"<<endl;
cout<<"***************************************"<<endl;

int numero_secreto = 42;
cout << "el numero secreto es ..." << numero_secreto << ". No lo diga a nadie!" << endl;

int adivina;
cout <<"¿Cual es el numero? ";
cin >> adivina;
cout << "El valor de su numero es: " << adivina << endl;

if(adivina == numero_secreto){
	cout << "Felicitaciones!!! ... adivino el numero secreto" << endl;
	}

else if(adivina > numero_secreto){
	cout <<"El numero incresado es mayor que el numero secreto" << endl;
	}

else{
	cout << "El numero incresado es menor que el numero secreto" <<endl;
	}
}
