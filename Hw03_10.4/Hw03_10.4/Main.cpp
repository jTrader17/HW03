#include <iostream>
using namespace std;
#include <string>

string sort (string& s){
	int a;
	a=s.length();
	for (int x=0; x<(a-2); x++){
		char a, b;
		a=s.at(x);
		b=s.at(x+1);
		int w;
		w=c.compare(d);
		if (w>0){
			s.replace(x,1,d);
			s.replace(x+1,1,c);
		}
	}
	for ((a-1); a>1; a--){
		string c,d;
		c="s.at(a-1)";
		d="s.at(a-2)";
		int w;
		w=c.compare(d);
		if (w<0){
			s.replace((a-1),1,d);
			s.replace((a-2),1,c);
		}
	}
	return s;
}
int main(){
	string s;
	cout << "declare a word: ";
	cin >> s;
	cout<< sort(s) << endl;
	return 0;
}