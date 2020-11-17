#include <stdio.h>
#include <stdlib.h>
int ex(int, int);

int main(void)
{
	int i,a,b;
	printf("輸入基數:");
	scanf_s("%d", &a);
	printf("輸入次方:");
	scanf_s("%d", &b);
	printf("次方  值 \n");	
	for (i = 0; i <= b; i++) 
	{
		printf("%2d%6d\n", i, ex(a, i));
	}
	
	return 0;
}

int ex(int a, int x)
{
	if (x == 0) 
	{
		return 1;
	}
	else {
		return a * ex(a, x - 1);
	}
}