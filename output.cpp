#include "stdafx.h"

void output(int mid,int last)
{
	int i, j, k, row;
	int order[3] = { 0 };
	order[1] = mid;
	order[2] = last;
	for (i = 0; i < 3; i++)//输出第i个三行
		for (j = 0; j < 3; j++)
		{
			row = print[order[i]][j] + 3 * i;
			for (k = 0; k < 8; k++)
				output_file << numBoard[row][k] << " ";
			output_file << numBoard[row][8]<<endl;
		}
	output_file << endl;
}