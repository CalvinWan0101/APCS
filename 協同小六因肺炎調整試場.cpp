//�e�����n
/*
�b�̱��z�o�e�A�Y�մN�w�g���G�p���s�ʹ��窺����Ҹ��X
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
	//p=����Ҹ��X
	int p;
	//oldroom=�¦ҳ��s��,oldnum=�®y��
	int oldroom, oldnum;
	//newroom=�s�ҳ��s��,newroom=�s�y��
	int newroom, newnum;
	//�Ӿǥͬ��ġiact�j�W�ǥ�
	int act;
	int i = 0;
	while (i > -1)
	{
		i++;
		cout << endl;
		cout << "�z����" << i << "��ϥΪ�" << endl;
		cout << "�п�J�z���|�����Ҹ��X" << endl;
		cin >> p;
		oldroom = p / 100;
		oldnum = p % 100;
		act = (oldroom - 1) * 36 + oldnum;
		newnum = act % 24;
		//���G�X�W�L36
		if (oldnum > 36)
		{
			cout << "�y���̰���36�A�Э��s��J�z������Ҹ��X" << endl;
		}
		else if (newnum==0)
		{
			oldroom = p / 100;
			oldnum = p % 100;
			act = (oldroom - 1) * 36 + oldnum;
			newroom = act / 24;
			cout << "�z������Ҹ��X��" << p << endl;
			cout << "�z���s�ҳ����X��" << newroom << "��" << endl;
			cout << "�z���s�y����24��" << endl;
		}
		//��J�W�L4���
		else if (p > 9999)
		{
			cout << "����Ҹ��X��4��A�Э��s��J�z������Ҹ��X" << endl;
		}
		//100<p<9999���`�d��
		else if (p >= 999)
		{
			oldroom = p / 100;
			oldnum = p % 100;
			act = (oldroom-1) * 36 + oldnum;
			newroom = act / 24+1;
			newnum = act % 24;
			cout << "�z������Ҹ��X��" << p << endl;
			cout << "�z���s�ҳ����X��" << newroom << "��" << endl;
			cout << "�z���s�y����" << newnum << "��" << endl;
		}
		//3�X���p��覡�M4�X�ۦP
		else if (p >= 101)
		{
			oldroom = p / 100;
			oldnum = p % 100;
			act = (oldroom - 1) * 36 + oldnum;
			newroom = act / 24 + 1;
			newnum = act % 24;
			cout << "�z������Ҹ��X��" << p << endl;
			cout << "�z���s�ҳ����X��" << newroom << "��" << endl;
			cout << "�z���s�y����" << newnum << "��" << endl;
		}
		//��J�����X����3��ơ]�ܤ֤T��A�p0101���̤p�̡^
		else if (p > 0)
		{
			cout << "����Ҹ��X��4��A�Э��s��J�z������Ҹ��X" << endl;
		}
		//��J�D�Ʀr�����p
		else if (cin.fail())
		{
			cin.clear();
			cin.sync();
			cout << "�Ф��n��J����Ҹ��X�H�~���r��" << endl;
			continue;
		}
		//��J�����t��
		else
		{
			cout << "����Ҹ��X��4�쥿��ơA�п�J���T���X" << endl;
		}
	}
	system("PAUSE");
	return 0;
}
