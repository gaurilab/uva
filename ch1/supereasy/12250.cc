#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
#include <cstring>
#include <map>
#include <cctype>
using namespace std;
int main() {
	string  wish;
	
	std::map<string,string> lookup;
	lookup["HELLO"]= "ENGLISH";
	lookup["HOLA"] = "SPANISH";
	lookup["HALLO"] = "GERMAN";
	lookup["BONJOUR"] = "FRENCH";
	lookup["CIAO"] = "ITALIAN";
	lookup["ZDRAVSTVUJTE"] = "RUSSIAN";
	int i = 0 ;
	while (!cin.fail()) {//(char*)NULL) {
		getline(cin, wish);
		if (wish == "#")  break;
		std::map<string, string>::iterator it = lookup.find(wish);
		printf("Case %d: %s\n",++i, it != lookup.end() ? it->second.c_str(): "UNKNOWN");
	}
	return 0;
	}
