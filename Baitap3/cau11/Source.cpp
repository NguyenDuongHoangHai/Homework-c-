#include<iostream>
using namespace std;
// Đầu tiên kiểm tra giá trị đầu vào n với m
// Số ngày = n là số ngày vớ có đã mang , (m/n) số vớ mẹ đã cho , (m/n)/m số vớ mẹ cho thêm tiếp tục được cho tiếp
// Sau đó in ra màn hình giá trị 
int main()
{
	int n=0,m=0,songay=0;
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		cout << "Nhap so nguyen duong: ";
		cin >> m;
	} while (n < 0);
	songay = n + (n / m) + ((n/m)/m);
	cout << songay << endl;
	system("pause");
}