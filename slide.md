---
title: References C++
author: Ivan Lopes (lopesivan.ufrj@gmail.com)
date: 2021-11-22
---
# ex-01.cpp

```cpp
#include <iostream>

int main() {

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-02.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {

  LOG("Hello World!");

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-03.cpp

```cpp
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
```
---
# ex-04.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {

  int a = 5;
  int &ref = a;
  LOG(a);
  LOG(ref);

  a = 10;
  LOG(a);
  LOG(ref);

  ref = 99;
  LOG(a);
  LOG(ref);

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-05.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int value) { value++; }

int main() {

  int a = 5;
  Increment(a);
  LOG(a); //->5

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-06.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int *value) { (*value)++; }

int main() {

  int a = 5;
  Increment(&a);
  LOG(a); //->6

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-07.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int &value) { value++; }

int main() {

  int a = 5;
  Increment(a);
  LOG(a); //->6

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# ex-08.cpp

```cpp
#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int &value) { value++; }

int main() {

  int a = 5;
  int b = 8;
  int &ref = a;
  ref = b;

  LOG(a); //->6
  LOG(b); //->6

  // Increment(a);

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
```
---
# Contato

**lopesivan.ufrj**@gmail.com

vim: set ts=4 sw=4 tw=64 ft=markdown:
