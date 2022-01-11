#include "../stdafx.h"
#include "BitDemo.h"

int bin1;
int bin2;

void BitDemo::Initialize()
{
	bin1 = 3; //0011
	bin2 = 10; //1010
}

void BitDemo::Print()
{
	PrintFile;

}

void BitDemo::Execute()
{
	Initialize();
	Print();
}