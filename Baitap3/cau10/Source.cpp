#include<iostream>
using namespace std;
// Đầu tiên kiểm tra giá trị đầu vào
// Sau đó làm vòng lập for với j <= n với thuật toán bên đưới
// Sau đó in ra màn hình giá trị 
int main()
{
	int n;
	float tong = 0;
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
	} while (n < 0);
	for (int j = 0; j <= n; j++)
	{
		tong = tong + (1 / float(2*j +1));
	}
	cout << tong << endl;

	system("pause");
}