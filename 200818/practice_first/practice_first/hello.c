#include "hello.h"

void hello(char *a)
{
	printf(a);
	printf("\n");
}
int *test_arr(int *a)
{

	int *b;
	b = (int *)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; ++i)
	{
		b[i] = a[i];
	}
	return b;
}

// 이게 뭐냐면 함수의 반환형이랑 리턴을 보면
// 리턴은 주소고 반환형은 포인터 (주소 지시자)이니까

// main 문 안에 다음과 같이 박혀 잇을 것임

/* 

int main(){
	int *ar=NULL;
	ar = test_arr(); 








}




*/