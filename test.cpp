#include <iostream>

#include "memtrace.h"
#include "List.hpp"

struct yeet {
	List<int> list;
	yeet() :list(List<int>()) {
		list.Add(1);
		list.Add(2);
		list.Add(3);
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
	
	List<yeet> l3;
	l3.Add(yeet());
	l3.Add(yeet());
	l3.Add(yeet());
}