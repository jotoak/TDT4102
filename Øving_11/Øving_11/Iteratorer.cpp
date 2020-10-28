#include "Iteratorer.h"

void test_vector_it() {
	std::vector<std::string> myvec{ "Lorem","Amet","Ipsum","Dolor","Sit","Amet" };
	for (std::vector<std::string>::iterator it = myvec.begin(); it != myvec.end(); it++) {
		std::cout << *it << " ";
	}
}

void test_vector_itr() {
	std::vector<std::string> myvec{ "Lorem","Amet","Ipsum","Dolor","Sit","Amet" };
	for (std::vector<std::string>::reverse_iterator rit = myvec.rbegin(); rit != myvec.rend(); rit++) {
		std::cout << *rit << " ";
	}
}
using namespace std;
void replace(vector<string>myvec, string old,string replacment){
	for (std::vector<std::string>::iterator it = myvec.begin(); it != myvec.end(); it++) {
		if (*it == old) {
			myvec.erase(it);
			myvec.insert(it, replacment);
		}
	}
}