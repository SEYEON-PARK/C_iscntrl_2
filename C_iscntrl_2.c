#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '1';

	printf("만약, 제어 문자면 0이 아닌 수가 나올 거예요.\n");
	printf("%d", iscntrl(a));

	return 0;
}