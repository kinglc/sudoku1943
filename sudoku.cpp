// sudoku.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main(int   argc, char*   argv[])
{
	int i, j;
	ifstream input_file;
	output_file.open("./BIN/sudoku.txt");
	if (argv[1][0]=='-'&&argv[1][1] == 's')
	{
		input_file.open(argv[2]);
		i = 0;
		j = 0;
		while (!input_file.eof())
		{
			input_file >> numBoard[i][j];
			if (numBoard[i][j])
				cnt[numBoard[i][j] - 1]++;
			j++;
			if (j == 9)
			{
				j = 0;
				i++;
			}
			if (i == 9)
			{
				workout(0);//从0开始深搜
				flag = 0;
				memset(cnt, 0, sizeof(cnt));
				i = 0;
			}
		}
	}
	else if (argv[1][0] == '-'&&argv[1][1] == 'c')
	{
		testnum = atoi(argv[2]);//char* 转 int
		if(!testnum)
			cout << "输入错误，请重新输入" << endl;
		else 
			createFinal();
	}
	else
		cout << "输入错误，请重新输入" << endl;
	output_file.close();
	return 0;
}
