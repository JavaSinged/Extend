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
	cout << "���� ���� : " << myFruit.getPrice() << endl;
	myFruit.setFarmName("�Ѽ� ����");
	cout << "�����̸� : " << myFruit.getFarmName() << endl;





	return 0;
}