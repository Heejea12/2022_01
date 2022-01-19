#include "../stdafx.h"
#include "WhileDemo.h"


void WhileDemo::Initialize()
{
	
}

void WhileDemo::Print()
{
	PrintFile;
	
	int count;
	cout << "반복회수 : ";
	cin >> count;

	int sum = 0;
	for (int i = 1; i <= count; i++)
	{
		sum = sum + i; //sum += i;
		cout << i << "번째 반복 중, 누적 합계는" << sum << endl;
	}

	cout << endl << endl;

}

void WhileDemo::Execute()
{
	Initialize();
	Print();
}

