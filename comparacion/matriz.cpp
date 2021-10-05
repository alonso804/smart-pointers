#include <iostream>
#include <memory>
#include <ctime>

#define N 5

using namespace std;

void imprimirRawMatriz(int** rawMatrix) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << rawMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

void imprimirSmartMatriz(shared_ptr<shared_ptr<int[]>[]> smartMatrix) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << smartMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char *argv[]) {
  srand (time(NULL));

	int** rawMatrix = new int*[N];

	for (int i = 0; i < N; i++) {
		rawMatrix[i] = new int[N];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			rawMatrix[i][j] = rand() % 5 + 1;
		}
	}

	imprimirRawMatriz(rawMatrix);

	for (int i = 0; i < N; i++) {
		delete []rawMatrix[i];
	}

	delete []rawMatrix;

	cout << endl;

	shared_ptr<shared_ptr<int[]>[]> smartMatrix(new shared_ptr<int[]>[N]);

	for (int i = 0; i < N; i++) {
		smartMatrix[i] = shared_ptr<int[]>(new int[N]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			smartMatrix[i][j] = rand() % 5 + 1;
		}
	}

	imprimirSmartMatriz(smartMatrix);
	
	return 0;
}
