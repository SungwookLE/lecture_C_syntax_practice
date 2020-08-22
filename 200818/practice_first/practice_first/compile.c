#include <stdio.h>
#include "hello.h"
// proprocess macro
#define PI 3.14

int main(int arg, char** arv) {
	/* 0. type check */
	typedef long long int int32;
	printf("%d\n", sizeof(int32));

	/* 1. Hello world! */	
	char a[] = "Hello C programming!!";
	hello(a);

	/* 1-1. personal check for array handling */
	int ar[] = { 1,3,5,7,9 };
	int* ar2;
	ar2=test_arr(ar);
	for (int i = 0; i < 5; ++i) {
		printf("%.3d ", ar2[i]);
	}
	free(ar2);
	
	/* 1-2. personal check for main prototype and double pointer*/
	char* arv1 = arv[0];
	char* arv2 = arv[1];
	printf("\n%s\n\r",arv2);

	/* 2. complementary number of two */
	int val = 15;
	int res = ~val + 1;
	printf("val: %d , res: %d\n", val, res);

	/* 3. bit check and print using bit operator*/
	int temp = 0x01; 

	for (int idx = 0; idx < 32; idx++) {

		if ((temp & (0x80000000 >> idx)) ==0)
			printf("0 ");
		else
			printf("1 ");
	}


	return 0;
}