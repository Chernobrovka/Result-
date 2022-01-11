#include "stdio.h"
#include <iostream>
#include <cmath>

using namespace std;

class RightTriangle 
{
private:
	double A_Cartetus;
	double B_Cathetus;
	RightTriangle(){} // нельзя использовать конструктор по умолчанию
public: 

	RightTriangle(double aCathetus, double bCathetus){
		A_Cartetus = aCathetus;
		B_Cathetus = bCathetus;
	}	

	void print()
	{
		cout<<"Cathetus A: "<< A_Cartetus <<" Cathetus B: "<< B_Cathetus <<endl;
	}
	double GetAlphaTangent() //в радианах
	{
		double res = A_Cartetus / B_Cathetus;
		return tan(res);
	}
};

class RightTriangleTwo: public RightTriangle {
private:
	double Beta; //значение угла в радианах

public:
	RightTriangleTwo(double catA, double catB, double b):
	  Beta(b), RightTriangle(catA, catB)
	{
	}

	double Difference(double arg){
		return (Beta - GetAlphaTangent());
	}

};

int main()
{
	RightTriangleTwo rtt(10.0,5.0,30.0);

	rtt.print();

	cout<<"Tangent: "<< rtt.GetAlphaTangent()<<endl;

	cout<<"Difference between angles Alpha and Beta: "<< rtt.Difference(50.0);

	return 0;
}