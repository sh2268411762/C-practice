//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//
//int main()
//{
//	int i(0);
//	cout << "*********" << endl;
//	for (i = 0; i < 7; i++)
//	{
//		cout << "*       *" << endl;
//	}
//	cout << "*********" << endl;
//
//	cout << "\n\n" << endl;
//	cout << "   ***\n" << " *     *" << endl;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "*       *" << endl;
//	}
//	cout << " *     *\n" << "   ***" << endl;
//
//	cout << "\n\n" << endl;
//	int j(0);
//	int k(0);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			cout << " ";
//		}
//		for (k = 0; k < 2 * (i + 1) - 1; k++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			cout << " ";
//		}
//		cout << "*" << endl;
//	}
//
//	cout << "\n\n" << endl;
//	int m(4);
//	int n(1);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			cout << " ";
//		}
//		m--;
//		//cout << "*" << endl;
//		//for (k = 0; k < 2 * (i + 1) - 1; k++)
//		//{
//		//	cout << "*";
//		//	break;
//		//}
//		cout << "*";
//		if (i != 0)
//		{
//			for (j = 0; j < n; j++)
//			{
//				cout << " ";
//			}
//			n += 2;
//			cout << "*";
//		}
//		cout << endl;
//	}
//	m = 1;
//	n = 5;
//	for (i = 4; i > 0; i--)
//	{
//		for (j = 0; j < m; j++)
//		{
//			cout << " ";
//		}
//		m++;
//		cout << "*";
//		for (j = 0; j < n; j++)
//		{
//			cout << " ";
//		}
//		n -= 2;
//		if (i > 1)
//		{
//			cout << "*" << endl;
//		}
//	}
//	return EXIT_SUCCESS;
//}