#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#define size 7
#define size1 9
void task1()
{
//1.������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������
//������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������
	int arr1[size] = { 0 };
	int arr2[size1] = { 0 };
	int arr3[16];

	for (int i = 0; i < size; i++)
	{
		arr1[i] = 1 + rand() % 200;
		arr3[i] = arr1[i];
	}
	
	for (int i = 0; i < size1; i++)
	{
		arr2[i] = 1 + rand() % 200;
		arr3[i + 7] = arr2[i];
	}

	for (int i = 0; i < 16; i++)
	{
		for (int j = 16 - 1; j > i; j--)
		{
			if (arr3[j - 1] > arr3[j])
			{
				int s = arr3[j - 1];
				arr3[j - 1] = arr3[j];
				arr3[j] = s;
			}
		}
	}

	for (int i = 15; 0 <= i; i--)
	{
		printf("arr3[%d]->%d\n",i,arr3[i]);
	}
}


void task2()
{
//2.� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������
	int R[9] = { 0 };
		for (int i = 0; i < 9; i++) 
		{
		R[i] = rand() % 11 - 5;
	    }
		for (int i = 0; i < 9; i++)
		{
			if (R[i] > 0 && R[i] % 2 != 0)
			{
				int max = i;
				for (int j = i + 1; j < 9; j++)
				{
					if (R[j] > 0 && R[j] % 2 != 0 && R[max] < R[j])
					{
						max = j;
					}
				}
				printf("������->%d\n", max);
			}
		}
}


void task3()
{
//3.������ ������, ��������� �� 9 ���������(������ ���������� �����) ������ ����
//�������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������
	int A[9];
	int B[9];
	int sum = 0, i;
	for (i = 0; i < 9; i++)
	{
		A[i] = 10 + rand() % 50;
		sum += A[i] / 10;
		sum += A[i] % 10;
		B[i] = sum;
	}
	for (i = 0; i < 9; i++)
	{
		printf("B[%d]->%d\n", i, B[i]);
	}
}


void task4()
{
//6.���������� ���������� ��������� ���������� � �������� �������� �������
//(��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����).
	int arr[20] = { 0 };
	int max = 0;
	for (size_t i = 0; i < 20; i++)
	{
		arr[i] = 0 + rand() % 2000;
	}

	for (size_t i = 0; i < 20; i++)
	{
if (arr[i - 1] > max &&arr[i + 1] > max)
		{
			max++;
		}
	}
	printf("��������� ����������->%d\n", max);
}


void task5()
{
//8.������ ������, ��������� �� 10 ���������(������ ���������� �����) ������ ����.�������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 10 + rand() % 60;
		arr2[i] = (arr1[i] / 10) - (arr1[i] % 10);
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("arr2[%d]->%d\n", i, arr2[i]);
	}
}


void task6()
{
//10.������ ��� ������� �������������� �����.���������� ������������ �������� � ������ ������� � �������� �� �������
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int max1 = 0, max2 = 0;
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 10 + rand() % 60;
		arr2[i] = 10 + rand() % 60;
		if (arr1[i] > max1 && arr2[i] > max2);
		{
			max1 = arr1[i];
			max2 = arr2[i];
			arr1[i] = max2;
			arr2[i] = max1;
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("arr1[%d]->%d\n", i, arr1[i]);
	}
	printf("----------------------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("arr2[%d]->%d\n", i, arr2[i]);
	}
}

void task7()
{
//4.���� �������������� ����� c1, c2, �, cn.����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������.
	int arr[20] = { 0 };
	int even = 0;
	int odd = 0;
	for (int i = 0; i < 20; i++)
	{
		arr[i] = 0 + rand() % 60;
		if (i % 2 == 0);
		{
			even += arr[i];
		}
		if(i%2!=0)
		{
			odd += arr[i];
		}
	}
	printf("����� ����� ������ ��������->%d\n", even);
	printf("����� ����� � ��������� ���������->%d\n", odd);
}


int main()
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("������� ����� �������->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	default:
		break;
	}
	printf("����� ���������� ������� (1)->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}