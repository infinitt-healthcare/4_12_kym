#include <iostream>
using namespace std;

/*
A,B �Է� �޾� A/B ���
B�� 0�̸� ���� �޼��� ���
�Լ�ȭ ��Ű��
���ڰ� �����鿹��ó��
*/

double division(const double a, const double b)
{
	return a / b;
}


int main()
{
	double x, y;

	cout << "���� 2�� �Է� >> " << endl;
	cin >> x >> y;

	if (y == 0)
		cout << "0���� ���� �� ����" << endl;

	if (cin.fail())
		cout << "���ڿ� �Է� �Ұ�" << endl;

	cout << division(x, y) << endl;

	return 0;
}