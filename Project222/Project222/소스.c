#include <stdio.h>
#define ROWS 3
#define COLS 3
#define MAX_TERMS 10

typedef struct{
	int row;
	int col;
	int value;

} element;

typedef struct{
	element data[MAX_TERMS];
	int rows; //���� ����
	int cols; //���� ����
	int terms; //���� ����
} SparseMatrix;

SparseMatrix Sparse_matrix_add(SparseMatrix a, SparseMatrix b) //��ĵ���
{
	SparseMatrix c; 
	int ca = 0, cb = 0, cc = 0;
	//�迭 a�� �迭 b�� ũ�Ⱑ �������� Ȯ��
	if (a.rows != b.rows || a.cols != b.cols)
	{
		fprintf(stderr, "������ ũ�⿡��| n");
		exit(1);
		}			
	c.rows = a.rows;
	c.cols = a.cols;
	c.terms = 0;

	while (ca < a.terms && cb < b.terms)
	{
		//�� �׸��� �������� ��ȣ�� ����Ѵ�.
		int inda = a.data[ca].row * a.cols + a.data[ca].col;
		int indb = b.data[cb].row * b.cols + b.data[cb].col;
		if (inda < indb)
		{
			//a�迭�� �տ� ������
			c.data[cc++] = a.data[ca++];

		}
		else if (inda == indb)
		{
			//a�� b�� ���� ��ġ
			if ((a.data[ca].value + b.data[cb].value) != 0)
			{
				c.data[cc].row = a.data[ca].row;
				c.data[cc].col = a.data[ca].col;
				c.data[cc++].value = a.data[ca++].value + b.data[cb++].value;
			}
			else
			{
				ca++; cb++;
			}
		}
		else
		{
			//b �迭 �׸��� �տ� ����
			c.data[cc++] = b.data[cb++];
		}
	}
	for (; ca < a.terms;)
		c.data[cc++] = a.data[ca++];
	for (; cb < b.terms;)
		c.data[cc++] = b.data[cb++];
	c.terms = cc;
	
	return c;
}
SparseMatrix Sparse_matrix_subtraction(SparseMatrix a, SparseMatrix b) //��ĖE��
{
	SparseMatrix d;
	int ca = 0, cb = 0, cc = 0;
	//�迭 a�� �迭 b�� ũ�Ⱑ �������� Ȯ��
	if (a.rows != b.rows || a.cols != b.cols)
	{
		fprintf(stderr, "������ ũ�⿡��| n");
		exit(1);
	}
	d.rows = a.rows;
	d.cols = a.cols;
	d.terms = 0;

	while (ca < a.terms && cb < b.terms)
	{
		//�� �׸��� �������� ��ȣ�� ����Ѵ�.
		int inda = a.data[ca].row * a.cols + a.data[ca].col;
		int indb = b.data[cb].row * b.cols + b.data[cb].col;
		if (inda < indb)
		{
			//a�迭�� �տ� ������
			d.data[cc++] = a.data[ca++];
	
		}
		else if (inda == indb)
		{
			//a�� b�� ���� ��ġ
			if ((a.data[ca].value + b.data[cb].value) != 0)
			{
				d.data[cc].row = a.data[ca].row;
				d.data[cc].col = a.data[ca].col;
				d.data[cc++].value = a.data[ca++].value - b.data[cb++].value;
			}
			else
			{
				ca++; cb++;
			}
		}
		else
		{
			//b �迭 �׸��� �տ� ����
			d.data[cc].row = b.data[cb].row;
			d.data[cc].col = b.data[cb].col;
			d.data[cc++].value = -(b.data[cb++].value);
		}
}
	for (; ca < a.terms;)
		d.data[cc++] = a.data[ca++];
	for (; cb < b.terms;)
		d.data[cc++] = b.data[cb++];
	d.terms = cc;

	return d;
}

void SparseMatrix_print(SparseMatrix x)
{
	printf("��        ��\n");
	int n = 0;
	
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (x.data[n].row == r && x.data[n].col == c)
			{
				printf(" %d ", x.data[n].value);
					n++;
			}
			else
				printf(" 0 ");
		}
		printf("\n");
	}
		printf("��        ��\n");
	
}

int main()
{
	SparseMatrix m1 = { {{ 1, 1, 5}, {2, 2, 9}},3, 3, 2};
	SparseMatrix m2 = { {{ 0, 0, 5}, {2, 2, 9}},3, 3, 2};
	SparseMatrix m3;
	SparseMatrix m4;
	
	m3 = Sparse_matrix_add(m1, m2);
	m4 = Sparse_matrix_subtraction(m1, m2);
	
	printf("   m1��\n");
	SparseMatrix_print(m1);
	printf("   m2��\n"); 
	SparseMatrix_print(m2);
	printf(" m1 + m2��\n");
	SparseMatrix_print(m3);
	printf(" m1 - m2��\n");
	SparseMatrix_print(m4);

	return 0;
}