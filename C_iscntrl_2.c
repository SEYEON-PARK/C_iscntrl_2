#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '1';

	printf("����, ���� ���ڸ� 0�� �ƴ� ���� ���� �ſ���.\n");
	printf("%d", iscntrl(a));

	return 0;
}