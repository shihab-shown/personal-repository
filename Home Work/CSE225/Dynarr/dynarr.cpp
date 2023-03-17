#include <bits/stdc++.h>
#include "dynarr.h"
using namespace std;

template <class T>
dynArr<T>::dynArr(int i, int j)
{
    data = new T*[i];
    for (int k = 0; k < i; k++)
        data[k] = new T[j];
    row = i;
    col = j;
}

template <class T>
dynArr<T>::~dynArr()
{
    for (int i = 0; i < row; i++)
        delete [] data[i];
    delete [] data;
}
template <class T>
void dynArr<T>::setValue(int i,int j, T value)
{
    data[i][j] = value;
}
template <class T>
T dynArr<T>::getValue(int i,int j)
{
    return data[i][j];
}
