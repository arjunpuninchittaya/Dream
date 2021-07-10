#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string go(string i) {
  int fpp = i.find_first_of('(') + 1;
  int lpp = i.find_first_of(')');
  return i.substr(fpp, lpp - fpp);
}

string go2(string i) {
	int fpp = i.find_last_of('(') + 1;
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

string removeSpaces(string str) {
	string thing = str;
	thing.erase(remove(thing.begin(), thing.end(), '	'), thing.end());
	return thing;
}

string removeRealSpaces(string str) {
	string thing = str;
	thing.erase(remove(thing.begin(), thing.end(), ' '), thing.end());
	return thing;
}

string format(string input) {
	int fpp = input.find_first_of('(');
	return removeSpaces(input.substr(0, fpp));
}

string ReplaceString(string subject, const string& search, const string& replace) {
    size_t pos = 0;
    while((pos = subject.find(search, pos)) != string::npos) {
      subject.replace(pos, search.length(), replace);
      pos += replace.length();
    }
    return subject;
}

string makeCor(string format1, string insert, string tabs, string insert2) {
	int i = count(tabs ,'\t');
	string f = ReplaceString(removeSpaces(format1), "2placeholder", insert2);
	f = ReplaceString(removeSpaces(f), "placeholder", insert);
	for (int e = 0; e < i; e++) {
		f = "\t" + f;
	}
	return f;
}