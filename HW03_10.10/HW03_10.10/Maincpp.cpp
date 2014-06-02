#include <iostream>
using namespace std;

class MyInteger{
public:
	int value;
	MyInteger(){
		value=1;
	}
	MyInteger(int a){
		value=a;
	}
	const int getValue (){
		return (value);
	}
	const bool isEven(){
		if (value%2==0)
			return true;
		else
			return false;
	}
	const bool isOdd(){
		if (value%2==0)
			return false;
		else
			return true;
	}
	const bool isPrime (){
		bool a=false;
		for (int x=2; x<value; x++){
			if (value%x==0)
				a=true;
		}
		if (a==false)
			return false;
		else
			return true;
	}
	static bool isEven (int a){
		if (a%2==0)
			return true;
		else
			return false;
	}
	static bool isOdd(int a){
		if (a%2==0)
			return false;
		else
			return true;
	}
	static bool isPrime (int b){
		bool a=false;
		for (int x=2; x<b; x++){
			if (b%x==0)
				a=true;
		}
		if (a==false)
			return false;
		else
			return true;
	}
	const bool equals (int a){
		if (value==a)
			return true;
		else 
			return false;
	}
	const bool equals (MyInteger& Integer){
		if (Integer.value==value)
			return true;
		else
			return false;
	}
};

int main (){
	int n;
	cout << "Value: \n";
	cin >> n;
	MyInteger a(n);
	cout << "value: "<< a.getValue() << endl;
	cout << "Even: " << a.isEven() << endl;
	cout << "Odd: " << a.isOdd() << endl;
	cout << "Prime: " << a.isPrime() << endl;
	int b;
	cout << "new Value: ";
	cin >> b;
	cout << "Even: " << a.isEven(b) << endl;
	cout << "Odd: " << a.isOdd(b) << endl;
	cout << "Prime: " << a.isPrime(b) << endl;
	return 0;
}