#include <iostream>
using namespace std;


class A {
public:
	A() :ptr(nullptr) {};
	A(A* ptr) :ptr(ptr) {};
	A(int* ptr) :int_ptr(ptr) {};
	
	A* ptr;
	int* int_ptr; 

};

int main() {

	int c = 3;
	int *d = &c;
	
	A *z = new A;
	A *a = new A(d);
	A *b = new A(a);
	
	delete a;

  	cout << b->ptr << endl;
	
	return 0;
}
