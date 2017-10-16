#include "Stacknum.cpp"
int main()
{
    int e = -1,g ,t;
    Stacknum a;
    while(e!=0)
    {
        cout<<"For push press 1 , For pop press 2 , For display press 3"<<endl;
        cin>>e;
        switch (e)
        {
        case 1:
            cout<<"enter an integer"<<endl;
            cin>>g;
            a.push(g);
            cout<<g<<" was pushed successfully"<<endl;
            break;
        case 2:
             t = a.pop();
             if(t==-404)//-404 means Stack is empty
                cout<<"Stack is empty"<<endl;
             else
            cout<<t<< " is popped "<<endl;
            break;
        case 3:
            a.display();
            cout<<endl;
            break;
        }

    }

    return 0;
}
