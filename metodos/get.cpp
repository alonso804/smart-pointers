#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	/* Con unique */
	unique_ptr<int> ptrA = make_unique<int>(3);

	cout << "Direccion de ptrA: " << ptrA.get() << endl; // Imprime la direccion de memoria
	cout << "Valor de ptrA: " << *ptrA << endl; // Imprime el valor del puntero

	cout << endl;

	// Se puede asignar la direccion de memoria a un raw pointer, no es necesario hacerle delete al raw pointer
	int *newA = ptrA.get();
	cout << "Direccion de newA: " << newA << endl; // Imprime la direccion de memoria
	cout << "Valor de newA: " << *newA << endl; // Imprime el valor del puntero

	// delete newPointer // No deberias
	
	/* Con shared */
	cout << "\n-----------------------------------------\n\n";
	shared_ptr<int> ptrB = make_shared<int>(5);

	cout << "Direccion de ptrB: " << ptrB.get() << endl; // Imprime la direccion de memoria
	cout << "Valor de ptrB: " << *ptrB << endl; // Imprime el valor del puntero

	cout << endl;

	// Se puede asignar la direccion de memoria a un raw pointer, no es necesario hacerle delete al raw pointer
	int* newB = ptrB.get();
  cout << "Direccion de newB: " << newB << endl; // Imprime la direccion de memoria
  cout << "Valor de newB: " << *newB << endl; // Imprime el valor del puntero

  return 0;
}
