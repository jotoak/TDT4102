#pragma once
#include <iostream>
class Dummy {
public:
	int *num;
	Dummy() {
		num = new int{ 0 };
	}
	~Dummy() {
		delete num;
	}
	int get()const { return *num; }
	Dummy(const Dummy& dum) :num{ nullptr } {
		this->num = new int{};
		*num = dum.get();
	}
	Dummy operator=(Dummy rhs)  {
		std::swap(num, rhs.num);
		return *this;
	}
};
void dummyTest();
