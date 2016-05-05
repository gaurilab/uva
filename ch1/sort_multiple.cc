#include <cstdio>
#include <vector>
using namespace std;


struct date{
	int d, m ,  y;
	date(int a , int b , int c) : d(a), m(b),y(c) {};
	int operator< (const date& d) {

	}
};
int main() {
	int n;
	vector<int> dd, mm, yy;
	scanf("%d", &n);
	dd.assign(n , 0);
	mm.assign(n , 0);
	yy.assign(n , 0);
	for (int k = 0 ; k < n ; ++k) {
		scanf("%d %d %d", &dd[k], &mm[k], &yy[k]);
	}
	return 0;
}
