#include<iostream>
using namespace std;
// nhập gia tri n (n < 0 thì cho nhập lại)
// sau đó làm với thuật toán bên dưới
int main()
{
	int n, s = 1;
	do
	{
		cout << "Nhap gia tri n: ";
		cin >> n;
	} while (n < 0);
	for (int j = 1; j <= n; j++)
	{
		s = s * j;
	}
	cout << s << endl;
	system("pause");
}