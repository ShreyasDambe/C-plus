#include <iostream>

using namespace std;

int main()
{
    int ivalue1=21;

    int *iptr=&ivalue1;

    int &ref=ivalue1;

    cout<<"ivalue1="<<ivalue1<<"\n";

    cout<<"iptr points to="<<*iptr<<"\n";

    cout<<"ref="<<"\n";

}
