#include "Stacknum.h"
Stacknum::Stacknum()
{
    top=-1;
    elements[Max];
}
void Stacknum ::push(int e)
{
    if(!isStacknumFull())
    {
        top++;
        elements[top]=e;
    }
}
int Stacknum ::pop()
{
    int x;
    if(!isStacknumEmpty())
{
           x = elements[top--];
           return x;
}

            return -404; //if -404 is returned Stack is empty
}

bool Stacknum::isStacknumFull()
{
    if (top==Max-1)
        return true;
        else
        return false;
}
bool Stacknum::isStacknumEmpty()
{
    if (top==-1)
        return true;
        else
        return false;
}
void Stacknum ::display()
{
for (int i=top ; i>=0 ; i--)
        cout<<elements [i]<<" ";

}
