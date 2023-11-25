using namespace std;

#include<iostream>

class base
{

    public:
        int i;
        int j;

    void virtual fun()
    {
        cout<<"From Base Fun"<<"\n";
    }

    void gun()
    {
        cout<<"From Base Gun"<<"\n";
    }

};

class Derived:public base
{
    public :
        int X;

    void fun()
    {
        cout<<"From Derived Fun"<<"\n";
    }

    void gun()
    {
        cout<<"From Derived Gun"<<"\n";
    }

};

int main()
{
    base*bp=NULL;


    Derived dobj;

    bp->fun();
    bp->gun();

    bp=&dobj;




    cout<<sizeof(bp);
    cout<<sizeof(dobj);

      bp->fun();
      bp->gun();



    return 0;
}
