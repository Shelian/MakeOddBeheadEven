#ifndef __MAKEODDBEHEADEVEN_H__
#define __MAKEODDBEHEADEVEN_H__
#include <iostream>
using namespace std;

//分开些，增强代码的可维护性
bool IsEven(int n)
{
	return n & 1 == 0;
}

void MakeOddBeheadEven(int *a,int n)
{
	int left = 0;
	int right = n - 1;
	while (left<right)
	{
		//从左边开始找第一个偶数
		while (left < right &&!IsEven(a[left]))
		{
			left++;
		}

		//从右边开始找第一个奇数
		while (left < right && IsEven(a[right]))
			right--;

		if (left < right)
			swap(a[left], a[right]);
	}
}




#endif //__MAKEODDBEHEADEVEN_H__