#include <iostream>
#include "libs/String.cpp"
#include "libs/File.cpp"

using namespace std;

int main() {
	string i = readLine(0);
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

