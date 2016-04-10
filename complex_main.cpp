#include "complex_header.h"

using namespace std;

int main() {
        Complex obj,obj1;
	cout<< "Enter the real and imaginary parts of first complex number" <<endl;
	cin >> obj;
	cout<< "Enter the real and imaginary parts of second complex number" <<endl;
	cin >> obj1;

	cout << "\n\n";
	cout<<"calculations for "<<obj1<<" :"<<endl;
	cout<<"magnitude of " << obj1 << " is " << obj1.magnitude() << endl;
	cout<<"phase of " << obj1 << " is " << obj1.phase() << " radians" << endl;
	obj1.conjugate();
	cout<<"conjugate is " << obj1 << endl;
	obj1.conjugate();
	cout << "\n";

	cout<<"operations between "<<obj1<<" and "<<obj <<" :" <<endl;
	Complex obj2 = obj1 + obj;
        cout << obj1 << " + " << obj  << " = "  << obj2 << endl;
	obj2 = obj1 - obj;
        cout << obj1 << " - " << obj  << " = "  << obj2 << endl;
	obj2 = obj1 * obj;
        cout << obj1 << " * " << obj  << " = "  << obj2 << endl;
	obj2 = obj1 / obj;
	if (obj.magnitude() != 0)
	        cout << obj1 << " / " << obj  << " = "  << obj2 << endl;
        return 0;
}

