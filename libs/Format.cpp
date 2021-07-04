#include <string>
#include <iostream>
#include "String.cpp"
#include "File.cpp"

using namespace std;

string change(int o) {
	string i = readLine(o);
	cout << i << endl;
	string e = format(i);
	cout << e << endl;
	string q = findCor(e);
	cout << q << endl;
	string p = go(i);
	cout << p << endl;
	string w = makeCor(q, p);
	cout << w << endl;
}