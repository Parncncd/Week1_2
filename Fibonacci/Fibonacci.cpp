#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, A[1000], sum;
	A[0] = { 1 };
	A[1] = { 2 };
	sum = 2;
	for (i = 2; A[i-1] <= 4000000; i++) {
		A[i] = A[i - 1] + A[i - 2];


		if (A[i] % 2 == 0) {
			sum += A[i];
		}



	}
	printf("%d", sum);
	return 0;

}
