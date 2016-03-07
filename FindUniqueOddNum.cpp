#include "stdafx.h"
#include "FindUniqueOddNum.h"
#include <iostream>


int findUniqueOddNum(vector<int> & nums)
{
	int res = 0;
	for (int num : nums)
	{
		res = res^num;
	}
	if (res == 0)
	{
		cout << "Do not find the num which occurs odd times!" << endl;
		return (int)0x80000000;//�����������ʾû�ҵ����������ε���
	}
	else
	{
		return res;
	}
}