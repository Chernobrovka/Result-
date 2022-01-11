#include <iostream>
#include "stdio.h"
#include <cstdlib>

using namespace std;

class diamond {
protected: 
	string title;

	double weight;

	double quality;

	diamond(){}

public: 
	diamond(string t, double w, double q ){
		title = t;
		weight = w;
		quality = q;
	}

	double Q(){
		double Q = 0.4 * weight + 0.6 * quality;
		return Q;
	}

	void Print(){
		cout<< "title:"<< this->title <<"\n"<<"weight:"<< this-> weight <<"\n"<<"quality:"<<this-> quality << "\n" << "Substance quality: " << this->Q() << endl;
	}
};

enum color { WHITE, BLUE, YELLOW };
class diamondPotomok : diamond {
private:
	color p;

public:
	diamondPotomok(string t, double w, double q, color c):
	diamond(t,w,q)
	{
		p=c;
	}

	void setColor(color c) {
		p=c;
	}

	color Color() {
		return p;
	}

	double Qp() {
		double qp=Q();
		if (p==BLUE) {
			qp=qp+1.0;
		} else if (p==YELLOW) {
			qp=qp-0.5;
		}
		return qp;
	}

	void PPrint()
	{
		cout<< "title:"<< this->title <<"\n" << "weight:"<< this->weight <<"\n"<<"color: "<< this->Color() << "\n" <<"quality: "<< this->Qp() <<endl;
	}
};

int main()
{
	diamond D1("adamand",150,9);

	D1.Print();
	cout << endl;


	diamondPotomok DD1("Emerald", 100, 6, WHITE);

	DD1.PPrint();
	cout << endl;

	system("pause");

	return 0;
}
