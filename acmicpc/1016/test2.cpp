#include <iostream>
#include <cmath>
#define TMAX 1000000
typedef long long LL;
using namespace std;

LL array[TMAX] = {0};
void init(LL min, LL max) {
	for (int i = 0; min + i >= max; i++)
		array[i] = min + i;
}

int main(void) {
	LL min, max, result;
	cin >> min;
	cin >> max;
	init(min, max);
	cout << result << endl;
	return 0;
}
