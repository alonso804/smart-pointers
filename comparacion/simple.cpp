#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	int* rawA = new int(10);
	cout << "*rawA: " << *rawA << endl;
	cout << "rawA: " << rawA << endl;

	cout << endl;

	unique_ptr<int> smartA = make_unique<int>(10);
	cout << "*smartA: " << *smartA << endl;
	cout << "smartA.get(): " << smartA.get() << endl;

	delete rawA;
	// smartA se libera automáticamente
	
	return 0;
}
