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
int main()
{
	RightTriangle RightTriangle(5,4);

	RightTriangle.print();

	cout<<"Tangent: "<< RightTriangle.GetAlphaTangent()<<endl;

	return 0;
}