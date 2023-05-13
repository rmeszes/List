#ifndef SMARTPTR_H
#define SMARTPTR_H
template<typename T>
class SmartPtr
{
	T* ptr;
	SmartPtr(const SmartPtr&);
	SmartPtr operator=(const SmartPtr&);
public:
	explicit SmartPtr(T* p = nullptr) :ptr(p) {}

	~SmartPtr() {
		if (ptr != nullptr) delete ptr;
	}

	T& operator*() { return *ptr; }

	T* operator->() { return ptr; }

	SmartPtr& operator=(T* new_ptr) {
		if (ptr != nullptr && owning) delete ptr;
		ptr = new_ptr;
		return *this;
	}
};

#endif 