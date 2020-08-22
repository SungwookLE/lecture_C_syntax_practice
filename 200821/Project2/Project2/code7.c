#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int age;
	char name[30];
	double weight;
}PER;

PER* InputData(void);
void DisplayData(PER* pD);

int main() {
	PER* pST = NULL;
	
	pST = InputData();
	DisplayData(pST);

	return 0;
}

PER* InputData(void){

	PER* pNew = (PER*)malloc(sizeof(PER));

	if (pNew == NULL)
		exit(1);
	pNew->age = 50;
	pNew->weight = 5.4;


	return pNew;
}

void DisplayData(PER* pD) {
	printf("Print Age: %d \n", pD->age);
	printf("Print Name: %s \n", pD->name);
	printf("Print Weight: %lf \n", pD->weight);
}