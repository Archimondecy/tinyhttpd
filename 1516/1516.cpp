/*************************************************************************
	> File Name: 1516.cpp
	> Author: chenyu
	> Mail: chenyu9272@yeah.net
	> Created Time: 2015年02月01日 星期日 15时49分19秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
void ArraySwap(int* array, int a, int b) {
    if (array != NULL && a >= 0 && b >= 0) {
        int tmp = array[a];
        array[a] = array[b];
        array[b] = tmp;
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    int jishu = 0;
    int oushu = 0;
    for (int i = 0; i < n; ++i) {
        if ((array[i] % 2) != 0) {
            ArraySwap(array, jishu, i);
            ++jishu;
        } 
    }
    for (int i = 0; i < n; ++i) {
        cout << array[i]<<" ";
    }
    delete[] array;
}

