#include <string>
#include <cstdio>

using namespace std;

int main() {
	string T("I love Cpm , I love algo , I love ds");
	string P("love");
	size_t found = 0;
	do {
		found = T.find (P, found);
		if (found != string::npos) {
			printf("Found %s at %lu\n", P.c_str(), found);
			++found;
		} 
	} while (found != string::npos);
	return 0;
}
