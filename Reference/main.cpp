/*#include <iostream>

using namespace std;

int main()
{
    int ivalue1=21;

    int *iptr = &ivalue1;

    int &ref =ivalue1;

    cout<<"ivalue1="<<ivalue1<<"\n";

    cout<<"iptr points to ="<<*iptr<<"\n";

    cout<<"Ref ="<<"\n";


}*/


/*#include<iostream>

using namespace std;

int Sum();

int main()
{
   // int A,B,C;

     Sum();
}

int Sum()
{
    int A,B,C;

    cout<<"\n Enter Two Numbers:";

    cin>>A>>B;

    C=A+B;

    cout<<"\n Sum ="<<C;
}*/

//Function with No Argument and No Return Value
/*#include<iostream>

using namespace std;

class ABC
{
    public:
        int A,B,C;

    int Sum()
    {
        cout<<"\n Enter a First Number:";
        cin>>A;

        cout<<"\n Enter a Second Number:";
        cin>>B;

        C=A+B;

        cout<<"\n Sum = "<<C;
    }

};

int main()
{
    ABC obj;

    obj.Sum();


}*/


//Function with Argument and No Return Value
/*#include<iostream>

using namespace std;

class ABC
{
    public:
        int A,B,C;

    int Sum(int A,int B)
    {
        cout<<"\n Enter a First Number:";
        cin>>A;

        cout<<"\n Enter a Second Number:";
        cin>>B;

        C=A+B;

        cout<<"\n Sum = "<<C;
    }

};

int main()
{
    ABC obj;

    int inum1=0;
    int inum2=0;

    obj.Sum(inum1,inum2);


}*/



//Function with Argument and Return Value
/*#include<iostream>

using namespace std;

class ABC
{
    public:
        int A,B,C;

    int Sum(int A,int B)
    {
        cout<<"\n Enter a First Number:";
        cin>>A;

        cout<<"\n Enter a Second Number:";
        cin>>B;

        C=A+B;

        return C;
    }

};

int main()
{
    ABC obj;

    int inum1=0;
    int inum2=0;
    int iResult;

    iResult = obj.Sum(inum1,inum2);

    cout<<"\n Sum ="<<iResult;
}*/



//Function with No Argument and Return Value

/*#include<iostream>

using namespace std;

class ABC
{
    public:
        int A,B,C;

    int Sum()
    {
        cout<<"\n Enter a First Number:";
        cin>>A;

        cout<<"\n Enter a Second Number:";
        cin>>B;

        C=A+B;

        return C;
    }

};

int main()
{
    ABC obj;

    int iResult;

    iResult = obj.Sum();

    cout<<"\n Sum ="<<iResult;
}


*/



