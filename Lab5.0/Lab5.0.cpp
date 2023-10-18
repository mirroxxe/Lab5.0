#include <iostream>

using namespace std;

int mult(int a, int b) {
	return a *= b;
};

int main() {
	cout << mult(4, 5);
	return 0;
};