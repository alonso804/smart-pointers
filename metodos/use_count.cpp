#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	shared_ptr<int>	ptrA = make_shared<int>(10);
	cout << "ptrA.use_count(): " << ptrA.use_count() << endl;

	shared_ptr<int> ptrB = ptrA; // Aumentaria el contador de referencias
	cout << endl;
	cout << "Despues de agregar ptrB, que apunta al mismo elemento de ptrA:" << endl;
	cout << "\tptrA.use_count(): " << ptrA.use_count() << endl;
	cout << "\tptrB.use_count(): " << ptrB.use_count() << endl;

	// Aumentaria el contador de referencias
	auto ptrC = ptrA;
	cout << endl;
	cout << "Despues de agregar ptrC, que apunta al mismo elemento de ptrA:" << endl;
	cout << "\tptrA.use_count(): " << ptrA.use_count() << endl;
	cout << "\tptrB.use_count(): " << ptrB.use_count() << endl;
	cout << "\tptrC.use_count(): " << ptrC.use_count() << endl;

	// Todos tienen el mismo valor
	cout << endl;
	cout << "Valor de ptrA: " << *ptrA << endl;
	cout << "Valor de ptrB: " << *ptrB << endl;
	cout << "Valor de ptrC: " << *ptrC << endl;
	
	return 0;
}
