#include <iostream>
#include <memory>

using namespace std;

void funcionSinReferencia(unique_ptr<int> ptrA) {
	cout << "Por valor: " << *ptrA << endl;
}

void funcionConReferencia(unique_ptr<int>& ptrA) {
	cout << "Por referencia: " << *ptrA << endl;
}

int main(int argc, char *argv[]) {
	unique_ptr<int> ptrA = make_unique<int>(10);

	auto ptrB = make_unique<int>(20); // Este tambien crea un unique_ptr, solo si hay un make_unique a la derecha

	//auto ptrC = ptrA; /* No se puede porque un unique_ptr solo puede tener un dueño */
	
	//funcionSinReferencia(ptrA); /* No se puede porque al no pasarlo por referencia se crea una copia y no puede haber mas de un unique_ptr */
	
	funcionConReferencia(ptrA);
	
	/*
	 * Otra manera de solucionar esto es usando shared_ptr
	 */
	
	return 0;
}
