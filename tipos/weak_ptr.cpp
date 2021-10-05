#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	/* No se puede porque solo puede haber una referencia hacia unique_ptr */
	/*
	auto ptrUnique = make_unique<int>(100);
	weak_ptr<int> weakToUnique =  ptrUnique;
	*/

	auto ptrA = make_shared<int>(80);
	cout << "ptrA tiene " << ptrA.use_count() << " referencias" << endl; /* Los weak_ptr no aumentan el contador de referencias */

	weak_ptr<int> weakA =  ptrA;
	weak_ptr<int> weakB =  ptrA;
	weak_ptr<int> weakC =  ptrA;
	weak_ptr<int> weakD =  ptrA;

	cout << endl;
	cout << "ptrA tiene " << ptrA.use_count() << " referencias" << endl; /* Los weak_ptr no aumentan el contador de referencias */

	// cout << *weakD << endl; // No se puede
	
	return 0;
}
