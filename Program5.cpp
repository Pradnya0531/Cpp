#include<iostream>
using namespace std;
class Compare
{
	private:
		int iValue1;
		int iValue2;
	public:
		int compareM()
		{
			cout<<"Enter any two values:";
			cin>>iValue1>>iValue2;
			
			if(iValue1>iValue2)
			{
				cout<<iValue1<<" is greater than "<<iValue2;

			}
			else
			{
				cout<<iValue2<<" is greater than "<<iValue1;
			}
		}
};
int main()
{
	Compare obj;
	obj.compareM();
	return 0;	
}
