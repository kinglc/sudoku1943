#include "stdafx.h"

void createFinal()
{
	int tmp[9] = { 8,9,1,2,3,4,5,6,7 };//tmp��ʾ��һ������
	int i, j, k, moveleft[8] = { 3,6,1,4,7,2,5,8 };	//moveleft��ʾ2-9���ڵ�1�л�������������λ��
	for (i = 0; i < 40320; i++)	//8!=40320
	{
		memcpy(numBoard[0], tmp, sizeof(tmp));
		//����1����������2-9��
		for (j = 0; j < 8; j++)
			for (k = 0; k < 9; k++)
				numBoard[j + 1][k] = numBoard[0][(k + moveleft[j]) % 9];//��ʼͼ���
		//����4-6��7-9��
		for (j = 0; j < 6; j++)
			for (k = 0; k < 6; k++)
			{
				output(j, k);
				if (!--testnum)
					return;
			}
		next_permutation(tmp + 1, tmp + 9);//���õ�һ��
	}
	return;
}