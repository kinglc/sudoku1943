#include "stdafx.h"

bool check(int pos, int num)//检查（x,y）位置填num是否合理
{
	int i, j, x, y;
	x = pos / 9;
	y = pos % 9;
	for (i = 0; i < 9; i++)
		if ((numBoard[x][i] == num && i != y) || (numBoard[i][y] == num && i != x))
			return false;
	for (i = x / 3 * 3; i < x / 3 * 3 + 3; i++)//搜索3*3格
		for (j = y / 3 * 3; j < y / 3 * 3 + 3; j++)
			if (numBoard[i][j] == num && i != x && j != y)
				return false;
	return true;
}

void workout(int pos)//深搜
{
	if (pos == 81)
	{
		output(0, 0);
		flag = 1;	//标记是否输出过
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
			numBoard[x][y] = i;//填充数字
			cnt[i - 1]++;
			if (check(pos, i))
				workout(pos + 1);
			if (flag)	//该数独已解完
				return;
			cnt[i - 1]--;
			numBoard[x][y] = 0;
		}
	}
	else
		workout(pos + 1);
}