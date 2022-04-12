#include <iostream>
using namespace std;

/*
A,B 입력 받아 A/B 출력
B가 0이면 오류 메세지 출력
함수화 시키기
문자가 들어오면예외처리
*/

double division(const double a, const double b)
{
	return a / b;
}


int main()
{
	double x, y;

	cout << "숫자 2개 입력 >> " << endl;
	cin >> x >> y;

	if (y == 0)
		cout << "0으로 나눌 수 없음" << endl;

	if (cin.fail())
		cout << "문자열 입력 불가" << endl;

	cout << division(x, y) << endl;

	return 0;
}