#include <stdio.h>
#include <stdlib.h>

int* InsertData(int *pC);
void DisplayData(int* pD, int size_len);

int main(void) {
	int *gg = NULL;
	int count;
	

	gg = InsertData(&count);
	//printf(" %d \n ", G[0]);
	DisplayData(gg, count);
	//printf(" %d \n ", gg[3]);


	return 0;
}

int* InsertData(int *pC) {
	int num, i;
	i = 0;
	printf("insert number of size: ");
	scanf_s("%d", &num);

	int* TT = (int*)malloc( sizeof(int) * num ) ;
	*pC = num;

	if (TT == NULL) {
		printf(" fail to get the dynamic heap memory \n");
		return NULL; // do not instruct something: empty
	}
	else{
		while (num > 0) {
			num = num - 1;
			TT[i] = 10;
			i = i + 1;
		}
	}

	return TT;
}

void DisplayData(int* pD, int size_len) {
	printf("sizeof = %d \n" ,sizeof(pD)) ;
	for (int i = 0; i < size_len; i++) {
		printf("pD[%d] = %d \n", i, pD[i]);
	}
	free(pD);
}

