#include<iostream>
using namespace std;
class foodorder
{
	public:
		int orderid;
		string rename;
		bool isdeliver;
		
		void markdeliver()
		{
			isdeliver=true;
			cout<<"\nOrder is deliver succesfully";
		}
};
main()
{
	foodorder fo;
	fo.orderid=101;
	fo.rename="pizza";
	fo.isdeliver=false;
	
	fo.markdeliver();
}
