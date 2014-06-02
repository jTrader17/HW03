#include <iostream>
#include <string>
using namespace std;

class Fan {
private:
	int speed;
public:
	bool on;
	double radius;

	int getSpeed () {
		return (speed);
	}

	string getOn () {
		if (on==true){
			return ("fan is on");
		}
		else
			return ("fan is off");
	}

	double getRadius () {
		return (radius);
	}

	void setSpeed (int newspeed) {
		if (newspeed==1 || newspeed==2 || newspeed==3) {
			speed=newspeed;
		}
	}

	void setOn (bool on1) {
		on=on1;
	}

	void setRadius (double radius1) {
		radius=radius1;
	}

		Fan (){
		speed=1;
		on=false;
		radius=5;
	}
};

int main () {
	Fan fana;
	Fan fanb;
	fana.setSpeed(3);
	fana.setRadius(10);
	fana.setOn (true);
	fanb.setSpeed(2);
	fanb.setRadius(5);
	fanb.setOn (false);
	cout << fana.getSpeed () << endl;
	cout << fana.getOn () << endl;
	cout << fana.getRadius () << endl;
	cout << fanb.getSpeed () << endl;
	cout << fanb.getOn () << endl;
	cout << fanb.getRadius () << endl;
	return 0;
}

