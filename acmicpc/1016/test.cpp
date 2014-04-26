#include <iostream>
#define TMAX 1000000
typedef long long LL;
using namespace std;

LL array[TMAX];
int checkNoNo(LL num) {
	for (LL i = 2; i * i <= num; i++) {
		if (num % ( i * i) == 0)
			return 0;
	}
	return 1;
}

LL findNoNo(LL min, LL max) {	
	LL count = 0;
	for (; max >= min; min++)
		count += checkNoNo(min); 
	return count;
}

int main(void) {
	LL min, max, result;
	int length;
	cin >> min;
	cin >> max;
	result = findNoNo(min, max);
	cout << result << endl;
	return 0;
}
