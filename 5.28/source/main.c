#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	char b;
	printf("請輸入字母A-Z(a-z):");
	scanf_s("%c", &b);

	if (b >= 'A' && b <= 'Z')

	{

		b = b + 32;

		printf("轉換後為%c\n", b);

	}

	else if (b >= 'a' && b <= 'z')

	{

		b = b - 32;

		printf("轉換後為%c\n", b);

	}


	return 0;

}




