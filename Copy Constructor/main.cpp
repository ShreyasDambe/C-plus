#include <iostream>

using namespace std;

class Demo
{
    public:
        int ino1;
        int ino2;

        //void fun(Demo *const this ,int x)

        void fun(int x)
        {
            //logic;
        }

        //void gun(Demo *const this ,int a, int b)

        void gun(int a,int b)
        {
            //logic;
        }
};

int main()
{
    Demo obj1;                          //100

    obj1.fun(11);                    //fun(&obj1,11)
    obj1.gun(50,60);                  //gun(&obj2,50,60)

    Demo obj2;                           //200

    obj2.fun(20);                      //fun(&obj2,20)
    obj2.gun(30,40);                   //gun(&obj2,30,40)

    return 0;
}
