#include "dynArr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
  data = NULL;
  size = 0;
}
// dynArr::dynArr(int s)
// {
//   data = new int[s];
//   size = s;
// }

dynArr::dynArr(int row, int col)
{
  data = new int *[row];
  for (int i = 0; i < row; i++)
  {
    data[i] = new int[col];
  }
  size = row;
}

dynArr::~dynArr()
{
  delete [] data;
}
int dynArr::getValue(int rowIndex, int colIndex)
{
  return data[rowIndex][colIndex];
}
void dynArr::setValue(int rowIndex, int colIndex, int value)
{
  data[rowIndex][colIndex] = value;
}
// void dynArr::allocate(int s)
// {
//   delete [] data;
//   data = new int[s];
//   size = s;
// }