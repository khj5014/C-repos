//�����ڵ� �Է� ��ũ��
#include <stdio.h>
#include <conio.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <windows.h>

int main(int argc, char** argv)
{
	while (1)
	{
		if (GetAsyncKeyState(VK_RETURN) != 0)
		{
			printf("����Ű�Էµ�\n");
			Sleep(1000);
		}
		if (GetAsyncKeyState(13) != 0)
		{
			printf("Key Down : A\n");
			Sleep(1000);
		}
		if (GetAsyncKeyState(0x1B) != 0)
		{
			break;
		}
	}
	return 0;
}