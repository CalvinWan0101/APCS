//�e�����n
/*
�b�̱��z�o�e�A��P���ǴN�w�g���G�p���s�ʹ��窺����Ҹ��X
����Ҹ��X��4�X
�p1233�h�N�� 12���ҳ� �y��33
�p0132�h�N��   1���ҳ� �y��32
�쥻�@���ҳ��w��36�H�A���ѩ�̱����t�G�A�@���ҳ��u��w��24�H
���O����Ҹ��X�w�g���G
�p��̾a��J����Ҹ��X�H�o���s���ҳ��H�ήy���H
*/
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "�п�J�z������Ҹ��X" << endl;
	int id;
	int oldroom;
	int oldnum;
	int act;
	int newroom;
	int newnumber;
	cin >> id;
	oldroom = id / 100;
	oldnum = id - oldroom * 100;
	act = oldroom * 36 + oldnum;
	newroom = act / 24;
	newnumber = act % 24;
	cout << "�z���ճ���" << newroom << "���ճ��A�z���y����" << newnumber << "��" << endl;
	system("PAUSE");
	return 0;
}