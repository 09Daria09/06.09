#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x1,int y1)
	{
		x = x1;
		y = y1;
	}
	int GetX()
	{
		return x;
	}
	void SetX(int x1)
	{
		x = x1;
	}
	int GetY()
	{
		return y;
	}
	void SetY(int y1)
	{
		y = y1;
	}
	void Print()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int main()
{
	Point obj1(5, 6);
	obj1.SetX(5);
	obj1.GetX();
	obj1.SetY(6);
	obj1.GetX();
	obj1.Print();
	Copy obj2(3);
	obj2.Add(3);
	Point obj3(3, 4);
	cout << "!!!";
	cout << "Master";
}