#include <bits/stdc++.h>
using namespace std;

class Node
{
  private:
    int data;
    Node *next;
  public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void setNext(Node *next)
    {
        this->next = next;
    }
    Node *getNext()
    {
        return this->next;
    }
    int getData()
    {
        return this->data;
    }
    ~Node()
    {
        delete next;
    }
    
};




int main()
{
  
  return 0;
}