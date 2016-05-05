#include <string>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;


int main() {
	ifstream in ("1.cc",ios::in);
	if (! in) return -1;
	string t, r;
	while (!in.eof()) {
		getline(in, t);
		if (t.substr(0,7)  == string(".......")) break;
		r += r.empty() ? t : " " + t;
	}
	printf("%s\n",r.c_str());
	return 0;
}
//.......
/*****
This will come
....................
This wont
****/
