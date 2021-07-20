#include<iostream>
using namespace std;
// nhập gia tri n (n < 0 thì cho nhập lại)
// neu j chia 2 bang 0 thì lấy được số chẳn cho in ra màn hình
int main()
{
	int n = 0;
	do
	{
		cout << "Nhap gia tri n: ";
		cin >> n;
	} while (n < 0);
	for (int j = 0; j <= n; j++)
	{
		if (j % 2 == 0)
		{
			cout << j << endl;
		}
	}
	system("pause");
	return 0;
}