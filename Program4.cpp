#include<iostream>
using namespace std;
class FlightBooking
{
	private:

		int Flight_No=0;
		string Destination="\0";
		float Fuel=0.0;
		float Distance=0.0; 
	
		void CALFUEL()
		{
			if(Distance <= 1000)
				{
					Fuel=500;
				}
			else if(Distance > 1000 && Distance <=2000)
				{
					Fuel=1100;
				}
			else
				{
					Fuel=2200;
				}
		
		}
		
	public:
		
		int FEEDINFO()
		{
			
			cout<<"****************************Please Fill the details****************"<<endl;
			cout<<"Enter Flight No:";
			cin>>Flight_No;
			cout<<"Destination:";
			cin>>Destination;
			cout<<"Distance:";
			cin>>Distance;
			CALFUEL();
		       
		}

		
		
		int SHOWINFO()
		{
			cout<<"*******************************Details*****************************"<<endl;
			cout<<"Flight_No:"<<Flight_No<<endl;
			cout<<"Destination:"<<Destination<<endl;
			cout<<"Distance:"<<Distance<<endl;
			cout<<"Required Fuel:"<<Fuel<<endl;
		}
};
int main()
{
	FlightBooking obj1;
	obj1.FEEDINFO();
	obj1.SHOWINFO();
	return 0;
}
