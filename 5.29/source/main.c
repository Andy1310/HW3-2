#include <stdio.h>
#include <stdlib.h>
int LCM(int a, int b);
int main(void)
{
	int a, b, y, temp;

	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	y=LCM(a, b);
	printf("%d �M %d �̤p������: %d \n ", a, b, y);
	system("pause");
	return 0;
}

int LCM(int a, int b)
{
	int z;
	for (z = a; z > 0; z++)  
		if (z % a == 0 && z % b == 0)
		{ 
					break;
		}
	return z;
}