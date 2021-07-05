#include <string>
#include <iostream>
#include "File.cpp"

using namespace std;

string changeLine(int o) {
	string i = readLine(o);
	string f = format(i);
	string p = go(i);
	string q = findCor(f);
	string w = makeCor(q, p);
	return w;
}

string changeAll() {
	string returnValue = "";
	for (int i = 0; i < lines(); i++) {
		returnValue+=(changeLine(i) + "\n");
	}
	return returnValue;
}