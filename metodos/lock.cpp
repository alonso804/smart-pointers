#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	shared_ptr<int> ptrA = make_shared<int>(50);

	weak_ptr<int> weakA = ptrA;
	
	cout << "Valor de ptrA: " << *ptrA << endl; // Imprime el mismo valor que ptrA
	cout << "weakA.expired(): " << weakA.expired() << endl; // false = 0

	cout << endl;
	if (auto ptrB = weakA.lock()) {
		cout << "Valor de ptrB: " << *ptrB << endl; // Imprime el mismo valor que ptrA
	} else {
		cout << "ptrA fue eliminado" << endl;
	}

	ptrA.reset();
	cout << endl;
	cout << "ptrA.reset()" << endl;
	if (auto ptrC = weakA.lock()) {
		cout << "Valor de ptrC: " << *ptrC << endl;
	} else {
		cout << "ptrA fue eliminado" << endl;
	}

	return 0;
}
