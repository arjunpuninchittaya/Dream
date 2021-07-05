#include <string>

#include <iostream>

#include <fstream>

#include "json.hpp"

#include "String.cpp"

using namespace std;
using namespace nlohmann;

json crossLang = {
	{"import", "#include <placeholder>"},
	{"println", "std::cout << placeholder << std::endl;"},
	{"print", "std::cout << placeholder;"},
};

string readLine(int e) {
  fstream inputFile;
  inputFile.open("test/test.drm", ios_base:: in );
  string output = "";
  int currentLine = 0;
  if (inputFile.is_open()) {
    string tp;
    while (getline(inputFile, tp)) {
      if (currentLine == e && tp != removeSpaces(tp)) {
        output = tp;
      }
      currentLine++;
    }
    inputFile.close();
  }
  return output;
}

string findCor(string input) {
	return crossLang[input];
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