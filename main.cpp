#include <iostream>
#include "libs/String.cpp"
#include "libs/File.cpp"

using namespace std;

int main() {
  string input = "import";
  cout << input << "\n";
  cout << templates[format(input)] << "\n";
}