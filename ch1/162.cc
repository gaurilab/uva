#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <limits>
#include <queue>

using namespace std;

typedef pair<char , char > Card;
deque<Card> P[2];

int main() {
	int turn = 1;
	while((ch  = getchar()) != '#') {
		ch2 = getchar();
		P[turn].push_back(Card(ch, ch2));
		turn = (turn + 1)%2;
	}
	assert(P[0].size() == P[1].size());
	deque<Card>::iterator  p0  = P[0].begin();
	deque<Card>::iterator  p1  = P[1].begin();

	while ( p0 != P[0].end() && p1 != P[1].end() ) {
	}



	return 0;
}
