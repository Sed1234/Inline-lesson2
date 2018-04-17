#include <string>;
#include <iostream>;
#include <cmath>;
#include <fstream>;
using namespace std;
//class Human {
//public:
//	int age;
//	string name;
//	void hello() {
//		cout << "Hello, I am: " << name << endl;
//	}
//
//};

class Human {
public:
	string name;
};

class Circle {
public:
	double r;
	void s() {
		double p = 3.14;
		cout << "S=" << p*pow(r,2) << endl;
	}

}; 

class mobile {
private:
	double price;
	string model;
public:
	void price_in_usd() {
		
		cout << model <<"price in USD" << price/330 << endl;
	}
	void setPrise(double _price) {
		price = _price;
	}
	double getPrise() {
		return (price);
	}
	void setModel(string _model) {
		model = _model;
	}
	string getModel() {
		return (model);
	}

};
class   student {
private:
	char name[10];
	char birthday[8];
	char  *city;
	
public:
	static int cnt; 
	student() {
		cnt++;
	}
	student(char _name[10])
	{
		for (int i = 0; i < 10; i++)
		{
			name[i] = _name[i];
		};
		cnt++;
	}
	student(char _name[10], char _birthday[8]) :student(_name)
	{
		for (int i = 0; i < 8; i++)
		{
			birthday[i] = _birthday[i];
		};
	}
	student(char _name[10], char _birthday[8], char _city[15]) :student(_name,_birthday)
	{
		for (int i = 0; i < 15; i++)
		{
			city[i] = _city[i];
		};
	}

	~student() {
		delete[] name;
		delete[] birthday;
		delete[] city;

	}
	char getName() {
		return name[10];
	}
	char getCnt() {
		return student::cnt;
	}
};

class SingleTon {
public:
	int x;
	static SingleTon & getInstance() {
	static	SingleTon instanse;
	return instanse;
	}
private:
	SingleTon() {

	}

};

class Point
{
private:
	int x, y, z;
public:
	int getX() {
		return x;
	}
	void setX(int _x) {
		x = _x;
	}
	int getY() {
		return y;
	}
	void setY(int _y) {
		y = _y;
	}
	int getZ() {
		return z;
	}
	void setZ(int _z) {
		z = _z;
	}
	void readPointFromFile()
	{
		ifstream in("point.txt");
		in >> x >> y >> z;
	}
	void writePointToFile() {
		ofstream out("point1.txt");
		out << x << ' ' << y << ' ' << z;
	}
};

class PositiveInteger {
	int value;
public:
	PositiveInteger() {
		
	}
	PositiveInteger(int x)
	{
		value = x;
	}
	PositiveInteger(char x)
	{
		value = int(x-48);
	}
	~PositiveInteger() {
		
	}
	int getValue() { return value; }
	int setValue(int _value) {
		if (_value >= 0)
			value = _value;
	}
};

class Car {
	int odometr;
public:
	Car() {

	}
	Car(int x)
	{
		odometr = x;
	}
	Car(char x)
	{
		odometr = int(x - 48);
	}
	~Car() {
		
	}
	int getValue() { return odometr; }
	int setValue(int _odometr) {
		if (_odometr <= 100000)
			odometr = _odometr;
		else odometr = -1;
		return 0;
	}
};
void sample() {
	student a("Sed");
	student b("Ded","01012000");
	student c("Ded", "01012000","RIM");
	cout << a.getName() << " " << b.getName() << endl;
}

void sample_car() {
	Car a(1000001);
	Car b('1');
	cout << a.getValue() << " " << b.getValue() << endl;
}

int main()
{
	//sample_car();
	sample();
	system("pause");
	return 0;
}

//int main() {
//	/*Human h1, h2;
//	h1.name = "LOL";
//	h2.name = "QWERTY";
//	h1.hello();
//	h2.hello();*/
//	/*Circle S;
//	S.r = 6.0;
//	S.s();*/
//	/*student s;
//	s.input();
//	s.show();
//	s.setName("DED");
//	cout<<s.getName();*/
//	point p;
//	p.getPointFromFile();
//	cout << p.getX() << " " << p.getY() << " " << p.getZ() << endl;
//	p.setX(p.getX() + p.getY());
//	p.writePointToFile();
//
//	system("pause");
//	return 0;
//
//
//}