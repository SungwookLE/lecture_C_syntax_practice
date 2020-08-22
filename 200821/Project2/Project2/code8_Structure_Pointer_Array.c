#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int age;
	char *name;
	double weight;
} PER;

PER *InputData(void);
void DisplayData(PER **pD);

int main()
{
	PER *pST[3] = {NULL, NULL, NULL};

	for (int idx = 0; idx < 3; idx++)
	{
		pST[idx] = InputData();
	}

	DisplayData(pST);
	return 0;
}

PER *InputData(void)
{

	PER *pNew = (PER *)malloc(sizeof(PER));

	if (pNew == NULL)
		exit(1);
	pNew->age = 50;
	pNew->weight = 5.4;
	pNew->name = "Sung--wookLEE";

	return pNew;
}

void DisplayData(PER **pD)
{
	for (int idx = 0; idx < 3; idx++)
	{

		printf("%s\n", pD[idx]->name);
	}
}
