#include <stdio.h>
#include <stdlib.h>

char* InsertString();
void DisplayString(char* st);

int main() {
	char* sTring;

	char* (* func)(); // string insert
	func = InsertString;

	while (1) {
		DisplayString( func() );
	}

	
	return 0;
}

char* InsertString() {
	char *pSt;
	char pTemp[100];
	int idx = 0;
	printf("Insert string: ");
	scanf_s("%s", pTemp, sizeof(pTemp));

	while (pTemp[idx] != '\0') 
		idx++;
	idx = idx + 1; // for string , last character is null !

	pSt = (char*)malloc(sizeof(char)*idx);
	printf("heap address(1) : %p \n", pSt);

	idx = 0;
	if (pSt == NULL) {
		exit(1);
	}
	else {
		while (pTemp[idx] != '\0') {
			pSt[idx] = pTemp[idx];
			idx++;
		}
		pSt[idx] = '\0';
	}
	return pSt;
}

void DisplayString(char* st) {
	printf("%s \n", st);
	printf("heap address(2) : %p \n", st);
	free(st);
}
