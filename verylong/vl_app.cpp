// vl_app.cpp
// ��������� ���������� ������� �����


#pragma warning(disable:4996)  

#include "verylong.h"    //������������ ���� verylong
#include <conio.h>

int main()
{
	setlocale(0, "");
	unsigned long numb, j;
	verylong fact = 1;       //���������������� verylong

	cout << "\n\n������� �����: ";
	cin >> numb;           //���� ����� ���� long int

	for (j = numb; j>0; j--)  //��������� � ��� numb *
		fact = fact * j;     //  numb-1 * numb-2 *
	cout << "���������= "; //  numb-3 � �. �.
	fact.putvl();          //������� �������� ����������
	cout << endl;
	getch();
	return 0;
}

