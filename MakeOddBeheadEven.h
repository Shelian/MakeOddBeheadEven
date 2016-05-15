#ifndef __MAKEODDBEHEADEVEN_H__
#define __MAKEODDBEHEADEVEN_H__
#include <iostream>
using namespace std;

//�ֿ�Щ����ǿ����Ŀ�ά����
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
		//����߿�ʼ�ҵ�һ��ż��
		while (left < right &&!IsEven(a[left]))
		{
			left++;
		}

		//���ұ߿�ʼ�ҵ�һ������
		while (left < right && IsEven(a[right]))
			right--;

		if (left < right)
			swap(a[left], a[right]);
	}
}




#endif //__MAKEODDBEHEADEVEN_H__