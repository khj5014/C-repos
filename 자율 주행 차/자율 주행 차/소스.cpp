#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	
  void getSensorData(double *p)
{
	p[0] = rand()%100;
	p[1] = rand()%100;
	p[2] = rand()%100;
	return;
}
int main(void)
{
	srand(time(NULL));
	double sensorData[3];
	getSensorData(sensorData);

	printf("���� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[2]);
	
	printf("\n");
	printf("20174257 ������\n");

	
	return 0;
} 
