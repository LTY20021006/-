#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����������ң��������飬�������ֵ�����巵��ֵ�����庯�����������飬����ֵ�������С
//���ֲ��ң���ֵ����ֵ���м�ֵ��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { "1, 2, 3, 4, 5, 6, 7, 8, 9, 10" };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("zbd\n");
//	}
//	else
//	{
//		printf("zdl:%d\n",ret);
//	}
//}���ֲ���

//int main()
//{
//	int a, s = 0;
//	scanf("%d", &a);
//	do
//	{
//		s += a;
//		a++;
//	} while (a <= 10);
//	printf("s=%d", s);
//}


//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%4d\n", i*j);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int len = 5;
//	char num;
//	scanf("%c", &num);
//	for (int i = 0; i<len; i++)//��ʾ���У�ִ�����
//	{
//		for (int j = len - 1; j>i; j--)//����ո��һ���ĸ����ڶ����������������������ڶ���һ������һ�����
//		{
//			printf(" ");
//		}
//		for (int n = 0; n <= i; n++)//��ʾ1����һ��һ�����ڶ����������������������������ĸ������������
//		{
//			printf("%c", &num);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		printf("%d %d", a%b, a / b);
	}
	return 0;
}