#include <stdio.h>


typedef struct {
	int age;
	char name[30];
	char company[30];
	double weight;
	void var(int a, int b) {
		printf("TTT\n");
	}
} TT;


int main(void) {
	TT T;
	printf("asdasd");
	T.var(5, 3);


	return 0;
}