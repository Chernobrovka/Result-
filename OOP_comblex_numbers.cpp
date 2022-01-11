#include "stdafx.h"
#include <iostream>
#include <complex>
#include <cmath>
#include <cstdlib>

using namespace std;

class Complex{

private:
	double real; //действительная

	double imag;//мнимая 

public:
	//конструкторы


	Complex ()
	{
		real = 0;
		imag = 0;
	};

	Complex (double r)   
	{
		real = r;
		imag = 0;
	}

	Complex (double r, double i)
	{
		real = r;
		imag = i;
	}

	//деструктор
	~Complex ()
	{
		cout<< "object destroyed"<<endl;
	}

	Complex Mul(Complex c) {
		return Complex(real * c.real - imag * c.imag, imag = real * c.imag + imag * c.real);
	} 

	double Argument(double arg) {
		arg = imag/real;
		tan (arg);
		cout<<" Argument:" << arg <<endl; 
	}

	void Print() {
		cout << "(" << real << ", " << imag << ")";
	}
};  
int main(){
	Complex C1(5, 2);
	

	C1.Print();

	cout<<endl;
	
	system("pause");

	return 0;
}