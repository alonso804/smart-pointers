#include <iostream>
#include <memory>

#define N 10

using namespace std;

void imprimirRaw(int* rawArray) {
	for (int i = 0; i < N; i++) {
		cout << rawArray[i] << " -> ";
	}
}

void imprimirSmart(shared_ptr<int[]> smartArray) {
	for (int i = 0; i < N; i++) {
		cout << smartArray[i] << " -> ";
	}
}

int main(int argc, char *argv[]) {
	int* rawArray = new int[N];

	for (int i = 0; i < N; i++) {
		rawArray[i] = i * 10;
	}

	imprimirRaw(rawArray);
	delete []rawArray;

	cout << endl;

	auto smartArray = make_shared<int[]>(N);

	for (int i = 0; i < N; i++) {
		smartArray[i] = i * 10;
	}

	imprimirSmart(smartArray);

	return 0;
}
