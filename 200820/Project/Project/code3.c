#include <stdio.h>

int adddata(int a, int b) {
	int res;
	res = a + b;

	return res;
}

int muldata(int a, int b) {
	int res;
	res = a * b;
	return res;

}

int main(void) {
	int val = 5;
	int temp = 3;
	int res;

	int (*pF[2])(int, int) = { adddata, muldata };
	res = pF[1](val, temp);

	printf("%d ", res);




	return 0;
}
