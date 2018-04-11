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
	Food myFood; //부모 클래스의 오브젝트
	Fruit myFruit; //자식 클래스의 오브젝트
	myFood.setPrice(100);
	myFruit.setPrice(200);
	
	//결론 : 자식클래스의 오브젝트는 부모클래스의 오브젝트에 대입할 수 있다.
	//		하지만 부모클래스의 오브젝트를 자식클래스의 오브젝트에 대입할 수 없다.
	myFood = myFruit;
	cout << "과일 가격 : " << myFood.getPrice() << endl;



	return 0;
}