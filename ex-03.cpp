#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {

	int a = 5;
    int *b = &a;
    LOG(a);
    LOG(*b);

    *b = 10;
    LOG(a);
    LOG(*b);

    a = 42;
    LOG(a);
    LOG(*b);

	return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
