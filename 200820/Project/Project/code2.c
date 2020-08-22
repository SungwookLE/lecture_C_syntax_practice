#include <stdio.h>

void mystringcpy(char **pAR, char *a);
void InsertData(double (*k)[3]);
int main(void)
{
#if (0)
	char *pAr[3] = {"programming", "studio", "good"};
	char buf[30];

	mystringcpy(pAr, buf);

	printf("Buf : %s \n", buf);
#elseif(0)
	int v[][5] = {{1, 3, 4}, {7, 8, -1}, {9, 21, -5}};
	int total = 0;

	int(*a)[5] = v;
	int *q = v[2];

	for (int low = 0; low < 3; low++)
	{
		for (int col = 0; col < 3; col++)
		{
			printf("%d ", a[low][col]);
			total += a[low][col];
		}
		printf("\n");
	}
	printf("total = %d\n", total);
	printf("address 2 array(a) = 0x%d\n", v);
	printf("address 2 array(a) = 0x%d\n", v + 1); //v & v+1 size diff = 20 , cause [5] int = 4byte* 5

	printf(" sizeof arr[0] = %d \n ", sizeof(&v));
	printf("address 1 array(a[][0]) = 0x%d\n", **a);
	printf("address 1 array(a[][1]) = 0x%d\n", *(*a + 1));
	printf("address 1 array(a[][2]) = 0x%d\n", *(*a + 2));

	printf("address 1 array(v[0][0]) = 0x%d\n", (q[1]));
#elseif(0)
	double data[5][7] = {
		{
			10,
			0,
			0,
		},
	};
	double(*data_recieve)[7] = data;

	printf("%f\n", (data_recieve)[0][0]);

#else
	double db[2][3] = {{1, 2, 3}, {4, 5, 6}};

	InsertData(db);

#endif

	return 0;
}

void mystringcpy(char **pAr, char *a)
{ // pointer arrary constant "studio" to buf copy
	int idx = 0;
	while (pAr[1][idx] != '\0')
	{

		a[idx] = pAr[1][idx];
		idx++;
	}
	a[idx] = '\0';

	// this does not work because , *a of first, *pAR[1] of first, only front char is replace;
	//*a = *pAr[1];

	printf("Buf : %s \n", a);
}

void InsertData(double (*k)[3])
{

	int col = 0;

	for (int low = 0; low < 2; low++)
	{
		for (int col = 0; col < 3; col++)
		{
			printf("%lf ", k[low][col]);
		}
		printf("\n");
	}
}