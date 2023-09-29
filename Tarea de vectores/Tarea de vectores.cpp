#include<iostream>
#include<vector>
using namespace std;
int main() {
	//DECLARA UN VECTOR DE CADENA
	vector<string> aves = { "loro gris","Paloma de diamante","coctel" };
	cout << "Los valores del vector de insertar: \n";
	//itera sobre el vector para imprimir los valores
	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";
	//Agrega tres valores al final del vector utilizando push_back()
	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");
	cout << "Los valores del vector despues de insertar:\n ";
	//Litera sobre el vector para imprimir los valores
	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";
	return 0;
}