#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int value) {
	value++;
}

int main() {

	int a = 5;
	Increment(a);
    LOG(a); //->5

	return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
