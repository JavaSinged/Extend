#include<iostream>
using namespace std;


//parents
class Food {
protected:
	int price;
public:
	Food() { price = 0; }
	void setPrice(int n) { price = n; }
	int getPrice() { return price; }
};

//child
class Fruit :public Food {
protected:
	char farm_name[100];
public:
	void setFarmName(const char* name) { strcpy_s(farm_name, name); }
	char *getFarmName() { return farm_name; }
}; 

int main() {
	Food myFood; //�θ� Ŭ������ ������Ʈ
	Fruit myFruit; //�ڽ� Ŭ������ ������Ʈ
	myFood.setPrice(100);
	myFruit.setPrice(200);
	
	//��� : �ڽ�Ŭ������ ������Ʈ�� �θ�Ŭ������ ������Ʈ�� ������ �� �ִ�.
	//		������ �θ�Ŭ������ ������Ʈ�� �ڽ�Ŭ������ ������Ʈ�� ������ �� ����.
	myFood = myFruit;
	cout << "���� ���� : " << myFood.getPrice() << endl;



	return 0;
}