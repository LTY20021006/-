//理论部分
//  C++中要求main函数必须声明为int类型，部分操作系统要求执行完程序后需要一个返回值，正确执行成功后向操作系统返回0，否则返回-1
//  cout/cin在c++中属于输出输入流对象，需要引用iostream文件，文件作用向程序提供输入输出时所需要的信息
//  using namespace std;为使用命名空间std，c++标准库中的类和函数都是在命名空间里声明的，本句表示需要使用到std中的内容
//  endl是c++中的输出控制符，作用是换行表示本行结束
//  c++的构成 预处理指令+全局声明+函数(函数首部，函数体)+声明部分+main函数+类
//  c++的生成：编译->链接->运行
//C++程序设计书中代码总结
#include <iostream>
using namespace std;
//int main()
//{
//	cout << "This is C++ program!" << endl;//屏幕中输出一行This is C++ program!
//	return 0;
//}

//int main()
//{
//	int a, b, sum = 0;//定义数值1，数值2，总和，从键盘输入后计算输出
//	cin >> a >> b;
//	sum = a + b;
//	cout << "a+b=" << sum << endl;
//	return 0;
//}

//int max(int x, int y)//本行作用为定义函数
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//  int max(int a,int b);//本行作用为函数声明
//	int a, b, MAX;//定义a,b,max运用函数求最大值
//	cin >> a >> b;//从键盘输入a,b值，然后调用max函数，传实参a,b进入函数体内进行最大值运算
//	MAX = max(a, b);
//	cout << "max=" << MAX << endl;
//	return 0;
//}


//包含类的c++程序
//class student//定义student类
//{
//private://定义私有变量num,score；
//	int num;
//	int score;
//public://定义公用函数setdata(),display(),作为主函数与类的通信方式
//	void setdata()
//	{
//		cin >> num;
//		cin >> score;
//	}
//	void display()
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//	};
//}; //定义student类型的变量stu1,stu2(stu1，stu2为类的成员称为对象)
//int main()
//{
//	student stu1, stu2;
//	cout << "please enter stu1 data:" << endl;
//	stu1.setdata();//调用对象stu1的setdata函数
//	stu1.display();
//	cout << "please enter stu2 data:" << endl;
//	stu2.setdata();
//	stu2.display();//调用对象stu2的display函数
//	return 0;
//}

