#include <iostream>

using namespace std;

class Maths
{

    public:           //Access Specifier
        int iAns;       //characcteristics(variables
                                                                          // Characteristics And Behaviours Are The Members Of Class
        int Addition(int inum1,int inum2)    //Behaviours(Function)
        {
            iAns=inum1 + inum2;

            return iAns;
        }

        int Substraction(int inum1,int inum2)
        {
            iAns=inum1 - inum2;

            return iAns;
        }

         int Multiplication(int inum1,int inum2)
        {
            iAns=inum1 * inum2;

            return iAns;
        }

         int Division(int inum1,int inum2)
        {
            iAns=inum1 / inum2;

            return iAns;
        }



};

int main()
{
    Maths obj;

    int ivalue1=0;
    int ivalue2=0;

    char operationchoice='\0';

    int iResult=0;

    cout<<"Enter The First Value:";
    cin>>ivalue1;

    cout<<"Enter The Second Value:";
    cin>>ivalue2;

    cout<<"Which Operation You Want To Perform (+,-,*,/) : ";
    cin>>operationchoice;

    switch(operationchoice)
    {
        case'+':
            iResult=obj.Addition(ivalue1,ivalue2);                 //function call

            cout<<"Addition of"<<ivalue1<<"And"<<ivalue2<<"is:"<<iResult<<endl;

            break;


        case '-':
            iResult=obj.Substraction(ivalue1,ivalue2);              //function call

            cout<<"Substraction of"<<ivalue1<<"And"<<ivalue2<<"is:"<<iResult<<endl;

            break;


        case '*':
            iResult=obj.Multiplication(ivalue1,ivalue2);              //function call

            cout<<"Multiplication of"<<ivalue1<<"And"<<ivalue2<<"is:"<<iResult<<endl;

            break;


        case'/':
            iResult=obj.Division(ivalue1,ivalue2);              //function call

            cout<<"Division of"<<ivalue1<<"And"<<ivalue2<<"is:"<<iResult<<endl;

            break;

        default:

                cout<<"Invalid Operator"<<endl;

    }

return 0;                        //return state
}
