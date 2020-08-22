#include <stdio.h>

typedef struct {
	int age;
	char name[30];
	double weight;
}PER;


void InputData(PER* pD, unsigned int);
void DisplayData(PER* pD, unsigned int _size);


int main(void) {
	PER data[3] = { 
		{30, "SungwookLE", 73.1},
		{26, "SuminLE", 50.3},
		{33, "SungdaeLE", 80.2} };

	printf("data size: %d \n", sizeof(data));
	InputData(data, sizeof(data) / sizeof(data[0]));
	DisplayData(data, sizeof(data) / sizeof(data[0]));
	return 0;
}

void InputData(PER* pD, unsigned int _size) {
	int i = 0;
	while (_size--) {
		printf("\nInsert Age: ");
		scanf_s("%d", &pD[i].age);
		printf("\nInsert Name: ");
		scanf_s("%s", pD[i].name, 10);
		printf("\nInsert weight: ");
		scanf_s("%lf", &pD[i].weight);
		i++;
	}
	
}

void DisplayData(PER* pD, unsigned int _size) {
	int i = 0;
	while (_size--) {
		printf("Display Age: %d\n ", pD[i].age);
		printf("Display Name: %s\n ", pD[i].name);
		printf("Display Weight: %lf\n ", pD[i].weight);
		i++;
	}



}
