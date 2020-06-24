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

void swap(int x, int y)		//값 바꾸기2(변화없음)
{						//a,b를 변수로 받아서 사용 하므로 주소값을 변경 할 수 없음
	int tmp;

	//tmp = x;
	x = x + 50;
	y = y + 50;

	printf("x=%d,y=%d\n\n", x, y);
}

void swap2(int* px, int* py)	//포인터로 a,b값 바꾸기(변화있음)
{							//포인터로 받아오면 주소에 들어있는 값을 건드릴 수 있음
	int tmp;
	*px = *px + 50;
	*py = *py + 50;

	//tmp = *px;
	//*px = *py;
	//*py = tmp;
}