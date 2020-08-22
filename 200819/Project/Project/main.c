#include <stdio.h>
#include <stdlib.h>

int* sum_set(int ta);

int main() {
	/*1. Test of the size of pointer and pointer content */
	char a = 4;
	char* p = &a;

	printf("a : size %d\n", sizeof(a));
	printf("*p : size %d\n", sizeof(*p));
	printf("size: %d \n", sizeof(double));
	printf("p : size %d --> always return the size of address*\n", sizeof(p));

	/*2. pointer practice using reference and little endian printf */
	int val = 0x12345678;
	// trim 1byte size using char type case 
	char* ptr = (char*)&val;

	printf("&val : 0x%p \n", &val);
	printf("ptr : %p \n", ptr);
	printf("*ptr : 0x%x \n", *ptr);

	// litter endian display
	printf("0x%x%x%x%x \n", *(ptr + 0), *(ptr + 1), ptr[2], *(ptr + 3));
	// it can be accessed using array index

	/*3. test the size of double */
	double d = 5.4;
	double* pt = &d;

	printf("d = %f\n", *pt);
	printf("*d = %p \n", pt);
	// it can not reasonalbe, because pointer address just is address regardless of var type
	printf("d = %f \n", *(pt+1));
	
	/*4. pointer void return*/
	int tt = 5;
	int* qq;
	qq = (sum_set(tt));
	printf("function return: %p\n", qq);


	/*5. print char string */
	char* ch = "Sungwook LE";
	for (int idx = 0; ch[idx] != '\0'; idx=idx+1) {
		printf("*ch = %c \n", *(ch+idx));
	}
	printf("*ch = %c \n", *(ch));
	

	return 0;
}

int* sum_set(int ta) {
	int* ppp= (int*)malloc(sizeof(int));
	ppp = &ta;
	*ppp += 5;
	printf("address ppp = %p \n", ppp);

	return ppp;
}
