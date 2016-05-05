#include <string>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>


using namespace std;

int main() {
	string T("I love Cpm  . aadf  fdds , I love algo , I love ds");
	istringstream iss(T);
	vector<string>  toks;
	//copy(istream_iterator<string>(iss), istream_iterator<string>(), ostream_iterator<string>(cout, "\n"));
	copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(toks));
	return 0;
}
