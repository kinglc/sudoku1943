// stdafx.cpp : 只包括标准包含文件的源文件
// sudoku.pch 将作为预编译标头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"

// TODO: 在 STDAFX.H 中引用任何所需的附加头文件，
//而不是在此文件中引用
int numBoard[9][9], testnum, print[6][3] = { 0,1,2,0,2,1,1,2,0,1,0,2,2,1,0,2,0,1 }, cnt[9], flag;//print代表输出顺序，cnt计数
ofstream output_file;