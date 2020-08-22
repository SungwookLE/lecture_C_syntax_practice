#include <stdio.h>
void sstringcpy(const char* a, char* b);
int main(void) {

	int val = 5;
	int temp = 8;

#if(0)
	const int* pv = &val;
	// *pv = temp; const cannot modify the value
	pv = &temp; // but it can, because it change
	printf("vale = %d\n", *pv);

	// it means pointer variable is fixed, thus only can change through reference
#else
	int* const pV = &val;
	// pV = &temp ; cannot be modify
	*pV = temp; // can change the value
	printf("vale = %d\n", *pV);
	// it means variable referemce is fixed, thus only can change through variable
#endif
	for (int j = 0; j < 5;++j) {
		printf("!!%d\n", j);
	}


	char st[10] = "EMBEDEDE";
	char sp[10];

	sstringcpy(st, sp);
	printf("value = %s\n", sp);

	return 0;
}
void sstringcpy(const char* a, char* b) {
	int idx = 0;
	//b = a; cannot here the ref in array type it;s shallow copy
#if(0)
	// must like that follow: deep
	// indexing method
	while (a[idx] != '\0') {
		b[idx] = a[idx];
		idx++;
	}
	b[idx] = '\0';
#else
	// pointer method
	while (*a != '\0') 
		*(b++) = *(a++);
	*b = '\0';

#endif
	return;
}

