#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	shared_ptr<int> ptrA = make_shared<int>(50);

	weak_ptr<int> weakA = ptrA;
	//cout << *weakA << endl; // No se puede
	
	cout << "weakA.expired(): " << weakA.expired() << endl; // Retorna 0, porque ptrA no fue eliminado

	ptrA.reset();
	cout << endl;
	cout << "prtA.reset()" << endl;
	cout << "weakA.expired(): " << weakA.expired() << endl; // Retorna 1, porque ptrA fue eliminado

	return 0;
}
