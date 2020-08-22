#include <stdio.h>
void InsertString(char(*a)[30], int ll);
void DisplayString(char(*a)[30]);

int main(void) {

	char str[3][30];
	printf("string size of byte(pointer array) = %d\n", sizeof(str) / sizeof(char));
	printf("string size of byte = %d\n", sizeof(str[0]) / sizeof(char));

	InsertString(str, sizeof(str[0])/sizeof(char)); // in str 2degree array, save 3 string
	DisplayString(str); // print
	return 0;
}

void InsertString(char(*a)[30], int ll) {
	printf("string size of byte(pointer array variable) = %d\n", sizeof(a) / sizeof(char));
	printf("string size of byte(pointer array variable) = %d\n", sizeof(a[0]) / sizeof(char));
	for (int row = 0; row < 3; row++) {
		printf("insert\t: ");
		scanf_s("%s", a[row], ll);
	}
}

void DisplayString(char(*a)[30]) {
	for (int row = 0; row < 3; row++) {
		printf(" print\t: %s\n", a[row]);
	}
}

