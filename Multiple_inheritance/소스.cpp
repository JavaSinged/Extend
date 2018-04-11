#include<iostream>
using namespace std;

class Phone {
	int on;
public:
	void Call() {}
	void Switch(int n) { on = n; }
};
class Printer {
	int on;
public:
	void Print() {}
	void Switch(int n) { on = n; }
};
class Fax:public Phone, public Printer{

};


int main() {
	Fax myFax;
	myFax.Phone::Switch(1);
	myFax.Printer::Switch(0);

	return 0;
}