#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//返回一个指向数组的指针
int *shuzu()
{
	static int r[5];
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++)
	{
		r[i] = rand();
		printf("%d \n", r[i]);
	}
	return r;
}

int main()
{
	int i = 0;
	int* p = 0;
	p = shuzu();
	for (i = 0; i < 5; i++)
	{
		printf("%d \n", *(p+i));
	}

	return 0;
}