#include <iostream>

#include "memtrace.h"
#include "List.hpp"

struct yeet {
	List<int> list;
	yeet() {
		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
	}
	yeet(const yeet& y) :list(y.list){
	}
	yeet& operator=(const yeet& other) {
		if (this != &other) {
			list = other.list;
		}
		return *this;
	}
	~yeet() {}
};
int main() {
	
	List<yeet> l1;
	l1.push_back(yeet());
	l1.push_back(yeet());
	l1.push_back(yeet());

	std::list<int> l2;
}