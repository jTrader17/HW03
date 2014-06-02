#include <iostream>
using namespace std;

class QuadraticEquations {
public:
	double a;
	double b;
	double c;

	QuadraticEquations () {
		a=1;
		b=1;
		c=1;
	}

	QuadraticEquations (int first, int second, int third) {
		a=first;
		b=second;
		c=third;
	}

	double getA () {
		return a;
	}

	double getB (){
		return b;
	}

	double getC () {
		return c;
	}

	double getDiscriminant () {
		return ((b*b)-(4*a*c));
	}

	double getRoot1 (){
		if (getDiscriminant ()<0)
			return 0;
		else {
			return (((-1*b)+(sqrt((b*b)-(4*a*c))))/(2*a));
		}
	}

	double getRoot2 (){
		if (getDiscriminant ()<0)
			return 0;
		else {
			return (((-1*b)-(sqrt((b*b)-(4*a*c))))/(2*a));
		}
	}
};

int main () {
	QuadraticEquations example;
	cout << "ax^2+bx+c\n";
	cout << "please enter a: ";
	cin >> example.a;
	cout << "please enter b: ";
	cin >> example.b;
	cout << "please enter c: ";
	cin >> example.c;
	double x=example.getDiscriminant();
	if (x>0){
		cout << "root 1: " << example.getRoot1() << endl << "root 2: " << example.getRoot2 () << endl;
	}
	else if (x==0)
		cout << "Only 1 root: " << example.getRoot1() << endl;
	else
		cout << "The equation has no real roots\n";
	return 0;
}