
#include<stdio.h>

void InsertSort(int* arr, int n)
{
	int i = 0, j = 0;
	for (i = 1; i < n; i++)//第一个循环控制次数
	{
		int temp = arr[i];
		for (j = i - 1; j >= 0; j--)//从左往右找
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}

		}
		arr[j + 1] = temp;//在外部给temp放在合适位置
	}
}

int main() {
	int arr[9] = { 4,3,2,1,6,5,8,7,9 };

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	InsertSort(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
