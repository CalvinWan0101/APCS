<iostream>
using namespace std;
int main(int argc, char** argv)
{
	char x;
	cout << "�߲z����" << endl;
	cout << "�ڥi�H�q��A�̳��w����r���@" << endl;
	cout << "��@�ӧA�̳��w���r�����U�h�M�ᤣ�n�i�D��" << endl;
	cin >> x;
	cout << "�A�ܳ��w" << x << "�藍��A�n�էڴN�O¾�~��R�v,���p�ڦA���A��@��BMI?";
	cout << endl;
	cout << "�Ф��O��J�A�������魫�åH�Ů欰���j�A�p����1.8�����魫60����h1.8 60" << endl;
	float high;
	float weight;
	cin >> high >> weight;
	double H = pow(high, 2);
	double BMI = weight / H;
	if (BMI >= 27)
	{
		cout << "�A��BMI�O" << BMI << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
		cout << "�A�n�D" << endl;
	}
	else if (BMI >= 24)
	{
		cout << "�A��BMI�O" << BMI << "�~��O���@" << endl;
	}
	else { cout << "�A��BMI�O" << BMI << "�h�h�Y�@�I�աA�o�˷|�Q���j��" << endl; }
	cout << "���ɭԧڳ��تA������ۤv�i�H��o������" << endl;
	cout << "�n�լJ�M�ں�o�����A�ȩx�i�_���I�p�O�r" << endl;
	system("PAUSE");
	return 0;
}