/*#include <iostream>
#include <iomanip>
using namespace std;
int buffer[10][10] = { 2 };
//½����
void turndown(int array[10][10], int y, int x)
{
	int now;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y / 2; j++)
		{
			now = array[j][i];
			array[j][i] = array[y - 1 - j][i];
			array[y - 1 - j][i] = now;
		}
}
//������(�f�ɰw)
void turnleft(int array[10][10], int y, int x)
{
	//x,y�����A�A�W�U�A��
	for (int i = 0; i < y; i++)
		for (int j = 0; j < x; j++)
			buffer[j][i] = array[i][j];
	turndown(buffer, x, y);
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			array[i][j] = buffer[i][j];
}
int main(int argc, char** argv)
{
	int y, x, m;
	cin >> y;
	cin >> x;
	cin >> m;
	int command[10] = { 2 };
	int orgin[10][10];
	//��JB�}�C
	for (int i = 0; i < y; i++)
		for (int j = 0; j < x; j++)
			cin >> orgin[i][j];
	//��J�R�O�}�C
	for (int i = 0; i < m; i++)
		cin >> command[i];
	//�˹L��Ū���R�O�CXDD
	int b;
	for (int i = m - 1; i >= 0; i--)
	{
		switch (command[i])
		{
		case 0:
			turnleft(orgin, y, x);
			b = y;
			y = x;
			x = b;
			break;
		case 1:
			turndown(orgin, y, x);
			break;
		default:
			break;
		}
	}
	cout << y << " " << x << endl;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (j != x - 1)
				cout << orgin[i][j] << " ";
			else
				cout << orgin[i][j];
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}*/