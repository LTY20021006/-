#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//int main()//�����������ռ���ֽ���
//{
//	cout << sizeof(char) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(float) << endl;
//	cout << sizeof(double) << endl;
//	system("pause");
//	return 0;
//}


//int main()//��������
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

//int main()//�������
//{
//    int num1 = 0, num2 = 0;
//    cin >> num1 >> num2;
//    cout << num1 + num2 << endl;
//    return 0;
//}

//int main() //�����
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

//int main()//����������ֵ
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

//int main()//���������ֵ
//{
//    int a = 0, b = 0, c = 0;
//    cin >> a >> b >> c;
//    int max1 = a > b ? a : b;
//    cout << (max1 > c ? max1 : c) << endl;
//    return 0;
//}

//int main()//��Ʒ�ۿ�
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

//int main() //bmi����ָ��
//{
//    float weight = 0.0f;
//    float height = 0.0f;
//    cin >> weight;
//    cin >> height;
//    float bmi = weight / (height * height);
//    if (bmi < 18.5)
//        cout << "ƫ��";
//    if (bmi >= 18.5 && bmi < 20.9)
//        cout << "����";
//    if (bmi >= 20.9 && bmi <= 24.9)
//        cout << "����";
//    if (bmi > 24.9)
//        cout << "ƫ��";
//    return 0;
//}

//int main()//�ɼ�����
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
//    case 5:cout << "��" << endl; break;
//    case 6:cout << "����" << endl; break;
//    case 7:cout << "��" << endl; break;
//    case 8:cout << "��" << endl; break;
//    case 9:
//    case 10:cout << "����" << endl; break;
//    default:cout << "�ɼ����Ϸ�" << endl; break;
//    }
//    return 0;
//}

//int main()//��������
//{
//    int month = 0;
//    cin >> month;
//    if (month == 12 || month == 1 || month == 2)
//        cout << "����" << endl;
//    if (month >= 3 && month <= 5)
//        cout << "����" << endl;
//    if (month >= 6 && month <= 8)
//        cout << "�ļ�" << endl;
//    if (month >= 9 && month <= 11)
//        cout << "�＾" << endl;
//    if (month > 12 || month < 1)
//        cout << "���Ϸ�" << endl;
//    return 0;
//}


//int main() //������ż��֮��//�ۼ�1-n��ż������ֱ��ż����ӵ�n
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

//int main()//ĳ���׳�
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

//int main()//ˮ�ɻ���
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

//int main()//99�˷���
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

//int main()//9��9999999999�ĺ�
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


////ʵ��ѡ������
//void selectionSort(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int minIndex = i;//Ѱ����С�±�
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[minIndex])
//				minIndex = j;//�޸���С�±�
//		}
//		swap(arr[i], arr[minIndex]);//����swap������������Ԫ��
//	}
//}
//int main()
//{
//	void selectionSort(int arr[], int n);
//	int arr[] = { 9,5,7,2,7,9,23,21,4,1,0 };
//	int length = sizeof(arr) / sizeof(int);//�����鳤��
//	selectionSort(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}



////ð������
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


////��������
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


////���������ҳ����������ε���
//int main()
//{
//	int arr[] = { 1,3,2,2,2,4,4,1,3 };//��ͬ�����õ�0��ż�������õ��ľ���0�����������������������
//	int eor = 0;
//	int length = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < length; i++)
//	{
//		eor ^= arr[i];
//	}
//	cout << eor << endl;
//	return 0;
//}


////ͳ��һ���������Ƴ��ֶ��ٸ�1
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


////������������Ѱ�����ֵ����Сֵ
//int main() {
//    int arr[6] = { 0 };
//    int length = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < length; i++)
//    {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = i + 1; j < 6; j++)
//        {
//            if (arr[i] > arr[j])
//                swap(arr[i], arr[j]);
//        }
//    }
//    for (int i = 0; i < 6; i++)
//        cout << arr[i]<<" ";
//    cout << endl;
//    cout << arr[0] << " " << arr[5] << endl;
//    return 0;
//}

//�ж�һ�����Ƿ�������
//int main() {
//    int num = 0;
//    bool isPrime = true;
//    cin >> num;
//    //���һ�����ܱ�2������x֮�������һ������������������
//    for (int i = 2; i <= sqrt(num); i++)//Ϊ���������ж��Ƿ�Ϊ����
//    {
//        if (num % i == 0)
//            isPrime = false;
//    }
//    if (isPrime)//���ò���ֵisprime�ж����
//    {
//        cout << "������" << endl;
//    }
//    else
//    {
//        cout << "��������" << endl;
//    }
//    return 0;
//}

