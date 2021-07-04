#include <string>

#include <iostream>

#include <fstream>

#include "json.hpp"

using namespace std;
using namespace nlohmann;

json templates = {
	{"import", ""},
};

json crossLang = {
	{"import", "#include <placeholder>"}
};

string templateNames [] = {"import"};

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

string getTemplate(int i) {
	return 	templates[templateNames[i]];
}

string findCor(string input) {
	return crossLang[input];
}