#include <stdio.h>
#include <stdlib.h>
void ReverseData(int** pA, int** pB);
int* Display(int* val);
int main() {
#if(0)
	int a[] = { 1,2,3,4,5,6 };
	int* pt = a;
	int** pd = &pt;

	printf("pt = %d \n", pt[0]);
#elseif(0)
	int val = 5;
	int temp = 7;


	int* pA = &val;
	int* pB = &temp;

	printf("1: *pA = %d , *pB = %d \n", *pA, *pB);

	ReverseData(&pA, &pB);
	printf("2: *pA = %d , *pB = %d \n", *pA, *pB);
#else
	int val = 5;
	int temp = 6;
	int* pp = &val;

	int* tt=NULL;

	tt = Display(&val);
	printf("%d\n", *tt*5);

#endif

	return 0;
}

void ReverseData(int** pA, int** pB) {

	int *pM =NULL;

	pM = *pB;
	*pB = *pA;
	*pA = pM;

}

int* Display(int* val) {

	int *temp = (int*)malloc(sizeof(int));
	//static int** temp = NULL;
	temp = val;

	return temp;
}
