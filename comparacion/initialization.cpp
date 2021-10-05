#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
	int* rawA = nullptr;
	if (rawA == nullptr) {
		cout << "rawA es null" << endl;
	} else {
		cout << "rawA NO es null" << endl;
	}

	unique_ptr<int> smartA;
	if (smartA == nullptr) {
		cout << "smartA es null" << endl;
	} else {
		cout << "smartA NO es null" << endl;
	}
	
	return 0;
}
