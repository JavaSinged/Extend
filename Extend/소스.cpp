#include<iostream>
using namespace std;
class Food{
protected:
	int price;
public:
	Food() {price = 0;}
	void setPrice(int n) {price = n;}
	int getPrice() {return price;}
};

class Fruit:public Food{
protected: 
	char farm_name[100];
public:
	void setFarmName(const char* name) {strcpy_s(farm_name, name);}
	char *getFarmName() {return farm_name;}
};

class Orange :public Fruit {
private:
	int count;
public:
	void setCount(int n) {count = n;}
	int getCount() {return count;}
	void PrintOrange() {
		cout << "¿À·»Áö °¡°Ý : " << price << endl;
		cout << "³óÀå ÀÌ¸§ : " << farm_name << endl;
		cout << "¿À·»Áö °³¼ö : " << count << endl;
	}
};

int main() {
	Orange myOrange;

	myOrange.setPrice(5000);
	myOrange.setFarmName("Á¦ÁÖ ³óÀå");
	myOrange.setCount(10);
	myOrange.PrintOrange();
	/*myOrange.setPrice(5000);
	cout << "¿À·»Áö °¡°Ý : " << myOrange.getPrice() << endl;
	myOrange.setFarmName("Á¦ÁÖ ³óÀå");
	cout << "³óÀåÀÌ¸§ : " << myOrange.getFarmName() << endl;
	myOrange.setCount(10);
	cout <<"¿À·»Áö °³¼ö : "<< myOrange.getCount() << endl;*/




	return 0;
}