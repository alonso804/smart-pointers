#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	shared_ptr<int> ptrA = make_shared<int>(20);
	auto ptrB = ptrA;
	auto ptrC = ptrB;

	cout << "Direccion de ptrA: " << ptrA.get() << endl; // No queda una dirreccion porque ya se elimino
	cout << endl;

	cout << "ptrA.reset()" << endl;
	ptrA.reset(); // Similar a hacerle un delete de forma manual
	//cout << "Valor de ptrA: " << *ptrA << endl; // Da error
	cout << "Direccion de ptrA: " << ptrA.get() << endl; // No queda una dirreccion porque ya se elimino

	cout << endl;
	cout << "Valor de ptrB: " << *ptrB << endl; // No da error
	cout << "Direccion de ptrB: " << ptrB.get() << endl; // Imprime una dirreccion (la misma que tenia ptrA)
	
	return 0;
}
