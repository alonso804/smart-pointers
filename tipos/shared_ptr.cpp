#include <iostream>
#include <memory>

using namespace std;

/* No es necesario pasar el puntero por referencia con shared_ptr */
void imprimir(shared_ptr<int> ptr) {
	cout << "Valor de ptr: " << *ptr << endl;
	cout << "Direccion de ptr: " << ptr.get() << endl;
}

int main(int argc, char *argv[]) {
	auto ptrA = make_shared<int>(10);

	auto ptrB = ptrA;

	cout << ptrA.get() << " == " << ptrB.get() << endl; // Ambos apuntan a la misma direccion

	cout << endl;
	imprimir(ptrA);

	cout << endl;
	imprimir(ptrB);

	cout << endl;
	cout << "Tiene " << ptrA.use_count() << " referencias" << endl;
	
	return 0;
}

