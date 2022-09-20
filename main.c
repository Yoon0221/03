#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("분자를 입력하세요 : ");
	scanf("%d", &x);

	printf("분모를 입력하세요 : ");
	scanf("%d", &y);
	
	printf("나누기의 결과는 %f 입니다.\n", (float)x/y);
	
	return 0;
	
}
