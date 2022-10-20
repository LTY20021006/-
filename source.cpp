#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//int main()//输出数据类型占据字节数
//{
//	cout << sizeof(char) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(float) << endl;
//	cout << sizeof(double) << endl;
//	system("pause");
//	return 0;
//}


//int main()//四舍五入
//{
//    double nums = 0.0;
//    cin >> nums;
//    int nums1 = int(nums);
//    double Jnums = nums - nums1;
//    if (Jnums >= 0.5)
//    {
//        nums1++;
//    }
//    if (Jnums < -0.5)
//    {
//        nums1--;
//    }
//    cout << nums1 << endl;
//    return 0;
//}

//int main()//两数相加
//{
//    int num1 = 0, num2 = 0;
//    cin >> num1 >> num2;
//    cout << num1 + num2 << endl;
//    return 0;
//}

//int main() //最大数
//{
//    int a = 0, b = 0;
//    cin >> a >> b;
//    int max = a > b ? a : b;
//    cout << max << endl;
//    return 0;
//}

//int main() //
//{
//    int a = 0, b = 0;
//    cin >> a >> b;
//    if (a > b)
//        cout << a + b << " " << a - b << " " << a * b << " " << a / b << " " << a % b << endl;
//    if (a < b)
//        cout << b + a << " " << b - a << " " << b * a << " " << b / a << " " << b % a << endl;
//    return 0;
//}

//int main()//交换两数的值
//{
//    int a = 0, b = 0;
//    cin >> a >> b;
//    int tmp = 0;
//    tmp = a;
//    a = b;
//    b = tmp;
//    cout << a << " " << b << endl;
//    return 0;
//}

//int main()//三个数最大值
//{
//    int a = 0, b = 0, c = 0;
//    cin >> a >> b >> c;
//    int max1 = a > b ? a : b;
//    cout << (max1 > c ? max1 : c) << endl;
//    return 0;
//}

//int main()//商品折扣
//{
//    int all_price = 0;
//    cin >> all_price;
//    if (all_price < 100)
//        cout << all_price << endl;
//    if (all_price >= 100 && all_price < 500)
//        cout << (all_price * 0.9) << endl;
//    if (all_price >= 500 && all_price < 2000)
//        cout << (all_price * 0.8) << endl;
//    if (all_price >= 2000 && all_price < 5000)
//        cout << (all_price * 0.7) << endl;
//    if (all_price >= 5000)
//        cout << (all_price * 0.6) << endl;
//    return 0;
//
//}

//int main() //bmi体重指数
//{
//    float weight = 0.0f;
//    float height = 0.0f;
//    cin >> weight;
//    cin >> height;
//    float bmi = weight / (height * height);
//    if (bmi < 18.5)
//        cout << "偏瘦";
//    if (bmi >= 18.5 && bmi < 20.9)
//        cout << "苗条";
//    if (bmi >= 20.9 && bmi <= 24.9)
//        cout << "适中";
//    if (bmi > 24.9)
//        cout << "偏胖";
//    return 0;
//}

//int main()//成绩区间
//{
//    int score = 0;
//    cin >> score;
//    switch (score / 10)
//    {
//    case 0:
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:cout << "差" << endl; break;
//    case 6:cout << "及格" << endl; break;
//    case 7:cout << "中" << endl; break;
//    case 8:cout << "良" << endl; break;
//    case 9:
//    case 10:cout << "优秀" << endl; break;
//    default:cout << "成绩不合法" << endl; break;
//    }
//    return 0;
//}

//int main()//季节区间
//{
//    int month = 0;
//    cin >> month;
//    if (month == 12 || month == 1 || month == 2)
//        cout << "冬季" << endl;
//    if (month >= 3 && month <= 5)
//        cout << "春季" << endl;
//    if (month >= 6 && month <= 8)
//        cout << "夏季" << endl;
//    if (month >= 9 && month <= 11)
//        cout << "秋季" << endl;
//    if (month > 12 || month < 1)
//        cout << "不合法" << endl;
//    return 0;
//}


//int main() //区间内偶数之和//累加1-n的偶数可以直接偶数相加到n
//{
//    int num = 0;
//    int sum = 0;
//    cin >> num;
//    for (int i = 2; i <= num; i += 2)
//    {
//        sum += i;
//    }
//    cout << sum;
//    return 0;
//}

//int main()//某数阶乘
//{
//    int num = 0;
//    long sum = 1;
//    cin >> num;
//    for (int i = 2; i <= num; i++)
//    {
//        sum *= i;
//    }
//    cout << sum;
//    return 0;
//}

//int main()//水仙花数
//{
//    int a, b, c;
//
//    for (int i = 100; i <= 999; i++)
//    {
//        a = i % 10;
//        b = i / 10 % 10;
//        c = i / 100;
//        if (a * a * a + b * b * b + c * c * c == i)
//            cout << i << endl;;
//    }
//    return 0;
//}

//int main()//99乘法表
//{
//    int num = 0;;
//    cin >> num;
//    for (int i = 1; i <= num; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << " * " << i << " = " << i * j << "    ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//int main()//9到9999999999的和
//{
//    long long i = 0;
//    long long sum = 0;
//    for (i = 9; i <= 9999999999; i = i * 10 + 9)
//    {
//        sum += i;
//    }
//    cout << sum << endl;
//    return 0;
//}


////实现选择排序
//void selectionSort(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int minIndex = i;//寻找最小下标
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[minIndex])
//				minIndex = j;//修改最小下标
//		}
//		swap(arr[i], arr[minIndex]);//调用swap函数交换数组元素
//	}
//}
//int main()
//{
//	void selectionSort(int arr[], int n);
//	int arr[] = { 9,5,7,2,7,9,23,21,4,1,0 };
//	int length = sizeof(arr) / sizeof(int);//求数组长度
//	selectionSort(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}



////冒泡排序
//void bubbleSort(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//				swap(arr[i], arr[j]);
//		}
//	}
//}
//int main()
//{
//	void bubbleSort(int arr[], int n);
//	int arr[] = { 9,5,7,2,7,9,23,21,4,1,0 };
//	int length = sizeof(arr) / sizeof(int);
//	bubbleSort(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


////插入排序
//void insertSort(int arr[], int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		int j = i - 1, key = arr[i];
//		while (j >= 0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//int main()
//{
//	void insertSort(int arr[], int n);
//	int arr[] = { 9,5,7,2,7,9,23,21,4,1,0 };
//	int length = sizeof(arr) / sizeof(int);
//	insertSort(arr, length);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


////在数组中找出出现奇数次的数
//int main()
//{
//	int arr[] = { 1,3,2,2,2,4,4,1,3 };//相同数异或得到0，偶数个异或得到的就是0，奇数个异或出来就是这个数
//	int eor = 0;
//	int length = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < length; i++)
//	{
//		eor ^= arr[i];
//	}
//	cout << eor << endl;
//	return 0;
//}


////统计一个数二进制出现多少个1
//int main()
//{
//	int num = 7; 
//	int count = 0;
//	while (num != 0)
//	{
//		int rightOne= num & (~num) + 1;
//		count++;
//		num ^= rightOne;
//	}
//	cout << count << endl;
//	return 0;
//}

