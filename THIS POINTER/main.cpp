/*#include<iostream>

using namespace std;

class Demo
{
	int iNO1,iNo2;

	public :
			void Show()
			{
				iNO1 = 10;
				iNo2 = 20;

				cout<<"iNo1 = "<<iNo2<<endl;
				cout<<"iNo1 = "<<this->iNO1<<endl;			//Wrting this is not compulsory in this scenario

				cout<<"iNO2 = "<<iNo2<<endl;
				cout<<"iNo2 = "<<this->iNo2<<endl;			//Wrting this is not compulsory in this scenario

				cout<<"Address Of Object :"<<this<<endl;
			}
};
int main()
{
	Demo Obj;

	Obj.Show();

	cout<<&Obj;
}*/







/*#include<iostream>

using namespace std;

class Demo
{
	int iNo1,iNo2;						//Data Members

	public :
			void WithoutThis(int iNo1, int iNo2)				//iNo1 And iNo2 are Local Variables(Formal Parameters)
			{

		/* 	  जेव्हा आपण Parameter चे  नाव आणि class मधील  Characteristics  चे नाव Same देतो  त्यावेळी Compiler Confuse होतो आणि First Priority Local Variables ला 			      	     म्हणजेच Parameters ला देतो ... Line १७ आणि 18 ला आपल्याला क्लास  च्या characteristic iNo1 आणि iNo2 मध्ये  Parameters store करायचे आहेत पण Variables चे
              Names Same असल्यामुळे Compiler First Priority local Variables ला देईल म्हणजेच (Compiler साठी = च्या Right Side चा  Variable आणि  Left Side चा  			  	     Variable हे Parameter च आहेत .आणि ते स्वतःमध्ये च Value Assign करतायत.
		*/

				/*cout<<"***Function : Without this***"<<endl;

				iNo1 = iNo1;								//***In Every Programming local variable gets first priority***
				iNo2 = iNo2;

				cout<<"iNo1 = "<<iNo1<<endl;
				cout<<"iNO2 = "<<iNo2<<endl;

				cout<<"iNo1 = "<<this->iNo1<<endl; 	//  Garbage
				cout<<"iNO2 = "<<this->iNo2<<endl;	//	Garbage      Because Parameters Gets Assign In Own
			}

			void UsingThis(int iNo1, int iNo2)				//iNo1 And iNo2 are Local Variables(Formal Parameters)
			{
				cout<<"***Function : Using this***"<<endl;

				this->iNo1 = iNo1;
				this->iNo2 = iNo2;

				//(*this).iNo1 = iNo1;		//This syntax is also similar to this->iNo1 = iNo1;
				//(*this).iNo2= iNo2;

				cout<<"iNo1 = "<<this->iNo1<<endl;

				cout<<"iNO2 = "<<this->iNo2<<endl;
			}
};
int main()
{
	Demo Obj;

	Obj.WithoutThis(11,7);

	Obj.UsingThis(11,7);


}*/




// In this program note all objects address in Every behavior and try to understand this pointer concept.


#include<iostream>

using namespace std;

class Demo
{
	int iNo1,iNo2;						//Data Members

	public :
				Demo()									//Default Constructor
				{
					this-> iNo1 = 0;
					this-> iNo2 = 0;
				}

				Demo(int iVal1, int iVal2)						//Parameterized Constructor
				{
					this-> iNo1 = iVal1;
					this-> iNo2 = iVal2;

					this-> Addition(iNo1,iNo2);
				}

				void Addition(int iVal1, int iVal2)				//Behaviour
				{
					int iAns = iVal1 + iVal2;

					cout<<"Addition Is :"<<iAns;

					this-> Subtraction(100,50);
				}

				void Subtraction(int iVal1, int iVal2)				//Behaviour
				{
					int iAns = iVal1 - iVal2;

					cout<<"Subtraction Is :"<<iAns;
				}
};
int main()
{
	Demo Obj1;							//(&Obj1); Will Call Default Constructor

	Demo Obj2(20,20);					//(&Obj2,20,20); Will Call Parameterized Constructor

	Obj1.Subtraction(10,10);			//(&Obj1,10,10); Will Call Member Function




}
