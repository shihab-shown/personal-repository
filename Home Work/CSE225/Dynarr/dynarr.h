#ifndef INCLUDED_DYNARR
#define INCLUDED_DYNARR
template <class T>
class dynArr
{ 
public:
    T **data;
    int row, col;
    dynArr(int, int);
    ~dynArr();
    void setValue(int,int, T);
    T getValue(int,int);
};
#endif // INCLUDED_DYNARR
