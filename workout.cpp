#include "stdafx.h"

bool check(int pos, int num)//��飨x,y��λ����num�Ƿ����
{
	int i, j, x, y;
	x = pos / 9;
	y = pos % 9;
	for (i = 0; i < 9; i++)
		if ((numBoard[x][i] == num && i != y) || (numBoard[i][y] == num && i != x))
			return false;
	for (i = x / 3 * 3; i < x / 3 * 3 + 3; i++)//����3*3��
		for (j = y / 3 * 3; j < y / 3 * 3 + 3; j++)
			if (numBoard[i][j] == num && i != x && j != y)
				return false;
	return true;
}

void workout(int pos)//����
{
	if (pos == 81)
	{
		output(0, 0);
		flag = 1;	//����Ƿ������
		return;
	}
	int i, x, y;
	x = pos / 9;
	y = pos % 9;
	if (!numBoard[x][y])
	{
		for (i = 1; i <= 9; i++)
		{
			if (cnt[i - 1] == 9)
				continue;
			numBoard[x][y] = i;//�������
			cnt[i - 1]++;
			if (check(pos, i))
				workout(pos + 1);
			if (flag)	//�������ѽ���
				return;
			cnt[i - 1]--;
			numBoard[x][y] = 0;
		}
	}
	else
		workout(pos + 1);
}