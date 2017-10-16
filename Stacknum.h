#ifndef Stacknum_H
#define Stacknum_H
#include <iostream>
using namespace std;
const int Max =100;
class Stacknum
{

public:

    Stacknum();
    void display();
    void push (int );
    int pop ();
    bool isStacknumFull();
    bool isStacknumEmpty();
private:
    int elements [Max] ;
    int top;
};

#endif // Stacknum_H
