---
title: References C++
author: Ivan Lopes (lopesivan.ufrj@gmail.com)
date:   2021-11-22
extensions:
  - image_ueberzug
  - render
---

# O início

```cpp
#include <iostream>

int main() {

    return 0; // success return
}
```

---

# 1

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {

    LOG("Hello World!");

    return 0; // success return
}
```

---

# 2

```cpp
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
```

---

# 3

```cpp
int main() {

    int a = 5;
    int& ref = a;
    LOG(a);
    LOG(ref);

    a=10;
    LOG(a);
    LOG(ref);

    ref=99;
    LOG(a);
    LOG(ref);

    return 0; // success return
}
```

---

# 4

```cpp
void Increment(int value) {
	value++;
}

int main() {

	int a = 5;
	Increment(a);
    LOG(a); //->5
```

---

# 5

```cpp
void Increment(int* value) {
	(*value)++;
}

int main() {

	int a = 5;
	Increment(&a);
    LOG(a); //->6
```

---

# 6

```cpp
void Increment(int& value) {
	value++;
}

int main() {

	int a = 5;
	Increment(a);
    LOG(a); //->6
```

---

# 7

```cpp
```

---

# Contato

**ivanlopes**@id.uff.br

/* -*- vim: set ts=4 sw=4 tw=64 ft=markdown: -*- */
