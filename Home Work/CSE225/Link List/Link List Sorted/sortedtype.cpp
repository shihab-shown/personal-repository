#include "sortedtype.h"
#include <iostream>
using namespace std;
template <class ItemType>
SortedType<ItemType>::SortedType()
{
  listData = NULL;
  length = 0;
  currentPos = NULL;
}
template <class ItemType>
SortedType<ItemType>::~SortedType()
{
  MakeEmpty();
}
template <class ItemType>
bool SortedType<ItemType>::IsFull()
{
  NodeType *location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch (bad_alloc exception)
  {
    return true;
  }
}
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
  return length;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
  NodeType *tempPtr;
  while (listData != NULL)
  {
    tempPtr = listData;
    listData = listData->next;
    delete tempPtr;
  }
  length = 0;
}
template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
  // Insert item into listData in ascending order of ItemType and don't allow duplicates
  NodeType *location = listData;
  NodeType *newNode;
  NodeType *tempLocation;
  newNode = new NodeType;
  newNode->info = item;
  newNode->next = NULL;
  if (listData == NULL)
  {
    listData = newNode;
  }
  else if (item < listData->info)
  {
    newNode->next = listData;
    listData = newNode;
  }
  else if (item == listData->info)
  {
    return;
  }
  
  else
  {
    while (location->next != NULL && item > (location->next)->info)
    {
      location = location->next;
    }
    if (location->next != NULL && item == (location->next)->info)
    {
      return;
    }
    tempLocation = location->next;
    location->next = newNode;
    newNode->next = tempLocation;
  }
  length++;
}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
  NodeType *location = listData;
  NodeType *tempLocation;
  if (item == listData->info)
  {
    tempLocation = location;
    listData = listData->next;
  }
  else
  {
    while (!(item == (location->next)->info))
    {
      location = location->next;
    }
    tempLocation = location->next;
    location->next = (location->next)->next;
  }
  delete tempLocation;
  length--;
}
template <class ItemType>
void SortedType<ItemType>::ResetList()
{
  currentPos = NULL;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType &item)
{
  if (currentPos == NULL)
  {
    currentPos = listData;
  }
  else
  {
    currentPos = currentPos->next;
  }
  item = currentPos->info;
}
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found)
{
  NodeType *location = listData;
  int first = 0;
  int last = length - 1;
  int mid;
  bool moreToSearch = (first <= last);
  found = false;
  if (listData == NULL)
  {
    return;
  }
  while(moreToSearch && !found)
  {
    mid = (first + last) / 2;
    for (int i = 0; i < mid; i++)
    {
      location = location->next;
    }
    if (item < location->info)
    {
      last = mid - 1;
      moreToSearch = (first <= last);
    }
    else if (item > location->info)
    {
      first = mid + 1;
      moreToSearch = (first <= last);
    }
    else
    {
      found = true;
      item = location->info;
    }
    location = listData;
  }
}

