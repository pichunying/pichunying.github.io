#include"stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int min(int x, int y)
{
	return (x > y ? y : x);
}
int min(int x, int y, int z)
{
	if (x < y&&x < z)
		return x;
	else if (y < z)
		return y;
	else
		return z;
}
int main()
{
	cout << min(2, 6, 4);
	cout << min(3.4, 9.8);
	cout << min(2, 5);

	return 0;
}
//查找姓名

//#include"stdafx.h"
//#include<iostream>
//#include<cstring>
//using namespace std;
//int search(char(*p)[31], int n, char* name);
//const int n = 10;
//int main()
//{
//	char a[n][31] = { "guoli","liqi","majing","sunli","wangle","wuda","yangke","zhzangfu","wangfang","sunmiao" };
//	char name[31];
//	cin >> name;
//	int idx = search(a, n, name);
//	if (idx == -1)
//		cout << "Cannot find the name." << endl;
//	else
//		cout << idx;
//	return 0;
//}
//int search(char(*p)[31], int n, char* name)
//{
//	int i;
//	for (i=0; i < n; i++)
//	{
//		if (strcmp(p[i], name) == 0)
//			return i;
//	}
//	if (i == 10);
//	return -1;
//}

//构造函数初始化

//#include "stdafx.h"
//#include<iostream>
//using namespace std;
//class str
//{
//	char *p;
//	int n;
//public:
//	str(char*s, int x);
//	void print();
//};
//str::str(char *s, int X) :n(X),p(s) {
//}
//void str::print()
//{
//	cout << n << endl;
//	cout << p << endl;
//}
//int main()
//{
//	int x;
//	char a[20];
//	cin >> x;
//	cin >> a;
//	str s(a, x);
//	s.print();
//	return 0;
//}

//调用构造器

//#include"stdafx.h"
//#include<iostream>
//using namespace std;
//class point
//{
//	int n;
//public:
//	point(point&p1);
//	point(int i);
//	void print() 
//	{
//		cout << n << endl;
//	}
//};
//point::point(point&p1)
//{
//	cout << "*******" << endl;
//	n = p1.n;
//}
//point::point(int i)
//{
//	n = i;
//}
//int main()
//{
//	point p2(4);
//	point p0(p2);
//	p0.print();
//	point p=p0;
//	p.print();
//	return 0;
//}

//#include"stdafx.h"
//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	char buf[] = "hello@boy@this@is@heima";
//	char*temp = strtok(buf, "@");
//	while (temp)
//	{
//		cout<<temp<<' ';
//		temp = strtok(NULL, "@");
//	}
//	return 0;
//}