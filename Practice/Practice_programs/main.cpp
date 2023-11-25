///////////////////////////////////////////////////////////////////////
//                                                                   //
//    WHY WE USE VITRUAL CONCEPT TO ACHIEVE RUN TIME POLYMORPHISM    //
//                                                                   //
///////////////////////////////////////////////////////////////////////
/*#include<iostream>

using namespace std;

class base
{
    public:
        int i;
        int j;

    void fun()
    {
        cout<<"From Base Fun"<<"\n";
    }

    void gun()
    {
        cout<<"From base Gun"<<"\n";
    }
};

class Derived:public base
{
    public :
        int x;

    void fun()
    {
        cout<<"From Derived:Fun"<<"\n";
    }

    void gun()
    {
        cout<<"From Derived:Gun"<<"\n";
    }

};

int main()
{
    base* bp = NULL;                 //pointer type mhanje apan jya class cha pointer banavu to tyacha pointer type zala

    Derived dobj;

    bp->fun();
    bp->gun();

    bp=&dobj;         //bp ha pointer base class cha pointer hota pn apan tyamadhe Derived class cha obj cha mhanjech dobj cha address store lartoy
                      // yacha Artha ata bp madhe derived class cha obj cha address ahe mhanje bp atapasun dobj la point karel

    bp->fun();       //bp dobj la oint karat asla tari pointer type mule to base class madhla fun() call karel ha problem solve karnyasathi apan
    bp->gun();       //virtual hi concept use karto
}*/






///////////////////////////////////////////////////////////////////////
//                                                                   //
//     USE "VITRUAL" CONCEPT TO ACHIEVE RUN TIME POLYMORPHISM        //
//                                                                   //
///////////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

class base
{
    public:
        int i;
        int j;

    void virtual fun()              //1000
    {
        cout<<"From Base Fun"<<"\n";
    }

    void gun()                      //2000
    {
        cout<<"From base Gun"<<"\n";
    }
};

class Derived:public base
{
    public :
        int x;

    void fun()                       //3000
    {
        cout<<"From Derived:Fun"<<"\n";
    }

    void gun()                       //4000
    {
        cout<<"From Derived:Gun"<<"\n";
    }

};

int main()
{
    base* bp = NULL;                 //pointer type mhanje apan jya class cha pointer banavu to tyacha pointer type zala

    Derived dobj;

    bp->fun();
    bp->gun();

    bp=&dobj;         //bp ha pointer base class cha pointer hota pn apan tyamadhe Derived class cha obj cha mhanjech dobj cha address store lartoy
                      // yacha Artha ata bp madhe derived class cha obj cha address ahe mhanje bp atapasun dobj la point karel

    cout<<sizeof (bp);
    cout<<sizeof (dobj);

    bp->fun();       //bp dobj la oint karat asla tari pointer type mule to base class madhla fun() call karel ha problem solve karnyasathi apan
    bp->gun();       //virtual hi concept use karto
}
