#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	char b;
	printf("�п�J�r��A-Z(a-z):");
	scanf_s("%c", &b);

	if (b >= 'A' && b <= 'Z')

	{

		b = b + 32;

		printf("�ഫ�ᬰ%c\n", b);

	}

	else if (b >= 'a' && b <= 'z')

	{

		b = b - 32;

		printf("�ഫ�ᬰ%c\n", b);

	}


	return 0;

}




