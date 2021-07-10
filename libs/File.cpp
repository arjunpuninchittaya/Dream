#include <string>

#include <iostream>

#include <fstream>

#include "json.hpp"

using namespace std;
using namespace nlohmann;

json crossLang = {
	{"", "placeholder"},
	{"import", "#include <placeholder>"},
	{"println", "std::cout << placeholder << std::endl;"},
	{"print", "std::cout << placeholder;"},
	{"}", "}"},
	{"func", "int placeholder(2placeholder) {"},
	{"for", "for (placeholder) {"},
	{"while", "while (placeholder) {"},
	{"run", "placeholder);"}
};

string readLine(int e) {
  fstream inputFile;
  inputFile.open("test/test.drm", ios_base:: in );
  string output = "";
  int currentLine = 0;
  if (inputFile.is_open()) {
    string tp;
    while (getline(inputFile, tp)) {
      if (currentLine == e) {
        output = tp;
      }
      currentLine++;
    }
    inputFile.close();
  }
  return output;
}

string findCor(string input) {
	if (crossLang.contains(input)) {
		return crossLang[input];
	} else {
		return input;
	}
}

int lines() {
	fstream inputFile;
  inputFile.open("test/test.drm", ios_base:: in );
  int currentLine = 0;
  if (inputFile.is_open()) {
    string tp;
    while (getline(inputFile, tp)) {
      currentLine++;
    }
    inputFile.close();
  }
	return currentLine;
}

void writeToCompiled(string input) {
	fstream file;
	file.open("Compiled.cpp", ios::out);
	file << input;
}