#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned long long int b ;
	int n, a , c , temp;
	a = 0;
	b = 1;
	printf("½Ð¿é¤J¦ì¶¥:");
	scanf_s("%d", &n);
	for (c = 0; c < n; c++)
	{
		if (c == 0 || c == 1)
		{
			printf("%d ",c) ;

		}
		else
		{
			temp = b;
			b = a + b;
			a = temp;
			printf("%d ", b);
		}
	}
	system("pause");
	return 0;
}