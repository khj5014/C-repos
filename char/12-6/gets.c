#include <stdio.h>
 
int main(void)
{
       char name[100];
       char address[100];
 
       printf("�̸��� �Է��Ͻÿ�: ");
       gets_s(name, 100);  // '\n'�� ����~~~~scan -->'\n' �� ���� �ȵ�~~~

       printf("�ּҸ� �Է��Ͻÿ�: ");
       gets_s(address, 100);
 
       puts(name);
       puts(address);

       return 0;
}