//����С���߹��ľ���ͷ����ܸ߶�
//int main()
//{
//    double high = 0, times = 0;
//    cin >> high >> times;
//    double all_high = 0;
//    for (int i = 1; i <= times; i++)
//    {
//        all_high = all_high + high + high / 2.0;
//        high = high / 2.0;
//    }
//    all_high = all_high - high;
//    printf("%.1f %.1f", all_high, high);
//    return 0;
//}


//�������飬��תԪ��
//int main() {
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < len; i++)
//    {
//        cin >> arr[i];
//    }
//
//    cout << "[";
//        for (int i = 0; i < len; i++)
//        {
//            if (i == len - 1)
//            {
//                cout << arr[i] << "]" << endl;
//                break;
//            }
//            cout << arr[i] << ", ";
//        }
//
//    int left = 0, right = 5;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//
//    cout << "[";
//    for (int i = 0; i < len; i++)
//    {
//        if (i == len - 1)
//        {
//            cout << arr[i] << "]" << endl;
//            break;
//        }
//        cout << arr[i] << ", ";
//    }
//    return 0;
//}


//ð������
//int main() {
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < len; i++)
//    {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = i + 1; j < len; j++)
//        {
//            if (arr[i] > arr[j])
//                swap(arr[i], arr[j]);
//        }
//    }
//    for (int i = 0; i < len; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}


////�ַ�������
//int main() {
//    string s1, s2;
//    getline(cin, s1);//getline������ȡ�ַ���
//    getline(cin, s2);
//    s1 = s1 + s2;//�ַ������
//    cout << s1 << endl;
//}


//�ṹ�����
//struct stu {
//    string name = "0";
//    int age = 0;
//    float heigh = 0.0f;
//};
//int main() {
//    stu st;//�ṹ�����st
//    cin >> st.name >> st.age >> st.heigh;
//    cout << st.name << " " << st.age << " " << st.heigh << endl;
//}


//ָ���������
//int main() {
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < len; i++)
//    {
//        cin >> arr[i];
//    }
//    int* ptr = arr;
//    for (int j = 0; j < len; j++)
//    {
//        cout << *(ptr + j) << " ";//ptr��ȡ����Ԫ��
//    }
//    return 0;
//}

//�ַ�ָ������ַ�������
//int main() {
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int count = 0;
//    char* ptr = str;
//    while (*ptr != '\0')
//    {
//        ptr++;
//        count++;
//    }
//    cout << count << endl;
//    return 0;
//}


//����ָ��λ�õ��ַ���
//int main() {
//    char str[30] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int des = 0;
//    cin >> des;
//
//    char str1[30] = { 0 };
//    int len = 0;
//    while (str[des - 1] != '\0')
//    {
//        str1[len++] = str[des - 1];
//        des++;
//    }
//    str1[len] = '\0';
//    cout << str1 << endl;
//    return 0;
//}



////������̬����
//int main() {
//    int num = 0;
//    cin >> num;
//    int len = num;
//
//    int* ptr = new int[num];//�������ͱ����ռ䣬��СΪnum
//    for (int i = 0; i < num; i++)
//    {
//        ptr[i] = num + i;
//    }
//    for (int i = 0; i < num; i++)
//    {
//        cout << ptr[i] << " ";
//    }
//}


//����ʵ�������е�0ȫ�����ƣ�����˳�򲻱�
//void func(int* p, int n)//˫ָ��
//{
//    int des = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (p[i] != 0)
//        {
//            int tmp = p[i];
//            p[i] = p[des];
//            p[des++] = tmp;
//        }
//    }
//}
//int main() {
//    void func(int* p, int n);
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < 6; i++)
//    {
//        cin >> arr[i];
//    }
//    int* ptr = arr;
//    func(ptr, len);
//    for (int i = 0; i < 6; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}


//�Լ�ʵ��strcmp����
//int mystrcmp(const char* src, const char* dst)
//{
//    int ans = 0;
//    int len1 = strlen(src);
//    int len2 = strlen(dst);
//    int countSRC1 = 0, countDST1 = 0;
//    for (int i = 0; i < len1; i++)
//    {
//        src++;
//        countSRC1++;
//    }
//    for (int j = 0; j < len2; j++)
//    {
//        dst++;
//        countDST1++;
//    }
//    if (countSRC1 > countDST1)
//    {
//        return 1;
//    }
//    if (countSRC1 < countDST1)
//    {
//        return -1;
//    }
//    if (countSRC1 == countDST1)
//    {
//        return 0;
//    }
//}
//int main() {
//    int mystrcmp(const char* src, const char* dst);
//    char str1[100], str2[100];
//    cin.getline(str1, sizeof(str1));
//    cin.getline(str2, sizeof(str2));
//    int ans = mystrcmp(str1, str2);
//    cout << ans << endl;
//    return 0;
//}


