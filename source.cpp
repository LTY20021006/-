#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
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

int main()
{
    int num = 0;;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "*" << j << "=" << i * j<<" ";
        }
        cout << endl;
    }
    return 0;
}

