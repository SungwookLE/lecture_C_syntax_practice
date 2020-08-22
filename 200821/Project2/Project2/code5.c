#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int age;
	char* pName;
	double weight;
}PER;
void InputData(PER* data);
void DisplayData(PER data);

int main(void) {
	PER val;
	InputData(&val); 
	DisplayData(val);

	free(val.pName);

	return 0;
}

void InputData(PER *data) {
	char Buf[50];
	int idx = 0;
	data->age = 30;
	printf("Insert your name: ");
	scanf_s("%s", Buf, sizeof(Buf));
	while (Buf[idx] != '\0') {
		idx++;
	}
	idx = idx + 1;
	data->pName = (char*)malloc(sizeof(char) * idx);
	idx = 0;
	while (Buf[idx] != '\0') {
		data->pName[idx] = Buf[idx];
		idx++;
	}
	data->pName[idx] = '\0';

	data->weight = 73;
}

void DisplayData(PER data) {
	printf("Age\t:%d\n", data.age);
	printf("Name\t:%s\n", data.pName);
}