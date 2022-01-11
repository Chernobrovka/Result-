#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
protected:
	double sideA;
	double sideB;
	double sideC;
	double sinAB;

	Triangle(){}

public:
	Triangle(double a, double b, double c, double sab)
	{
		sideA = a;

		sideA = b;

		sideC = c;

		sinAB = sab; // от 0 до 1

	}
	~Triangle ()
	{
		cout<< "Triangle destroyed"<<endl;
	}
	double Perimeter()
	{
		double P = sideA + sideB + sideC;
		return P;
	}
	double Square()
	{
		double S = 0.5 * sideA * sideB * sinAB;
		return S;
	}
	void Information()
	{
		cout<<"Side A = "<< sideA <<endl;
		cout<<"Side B = "<< sideA <<endl;
		cout<<"Side C = "<< sideC <<endl;
		cout<<"Sin AB = "<< sinAB <<endl;
		cout<<"Perimeter = "<< Perimeter() <<endl;
		cout<<"Square = "<< Square() <<endl;
	}
};

class Quadrange : Triangle
{
private:
	double SideD;
	double DiagE;
	double DiagF;
public:
	//Quadrange(){}
	Quadrange (double a, double b, double c, double d, double e, double f) : Triangle(a , b , c, 0){
		SideD = d;
		DiagE = e;
		DiagF = f;

	}

	~Quadrange ()
	{
		cout<< "Quadrange destroyed"<<endl;
	}

	double PerimeterQ()
	{
		double PQ = sideA + sideB + sideC + SideD;
		return PQ;
	}

	double SquareQ()
	{
		double SQ = sqrt(4*DiagE*DiagE*DiagF*DiagF-(sideB*sideB+SideD*SideD-sideA*sideA-sideC*sideC)*(sideB*sideB+SideD*SideD-sideA*sideA-sideC*sideC)/16);
		return SQ;
	}
	void InformationQ()
	{
		cout<<"Side A = "<< sideA <<endl;
		cout<<"Side B = "<< sideB <<endl;
		cout<<"Side C = "<< sideC <<endl;
		cout<<"Side D = "<< SideD <<endl;
		cout<<"Perimeter = "<< PerimeterQ() <<endl;
		cout<<"Square = "<< SquareQ() <<endl;
	}

};

int main()
{	
	Triangle triangle1( 4.0 , 3.0 , 5.0 , 0.5 );

	triangle1.Information();

	Quadrange quadrange1(4.0, 4.0, 4.0, 4.0, sqrt(2.0)*4.0, sqrt(2.0)*4.0 );

	quadrange1.InformationQ();

	system("pause");

	return 0;
}