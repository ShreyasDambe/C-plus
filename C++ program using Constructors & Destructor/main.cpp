#include <iostream>

using namespace std;

class Maths                          //class Declaration
{
    private:                            //Access Specifier
        int ino1;                       //Charactericstics
        int ino2;

    public:

        Maths()                          //Default Costructor
        {
            this->ino1=0;
            this->ino2=0;

        }

        Maths(int ivalue1,int ivalue2)       //parameterised Constructor
        {

            this->ino1=ivalue1;
            this->ino2=ivalue2;
        }

        Maths(Maths & ref)                 //copy constructor
        {
            this->ino1=ref.ino1;
            this->ino2=ref.ino2;
        }

        ~Maths()                           //Destructor
        {
            cout<<"Inside Destructor"<<"\n";
        }

        int Add()                     //Behaviour
        {
            int iAns=0;

            iAns=this->ino1 + this->ino2;

            return iAns;
        }

        int sub()                         //Behaviour
        {
            int iAns=0;

            iAns=this->ino1 - this->ino2;

            return iAns;
        }


};



int main()
{
    cout<<"Inside Main"<<"\n";

    Maths obj1;                  //call of Default Constructor
    Maths obj2(20,5);            //call of Parameterised Constructor
    Maths obj3(obj2);            //call of Copy Constructor

    int iRet=0;

    iRet=obj1.Add();                    //Behaviour call
    cout<<"Addition of Two Numbers is:"<<iRet<<"\n";

    iRet=obj2.Add();                    //Behaviour call
    cout<<"Addition of Two Numbers is:"<<iRet<<"\n";

    iRet=obj1.sub();                    //Behaviour call
    cout<<"Substraction of Two Numbers is:"<<iRet<<"\n";

    iRet=obj2.sub();                    //Behaviour call
    cout<<"Substraction of Two Numbers is:"<<iRet<<"\n";

    iRet=obj3.Add();                    //Behaviour call
    cout<<"Addition of Two Numbers is:"<<iRet<<"\n";

  return 0;


}
