#include <stdio.h>
#include <stdlib.h>

#define TMAX 1000

typedef long long LL;

int checkNoNo(LL num,LL* test,int length) {
	for (int i = 0; i < length; i++) {
		if(num % test[i] == 0)
			return 0;
	}
	return 1;
}

LL findNoNo(LL min, LL max,LL *test, int length) {	
	LL count = 0;
	while (max >= min) {
		if (checkNoNo(min, test, length)) {
			count ++;
			//printf("%lld ",min);
		}
		min++;
	}
	return count;
}


void close_test(LL **test) {
	free(*test);
	*test = 0;
}

int set_test(LL **test) {
	int count;
	LL *full =  (LL *) calloc(TMAX, sizeof(LL));

	//fill
	for (int i = 2; i < TMAX; i++) {		
		full[i-2] =  i * i;
	}

	//elimate
	for (int i = 0; i < TMAX - 1; i++) {
		if (full[i] == -1) continue;
		for (int j = i + 1; j < TMAX; j++) {
			if (full[j] % full[i] == 0) {
				full[j] = -1;
			}
		}
	}

	//count
	for (int i = 0; i < TMAX; i++) 
		if (full[i] != -1) count++;
		
	//remap num 
	*test = calloc(count, sizeof(LL));
	for (int i = 0, idx = 0; i < TMAX; i++) {
		if (full[i] != -1)  {
			(*test)[idx] = full[i];
			idx++;
		}
	}
	free(full);
	return count;
}


int main(void) {
	LL min, max, result;
	LL *test;
	int length;
	scanf("%lld %lld", &min, &max);
	length = set_test(&test);
	result = findNoNo(min, max, test, length);
	printf("result: %lld\n",result);
	close_test(&test);
	return 0;
}
