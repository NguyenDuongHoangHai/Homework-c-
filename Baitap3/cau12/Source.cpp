#include<iostream>
using namespace std;
// Đầu tiên kiểm tra giá trị đầu vào n với m
// Số ngày = n là số ngày vớ có đã mang , (m/n) số vớ mẹ đã cho , (m/n)/m số vớ mẹ cho thêm tiếp tục được cho tiếp
// Sau đó in ra màn hình giá trị 
int main()
{
	int n = 0,tram=0,ngan=0,trieu=0;
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
	} while (n < 0 and n > 1000000000);
	tram = n % 1000;
	n = n / 1000;
	ngan = n % 1000;
	trieu = n / 1000;
	cout << songay << endl;
	system("pause");
}