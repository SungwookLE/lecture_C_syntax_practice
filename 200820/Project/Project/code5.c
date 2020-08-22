#include <stdio.h>
void memorycopty(void* pS, void* pD, int);

int main(void) {

#if(0)
	int temp = 8;
	void* pt = &temp;
	// void pointer can save any data type pointer but, if you return the value, should enforce change the data type

	printf("pt : 0x%p \n", pt);
	printf("&temp : 0x%p \n", &temp);

	*((int*)pt) = 30;

	printf("pt : %d \n", temp);


#else

	char Src[30] = "test proggramming";
	char Dest[30];

	int sSrc[30] = { 5,2,3,4,12, };
	int dDest[30];


	memorycopty(sSrc, dDest, sizeof(sSrc));

	printf("%d ", dDest[3]);

#endif
	return 0;
}

void memorycopty(void* pS, void* pD, int len) {
	

	char* pSch = (char*)pS;
	char* pDch = (char*)pD;


	while (len--) {
		*(pDch++) = *(pSch++);
	}

	//pDch[idx] = '\0';
}