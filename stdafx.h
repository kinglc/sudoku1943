// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//
#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: 在此处引用程序需要的其他头文件
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

extern int numBoard[9][9];
extern int testnum;
extern int print[6][3];
extern int cnt[9];
extern int flag;
extern ofstream output_file;
void output(int mid,int last);
void createFinal();
void workout(int pos);