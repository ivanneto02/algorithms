#include <iostream>

using namespace std;

int fib(int);
void Fib(int);

int main() {

	int iterations;

	cout << "Enter iterations: ";
	cin >> iterations;
	cout << endl;

	Fib(iterations);

}

int fib(int index) {

	if (index == 0) {

		return 0;
	}

	if (index == 1 || index == 2) {

		return 1;
	}
	
	return fib(index - 1) + fib(index - 2);

}

void Fib(int iterations) {

	for (int i = 0; i < iterations; i++) {

		cout << fib(i) << " ";
	}
	cout << endl;

}
