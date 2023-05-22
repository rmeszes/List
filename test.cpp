#include <iostream>

#include "memtrace.h"
#include "List.hpp"

int main() {
	List<int> l1;
	l1.Add(1);
	l1.Add(2);
	for (List<int>::iterator i = l1.begin(); i != l1.end(); i++) {
		std::cout << *i << std::endl;
	}
	List<int> l2 = l1;
	for (List<int>::iterator i = l2.begin(); i != l2.end(); i++) {
		std::cout << *i << std::endl;
	}
	l2.~List();
}