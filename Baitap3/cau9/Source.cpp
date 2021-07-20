#include<iostream>
using namespace std;
// Đầu tiên kiểm tra giá trị đầu vào
// Nếu nhập giá trị bằng 0 nó sẽ bỏ qua for và làm in ra màn hình giá trị tổng bằng 0
// Nêu giá trị n > = 0 thì sẽ làm vòng lập for với thuật toán như bên dưới
// Sau đó in ra màn hình giá trị 
int main()
{
	int n;
	float tong=0;
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
	} while (n < 0);
	for (int j = 1; j <= n; j++)
	{
		tong = tong + (1 / float(j));
	}
	cout << tong << endl;

	system("pause");
}