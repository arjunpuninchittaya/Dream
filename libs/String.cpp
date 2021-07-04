#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string go(string i) {
  int fpp = i.find_first_of('(') + 1;
  int lpp = i.find_last_of(')');
  return i.substr(fpp, lpp - fpp);
}

string deep(int i, string q) {
  string last = q;
  for (int e = 0; e < i; e++) {
    last = go(last);
  }
  return last;
}

int count(string s, char ch) {
  int count = count_if(s.begin(), s.end(),
    [ & ch](char c) {
      return c == ch;
    });
  return count;
}

int depth(string i) {
  return (count(i, '(') + count(i, ')')) / 2;
}

static std::string removeSpaces(std::string str) {
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

string format(string input) {
	int fpp = input.find_first_of('(');
	return removeSpaces(input.substr(0, fpp));
}

string makeCor(string format, string insert) {
	return format.replace(format.find("placeholder"),11,insert);
}