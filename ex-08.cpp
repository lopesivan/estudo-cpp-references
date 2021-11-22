#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value) {
	value++;
}

int main() {

	int a = 5;
	int b = 8;
	int& ref = a;
	ref = b;

    LOG(a); //->6
    LOG(b); //->6

	// Increment(a);

	return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
