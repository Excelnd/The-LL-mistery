// The LL mistery solution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int makePallindrome(string &str) {
	int size = str.size(), count = 0;
	int i = size / 2 - 1;
	int j;
	if (size % 2 == 0) j = size / 2;
	else j = i + 1;
	for(; i>=0 && j < size; i--, j++)
		count += abs(str[j] - str[i]);
	return count;
}

int main()
{
	int T;
	string str;
	cin >> T;
	while (T--) {
		cin >> str;
		cout << makePallindrome(str);
	}

    return 0;
}

