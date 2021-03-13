#include <iostream>

using namespace std;

int fib(int);

int main() {

	for (int i = 0; i < 20; i++) {
		cout << fib(i) << " ";
	}
	cout << endl;

	return 0;
}

int fib(int index) {
	
	if (index == 0) {
		
		return 0;
	}
	if (index == 1) {
		
		return 1;
	}
	
	return fib(index - 1) + fib(index - 2);
	
}
