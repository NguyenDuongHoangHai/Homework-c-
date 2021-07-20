#include<iostream>
using namespace std;
int main()
// Đầu tiên nhập số nguyên dương
// ta cho vòng lập a khác không thì cho vòng lập chạy mãi
// Sau đó nếu biến lưu giá trị (a % 10) % 2 là ta sẽ lấy được chữ số nhỏ nhất và số này chia hết cho 2 là số chẳn
// Sau đó ta in giá trị chẳn này ra
// Sau đó giá chị a / 10 để lấy phần nguyên sau để lấy những chứ số chưa in ra màn hình
// Vòng lập tiếp theo sẽ lấy được số nhỏ nhất kế bên
// Điệu kiện kết thúc vòng lập đến khi a/10 ==0 là lấy hết tất cả giá trị
{
	int a = 0;
	do
	{
		cout << " Nhap so nguyen duong: ";
		cin >> a;
	} while (a < 0);
	while (a != 0)
	{
		if ((a % 10) % 2 == 0)
		{
			cout << a % 10 << endl;
		}
		a = a / 10;
	}
}