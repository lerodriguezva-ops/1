
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string linea;

    ifstream archivoEntrada("input/datos.txt");

    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    ofstream archivoSalida("output/resultado.txt");

    if (!archivoSalida.is_open()) {
        cout << "Error al crear el archivo de salida." << endl;
        return 1;
    }

    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
        archivoSalida << linea << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Proceso terminado correctamente." << endl;

    return 0;
}
