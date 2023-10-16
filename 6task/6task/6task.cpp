#include "Header.h"

//Задание 1

//void summary(int a)
//{
//	a--;
//	if (a > 0)
//	{
//		sum(a);
//	}
//	cout << a + 1 << " ";
//}
//
//int main()
//{
//	int a = 4;
//	summary(a);
//}

//Задание 2

//int main()
//{
//	static int b = 5;
//	static int a = 1;
//
//	if (b < a)
//	{
//		cout << b;
//		b++;
//		if (b != a)
//		{
//			main();
//		}
//	}
//
//	else if (b > a)
//	{
//		b--;
//		cout << b;
//		if (a < b)
//		{
//			main();
//		}
//	}
//}

//Задание 3

//void low(int a)
//{
//	if (a < 2)
//	{
//		cout << "NO";
//	}
//	if (a == 2)
//	{
//		cout << "YES" << "\n";
//	}
//
//	int b = 0;
//
//	if (a > 2)
//	{
//		b++;
//		low(a / 2);
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	low(a);
//}

//Задание 4

//int Summary(int a)
//{
//    if (a > 0)
//    {
//        return(a % 10) + Summary(a / 10);
//    }
//}
//
//int main()
//{
//    int a = 179;
//    int summary = Summary(a);
//    cout << "Summary: " << summary - 1;
//}

//Задание 5

//void RightToLeft(int a)
//{
//    if (a > 0)
//    {
//        cout << a % 10 << " ";
//        RightToLeft(a / 10);
//    }
//}
//
//int main()
//{
//    int a = 179;
//    RightToLeft(a);
//}

//Задание 6

void LeftToRight(int a)
{
    if (a > 0)
    {
        LeftToRight(a / 10);
        cout << a % 10 << " ";
    }
}

int main()
{
    int a;
    cin >> a;
    LeftToRight(a);
}
