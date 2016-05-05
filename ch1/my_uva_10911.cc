#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;
class Point{
	public :
		Point(int x_=0, int y_=0):x(x_),y(y_) {}

		float distance(const Point &p) {
			return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
		}
		int x , y;
};


float dp[9][9] = {0};
float solve (vector<bool> used, const vector<int> &x, const vector<int> &y) {
	int N = used.size();
	float res = numeric_limits<float>::max();
	bool f = false;
	//Just find the first unset but
	int  i = 0;
	for (;  i <N ; ++i) 
		if (!used[i]) break;

	for (int j = i+1 ;  j <N ; ++j) {
		if (used[j]) continue;
		used[i] = used[j] = true;
		f  = true;
		printf("\n Calling solve i = %d j = %d\n",i, j);
		float ans = solve(used, x , y);
		res = min( ans + dp[i][j], res);
		used[i] = used[j] = false;
	}

	if (f) return res;
	return 0;
}

int main() {
	vector<int> x;
	vector<int> y;
	int N = 0 ; 

	scanf("%d",&N);
	x.assign(2*N  ,0);
	y.assign(2*N  ,0);

	for (int i  = 0; i < 2 * N; ++i) {
		scanf("%d %d",&x[i], &y[i]);
		printf("%d %d\n",x[i], y[i]);
	}
	int _2N = 2 * N;
	for (int i = 0 ; i < _2N-1 ; ++i ) {
		for (int j = i+1 ; j < _2N ; ++j ) {
				dp [j][i] = dp[i][j] = Point(x[i], y[i]).distance(Point(x[j], y[j]));
				printf("dp[%d][%d] = %f\n", i ,j, dp[i][j]);
				printf("dp[%d][%d] = %f\n", j ,i, dp[j][i]);
		}
	}
	vector<bool> b(2*N  , false);
	printf("%f\n", solve(b, x,y));

	return 0;
}
