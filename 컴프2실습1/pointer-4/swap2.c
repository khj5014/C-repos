#include <stdio.h>
void swap(int px, int py);
void swap2(int *px, int* py);

int main(void)	
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n",a, b);

	swap(a, b);
	printf("a=%d b=%d\n",a, b);

	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)		//�� �ٲٱ�2(��ȭ����)
{						//a,b�� ������ �޾Ƽ� ��� �ϹǷ� �ּҰ��� ���� �� �� ����
	int tmp;

	//tmp = x;
	x = x + 50;
	y = y + 50;

	printf("x=%d,y=%d\n\n", x, y);
}

void swap2(int* px, int* py)	//�����ͷ� a,b�� �ٲٱ�(��ȭ����)
{							//�����ͷ� �޾ƿ��� �ּҿ� ����ִ� ���� �ǵ帱 �� ����
	int tmp;
	*px = *px + 50;
	*py = *py + 50;

	//tmp = *px;
	//*px = *py;
	//*py = tmp;
}