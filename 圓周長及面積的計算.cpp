#include <iostream>
#define PI 3.1415926
using namespace std;
//const float PI = 3.1415926f
int main(int argc, char** argv)
{
	cout << "�п�J��b�|" << endl;
	float r;
	cin >> r;
	float cir;
	float area;
	cir = 2 * PI * r;
	area = PI * pow(r, 2);
	cout << "���n��" << area << endl;
	cout << "�P��" << cir;
	system("PAUSE");
	return 0;
}