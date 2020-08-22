#include <stdio.h>
void arr_set(int* a, int size);
void swditch (int* a, int* b);

int main() {

	int arr[] = { 0x1111,2,3,4 }; // pointer constant : address cannot change
	int* pa = arr; // pointer varialbe

	arr_set(arr, 4);
	printf("arr size : %d \n", sizeof(arr));
	printf("arr = 0x%d \n", *pa); // arr name is start address
	pa++;
	printf("arr = 0x%d \n", *pa);

	char* pt = (char*)&arr;
	printf(" pt : 0x%x \n", *(pt+1) );

	/*2. switch number */
	int a = 3;
	int b = 5;
	swditch(&a, &b);

	printf("a = %d , b = %d\n", a, b);


	return 0;
}


void arr_set(int* a, int size) {
	printf("arr func size : %d \n", sizeof(a));
	for (int i = 0; i < size; i++) {
		a[i] = a[i] * 5;
	}

	return;
}

void swditch(int* a, int* b) {

	int k;

	k = *a;
	*a = *b;
	*b = k;

}