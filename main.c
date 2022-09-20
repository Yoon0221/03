#include <stdio.h>

int main(void)
{
	char text;
	
	printf("input a character : ");
	scanf("%c", &text);
	
	printf("the next charater of %c (%d) is %c (%d)\n", text, text, text+1, text+1);
	
	return 0;
	
}
