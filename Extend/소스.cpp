#include<iostream>
using namespace std;
class Food{
	int price;
public:
	Food() {
		price = 0;
	}
	void setPrice(int n) {
		price = n;
	}
	int getPrice() {
		return price;
	}
};

class Fruit:public Food{
	char farm_name[100];
public:
	void setFarmName(const char* name) {
		strcpy_s(farm_name, name);
	}
	char *getFarmName() {
		return farm_name;
	}
};


int main() {
	Fruit myFruit;
	myFruit.setPrice(5000);
	cout << "과일 가격 : " << myFruit.getPrice() << endl;
	myFruit.setFarmName("한세 농장");
	cout << "농장이름 : " << myFruit.getFarmName() << endl;





	return 0;
}