#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned char Tx : 2; // 2bit use! only
	unsigned char Rx : 2;

	unsigned char control : 4;
}DATA_BF; //bit field syntex

int main(void) {
	DATA_BF TT;
	TT.Tx = 5; // 0101
	printf("%d\n", TT.Tx);
	
	printf("Data_bf size : %d \n", (unsigned int)sizeof(DATA_BF));
	return 0;
}

