#include "../stdafx.h"
#include "ForDemo.h"


void ForDemo::Initialize()
{
	
}

void ForDemo::Print()
{
	PrintFile;
	
	int count;
	cout << "�ݺ�ȸ�� : ";
	cin >> count;

	int sum = 0;
	for (int i = 1; i <= count; i++)
	{
		sum = sum + i; //sum += i;
		cout << i << "��° �ݺ� ��, ���� �հ��" << sum << endl;
	}

	cout << endl << endl;

}

void ForDemo::Execute()
{
	Initialize();
	Print();
}

