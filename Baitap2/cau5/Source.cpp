#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	// nhap du lieu dau vao
	float a, b, c, denta;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	//PT bậc 2
	if (a==0) // PT trở thành bậc 1
	{ 
		if (b != 0)
		{			
			cout << "Ket qua la: " << -c / b;;
		}
		else
		{
			if (c != 0)
			{
				cout << "Vo nghiem";
			}
			else
			{
				cout << "vo so nghiem";
			}
		}
	}
	else
	{
		denta = b * b - 4 * a * c;
		if (denta <0)
		{
			cout << "Vo nghiem";
		}
		else if (denta == 0)
		{
			cout << "co nghiem kep: x1=x2= " << -b / (2*a);
		}
		else
		{
			cout << "co nghiem x1= " << (-b + sqrt(denta)) / (2*a);
			cout << "co nghiem x2= " << (-b - sqrt(denta)) / (2 * a);
		}
	}

}