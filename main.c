#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x);

	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &y);
	
	printf("�������� ����� %f �Դϴ�.\n", (float)x/y);
	
	return 0;
	
}
