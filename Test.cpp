#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter rows: ";
    int rows;
    cin>>rows;
    int** arr;
    arr = new int*[rows];
    int* col=NULL;
    col = new int[rows];
    for(int i=0;i<rows;i++)
    {
        cout<<"Enter size of row no."<<(i+1)<<" :";
        cin>>col[i];
    }
    for(int i=0;i<rows;i++)
    {
        arr[i] = new int[col[i]];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

}