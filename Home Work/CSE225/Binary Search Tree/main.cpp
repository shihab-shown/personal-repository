#include <bits/stdc++.h>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
// #include "quetype.cpp"
// #include "quetype.h"

using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class ItemType>
void DetermineOrder(TreeType<ItemType>& bst, vector<ItemType>& sequence, int start, int end) {
    if (start > end) {
        return;
    }

    // Find the middle element
    int mid = (start + end) / 2;
    ItemType rootValue = sequence[mid];

    // Insert the middle element as the root of the tree
    bst.InsertItem(rootValue);

    // Recursively build the left and right subtrees
    DetermineOrder(bst, sequence, start, mid - 1);
    DetermineOrder(bst, sequence, mid + 1, end);
}
int main()
{
  fast
  TreeType<int> tree;

  // Part 1

  // if (tree.IsEmpty())
  //   cout << "Tree is empty" << endl;
  // else
  //   cout << "Tree is not empty" << endl;

  // for (int i = 0; i < 10; i++)
  // {
  //   int x;
  //   cin >> x;
  //   tree.InsertItem(x);
  // }
  // if (tree.IsEmpty())
  //   cout << "Tree is empty" << endl;
  // else
  //   cout << "Tree is not empty" << endl;
  // cout << "Number of nodes: " << tree.LengthIs() << endl;
  // int x;
  // bool found = false;
  // cin >> x;
  // tree.RetrieveItem(x, found);
  // if (found)
  //   cout << "Item is found" << endl;
  // else
  //   cout << "Item is not found" << endl;
 
  // cin >> x;
  // found = false;
  // tree.RetrieveItem(x, found);
  // if (found)
  //   cout << "Item is found" << endl;
  // else
  //   cout << "Item is not found" << endl;
  // tree.Print();
  // cout << endl;
  // tree.ResetTree(PRE_ORDER);
  // for (int i = 0; i < tree.LengthIs(); i++)
  // {
  //   tree.GetNextItem(x, PRE_ORDER, found);
  //   cout << x << " ";
  // }
  // cout << endl;
  // tree.ResetTree(POST_ORDER);
  // for (int i = 0; i < tree.LengthIs(); i++)
  // {
  //   tree.GetNextItem(x, POST_ORDER, found);
  //   cout << x << " ";
  // }
  // cout << endl;

  // Part 2
TreeType<int> bst;

    // Input sequence of integers
    vector<int> sequence = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};

    // Sort the sequence in ascending order
    sort(sequence.begin(), sequence.end());

    // Determine the best ordering for the minimum height BST
    DetermineOrder(bst, sequence, 0, sequence.size() - 1);

    // Print the best ordering for the minimum height BST
    cout << "Best ordering for minimum height BST: ";
    // bst.ResetTree(IN_ORDER);
    // bool finished = false;
    // while (!finished) {
    //     int item;
    //     bst.GetNextItem(item, IN_ORDER, finished);
    //     cout << item << " ";
    // }
    bst.Print();
    cout << endl;
 
  return 0;
}