#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//cout���Ĥ@���m��
	cout << "���e������A�ìO�a�W���C" << endl << "�|�Y�����A�C�Y��G�m�C" << endl;// �A�[�W<<endl �N�i�H�A���U�@��

		//cout+endl+�];�^
	cout << "�����߿����A���F�s�@�]�C" << endl;
	cout << "�ݶ��k�ӵءA���B�L�����C" << endl;
	cout << "����H���^�A�e�n�J�����C" << endl;
	cout << "�Ҷm�����A�S�۹ڿ��r�C" << endl;
	cout << endl;

	//cout+\n+�];�^
	cout << "�����߿����A���F�s�@�]�C\n";
	cout << "�ݶ��k�ӵءA���B�L�����C\n";
	cout << "����H���^�A�e�n�J�����C\n";
	cout << "�Ҷm�����A�S�۹ڿ��r�C\n";
	cout << endl;

	//cout + \n
	cout << "�����߿����A���F�s�@�]�C\n"
		<< "�ݶ��k�ӵءA���B�L�����C\n"
		<< "����H���^�A�e�n�J�����C\n"
		<< "�Ҷm�����A�S�۹ڿ��r�C\n";
	cout << endl;

	//�ŧi�@���ܼƵM���ı�o�ܵL��ҥH�ڭn��L�ﱼ
	int boring = 10; //�ڳo��ڥ����ŧi�@�Uboring�o���ܼƬO10
	cout << "�ڤ@�}�l�]���O=>" << boring;
	cout << endl;
	//IMPROANT!!!�p�G�n�g�ܧ�Ȫ��ܤ���A�]�@��int�A�N�����i�ܼ�=�A�n���Ʀr�j�N�n�F
	boring = 1000;//�M��A������L���ܼƭȧ令1000�]�ܧ�ȡ^
	cout << "�M��ڰ�����L�ק粒���O=>" << boring;
	cout << endl;


	system("pause");
	return 0;
}