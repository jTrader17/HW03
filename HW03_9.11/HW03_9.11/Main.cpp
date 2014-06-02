#include <iostream>
using namespace std;

class EvenNumber {
private:
	int value;
public:
	EvenNumber(){
		value=0;
	}

	EvenNumber(int a){
		if (a%2==0)
			value=a;
		else
			cout << "Please enter valid even number\n";
	}

	int getValue(){
		return (value);
	}

	int getNext(){
		return (value+2);
	}

	int getPrevious (){
		return (value-2);
	}

};

int main (){
	EvenNumber sixteen (16);
	int a=sixteen.getNext(); 
	int b=sixteen.getPrevious();
	cout << "Next even number is: " << a << endl << "Previous even number is: " << b << endl;
	return 0;
}