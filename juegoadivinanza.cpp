#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "*" << endl;
    cout << "Bienvenido al juego de la adivinanza!" << endl;
    cout << "Ingrese un numero en el rango: 1 a 100*" << endl;
    cout << "*" << endl;

    cout << endl;
    cout << "Escoja el nivel de dificultad" << endl;
    cout << "Facil (F), Medio (M) o Dificil (D)" << endl;

    char dificultad;
    cin >> dificultad;

    int numero_tentativas;
    if (dificultad == 'F') {
        numero_tentativas = 15;
    }
    else if (dificultad == 'M') {
        numero_tentativas = 10;
    }
    else {
        numero_tentativas = 5;
    }

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));
    const int NUMERO_SECRETO = 1 + rand() % 100; // Generar un número aleatorio entre 1 y 100
    cout << "Número secreto aleatorio entre 1 y 100: " << NUMERO_SECRETO << endl;

    int adivina;
    double puntos = 1000.0;  // Guarda los puntos ganados

    for (int intentos = 1; intentos <= numero_tentativas; intentos++) {
        cout << "Tentativa " << intentos << endl;
        cout << "¿Cuál es el número? ";
        cin >> adivina;

        double puntos_perdidos = abs(adivina - NUMERO_SECRETO) / 2.0;
        puntos -= puntos_perdidos;

        cout << "El valor de su número es: " << adivina << endl;

        if (adivina == NUMERO_SECRETO) {
            cout << "¡Felicitaciones! Adivinaste el número secreto" << endl;
            break;  // Terminar el ciclo si adivina el número
        }
        else if (adivina > NUMERO_SECRETO) {
            cout << "El número ingresado es mayor que el número secreto" << endl;
        }
        else {
            cout << "El número ingresado es menor que el número secreto" << endl;
        }

        if (intentos == numero_tentativas) {
            cout << "Lo siento, has alcanzado el número máximo de intentos." << endl;
            break;
        }
    }

    cout << "Finalizó el juego" << endl;
    cout << "Su puntuación fue de " << puntos << " puntos" << endl;

    return 0;
}
