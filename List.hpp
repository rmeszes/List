#ifndef LIST_H
#define LIST_H
#include <stdexcept>
#include <iostream>

#include "SmartPtr.hpp"
#include "memtrace.h"

template<typename T>
class List {
	struct ListElement {
		T data;
		SmartPtr<ListElement> next;
		ListElement(ListElement* next = nullptr) :data(data), next(next) {}
	};
	ListElement* start;
public:
	List() {
		start = new ListElement; //strázsa
	}

	void Add(const T& data) {
		ListElement *new_element = new ListElement(start);
		start = new_element;
	}
};
#endif // !LIST_H