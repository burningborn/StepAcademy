#include<iostream>
using namespace std;

/*
���� ������ 'arr' �� 10-�� ���������, ����������� ���������� �������. ����� ������� ��� ��� ������� 'even' � 'odd'
���������� ���������� �������, � ������ 'even' ����� ����������� ��� ������ �������� �� ��������� �������, � � ������
'odd' - ��������. ������� 'even' � 'odd' ������� �� �����.
*/

#define tab "\t";

int FillStatArr(int arr[], const int size);
void PrintStatArr(int arr[], const int size);
void Counter(int* arr, const int size, int& a, int& b);
void Sorter(int* arr, const int size, int* E_Arr, int a, int* O_Arr, int b );


void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	int arr[SIZE] = {};
	int key = 0;

	while (key == 0)
	{
		int n1 = 0;
		int n2 = 0;

		FillStatArr(arr, SIZE);
		PrintStatArr(arr, SIZE);
		cout << endl;
		Counter(arr, SIZE, n1, n2);
		int* EvenArr = new int[n1];
		int* OddArr = new int[n2];
		Sorter(arr, SIZE, EvenArr, n1, OddArr, n2);
		cout << " \n ׸����    : " << n1 << " --> EvenArr = {";
		PrintStatArr(EvenArr, n1);
		cout << "}\n ��������  : " << n2 << " --> OddArr  = {";
		PrintStatArr(OddArr, n2);
		cout << "}\n\n";
		delete[] EvenArr;
		delete[] OddArr;

		cout << " ������ ����������� ������ ������?) - ������� 0 \n ��� ������                         - ������� 1 \n ";
		cin >> key;
		system("cls");
	}
}

int FillStatArr(int arr[], const int size)
{
	cout << "\n ";
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 99;
	}
	return arr[size];
}
void PrintStatArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << arr[i];
		}
		else
		{
			cout << arr[i] << tab;
		}
	}
}
void Counter(int* arr, const int size, int& a, int& b)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			a++;
		}
		else
		{
			b++;
		}
	}
}
void Sorter(int* arr, const int size, int* E_Arr, const int a, int* O_Arr,const int b)
{
	int x = 0;
	int y = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			E_Arr[x] = arr[i];
			x++;
		}
		else
		{
			O_Arr[y] = arr[i];
			y++;
		}
	}
}