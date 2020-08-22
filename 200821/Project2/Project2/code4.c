#include <stdio.h>


typedef struct {
	int age;
	char name[30];
	char company[30];
	double weight;

} TT;

void Display(TT data);
void SettingData(TT* data);
void mymeorycpy(void* pDest, void* pSrc, int _size);

int main(void) {
	TT T = { 30, "SungwookLE","HMC", 73 };

	printf("T.age: %d\n", T.age);
	Display(T);
	SettingData(&T);
	printf("T.age: %d\n", T.age);

	TT temp = { 0, };
	printf("T size : %d \n", sizeof(T));
	mymeorycpy(&temp, &T, sizeof(T));
	Display(temp);


	return 0;
}

void Display(TT data) {
	printf("data.name: %s\n", data.name);
}

void SettingData(TT* data) {
	data->age = 31;
}

void mymeorycpy(void* pDest, void* pSrc, int _size) {
	char* pChsrc = (char*)pSrc;
	char* pChdest = (char*)pDest;

	while (_size--) 
		*pChdest++ = pChsrc++;
}

 