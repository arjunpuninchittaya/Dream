#include <string>
#include <iostream>
#include "String.cpp"
#include "File.cpp"

using namespace std;

string changeLine(int o) {
	string i = readLine(o);
	string f = format(i);
	string p = go(i);
	string e = go2(i);
	string q = findCor(removeRealSpaces(f));
	if (p == e) {
		e = "";
	}
	string w = makeCor(q, p, i, e);
	return w;
}

string changeAll() {
	string returnValue = "";
	for (int i = 0; i < lines(); i++) {
		returnValue+=(changeLine(i) + "\n");
	}
	return returnValue;
}

void writeToFile(string input) {
	writeToCompiled(input);
}