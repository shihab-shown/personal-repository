#include <bits/stdc++.h>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
void insertMid(TreeType<int> &bst, int start, int end, int arr[])
{
  if (start > end)
    return;
  int mid = (start + end) / 2;
  bst.InsertItem(arr[mid]);
  insertMid(bst, start, mid - 1, arr);
  insertMid(bst, mid + 1, end, arr);
}

using namespace std;
int main()
{

  // Part 1
  TreeType<int>tree;

  if (tree.IsEmpty())
    cout << "Tree is empty" << endl;
  else
    cout << "Tree is not empty" << endl;

  for (int i = 0; i < 10; i++)
  {
    int x;
    cin >> x;
    tree.InsertItem(x);
  }
  if (tree.IsEmpty())
    cout << "Tree is empty" << endl;
  else
    cout << "Tree is not empty" << endl;
  cout << "Number of nodes: " << tree.LengthIs() << endl;
  int x;
  bool found = false;
  cin >> x;
  tree.RetrieveItem(x, found);
  if (found)
    cout << "Item is found" << endl;
  else
    cout << "Item is not found" << endl;

  cin >> x;
  found = false;
  tree.RetrieveItem(x, found);
  if (found)
    cout << "Item is found" << endl;
  else
    cout << "Item is not found" << endl;
  tree.Print();
  cout << endl;
  tree.ResetTree(PRE_ORDER);
  for (int i = 0; i < tree.LengthIs(); i++)
  {
    tree.GetNextItem(x, PRE_ORDER, found);
    cout << x << " ";
  }
  cout << endl;
  tree.ResetTree(POST_ORDER);
  for (int i = 0; i < tree.LengthIs(); i++)
  {
    tree.GetNextItem(x, POST_ORDER, found);
    cout << x << " ";
  }
  cout << endl;

  // Part 2
  TreeType<int> bst;
  int item;
  bool found = false;
  for (int i = 0; i < 10; i++)
  {
    cin >> item;
    bst.InsertItem(item);
  }
  
  int n = bst.LengthIs();
  cout << "Number of nodes: " << n << endl;
  int arr[n];
  bst.ResetTree(IN_ORDER);
  for (int i = 0; i < n; i++)
  {
    bst.GetNextItem(item, IN_ORDER, found);
    arr[i] = item;
  }
  TreeType<int> bst2;
  insertMid(bst2, 0, n - 1, arr);
  bst2.ResetTree(PRE_ORDER);
  for (int i = 0; i < n; i++)
  {
    bst2.GetNextItem(item, PRE_ORDER, found);
    cout << item << " ";
  }
  return 0;
}