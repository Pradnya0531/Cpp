#include<iostream>
using namespace std;
class Demo1
{
	    public:
		         int imarks;
		         int English;
		         int Mathematics;
		         int science;
		         int i;
	    void Marks()
	    {
		         cout<<"Enter Marks:"<<"\n";
		         cin>>imarks;
				            if(imarks>75)
				            {
					                cout<<"Distinction"<<endl;
				            }
				            else if(35<imarks && imarks<75)
				            {
					                cout<<"First class"<<endl;
				            }
				            else
				            {
					                cout<<"fail"<<endl;
				            }
	    }

	    void Average()
	    {
		          cout<<"Enter marks for three subject to calculate their Average"<<endl;
		          cout<<"English:";
		          cin>>English;
		          cout<<"Mathematics";
		          cin>>Mathematics;
		          cout<<"science";
		          cin>>science;

		          cout<<"Average is"<<(English+Mathematics+science)/3<<endl;

	
	   }
};

class Demo2
{
	    public:
	           Demo2()
	          {
		                cout<<"Inside constructor"<<endl;
	          }
	           Demo2(int i)
	          {
		                cout<<i<<endl;
		                cout<<"Inside parameterised constructor"<<endl;
	          }
	          ~Demo2()
	          {
		                cout<<"Inside Destructor"<<endl;
	          }
};

class Demo3
{
	    public:
		         int imarks;
	         	 int English;
		         int Mathematics;
		         int science;
		         int i;
	
	    void TotalM()
	    {
		         cout<<"Enter marks:";
		         cout<<"English";
		         cin>>English;
		         cout<<"Mathematics";
		         cin>>Mathematics;
		         cout<<"science"<<endl;
		         cin>>science;
		         cout<<"Total Marks:"<<English+Mathematics+science<<endl;
	    }
	    Demo3()
	    {
		        cout<<"Inside constructor"<<endl;
	    }
	    Demo3(int i)
	    {
		        cout<<i<<endl;
		        cout<<"Inside parameterised constructor"<<endl;
	    }
	    ~Demo3()
	    {
		        cout<<"Inside Destructor"<<endl;
	    }

};

int main()
{
	        Demo1 obj1;
	        Demo2 obj2;
	        Demo3 obj3;

	        obj1.Marks();
	        obj1.Average();

	        Demo2 obj4();
	        Demo2 obj5(20);
	
	        obj3.TotalM();
	        Demo3 obj6();
	        Demo3 obj7(30);
return 0;
}
