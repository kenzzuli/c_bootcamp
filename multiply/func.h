//#include<iostream>
//using namespace std;
//int main()
//{
//	int n; int r;
//	cout << "please input n:\n";
//	cin >> n;
//	if (n ==0) r = 0;
//	else if (n == 1)r = 1;
//	else if (n == 2) r = 4;
//	else
//	{
//		int t1, t2;
//		t1 = 3;
//		t2 = 2;
//		r = 4;
//		int i;
//		for (i = 2; i < n; i++)
//		{
//			int k;
//			k = r;
//			r = r + t1 + t2;
//			int m;
//			m = t1;
//			t1 = r - k;
//			t2 = t1 - m;
//		}
//		
//	}
//	
//	cout << r << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10000], t1[10000], t2[10000];
//	int n;
//	cin >> n;
//	int i;
//	a[2] = 4;
//	a[1] = 1;
//	t1[1] = 1;
//	for (i = 2; i < n; i++)
//	{
//		
//		t1[i] = a[i] - a[i - 1];
//		t2[i] = t1[i] - t1[i - 1];
//		a[i + 1] = a[i] + t1[i] + t2[i];
//	}
//	cout << a[n] << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}

#include<iostream>
using namespace std;
int ls()
{
	int r_n=4;
	int r_n_minus_1=1;
	int t1_n_minus_1=1;
	int t1_n;
	int t2_n;
	int n;
	cin >> n;
	int i;
	for (i = 2; i < n; i++)
	{
		t1_n = r_n - r_n_minus_1;
		t2_n = t1_n - t1_n_minus_1;
		
		r_n_minus_1 = r_n;
		t1_n_minus_1 = t1_n;
		r_n = r_n + t1_n + t2_n;
		
	}
	cout << r_n << endl;
	cin.get();
	cin.get();
	return 0;
}