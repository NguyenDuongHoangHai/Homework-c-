#include<iostream>
using namespace std;
// nhập gia tri n (n < 0 thì cho nhập lại)
// neu n chia j bang 0 thì lấy được bội số cho in ra màn hình
int main()
{
	int n = 0;
	do
	{
		cout << "Nhap gia tri n: ";
		cin >> n;
	} while (n < 0);
	for (int j = 1; j <= n; j++)
	{
		if (n % j == 0)
		{
			cout << j << endl;
		}
	}
	system("pause");
	return 0;
}