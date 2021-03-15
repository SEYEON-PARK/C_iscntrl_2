#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '1'; // 초기화

	printf("만약, 제어 문자면 0이 아닌 수가 나올 거예요.\n");
	printf("%d", iscntrl(a)); // 제어 문자인지 아닌지 확인하여 출력하기

	return 0;
}
