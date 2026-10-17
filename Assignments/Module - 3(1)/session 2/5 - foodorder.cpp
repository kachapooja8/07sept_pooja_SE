#include<iostream>
using namespace std;
struct orderdata
{
    int orderid;
    string rename;
    bool isdeliver;
};
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
		
		foodorder(orderdata data)
        {
            orderid = data.orderid;
            rename = data.rename;
            isdeliver= data.isdeliver;
        }
        
        void display()
        {
            cout << "\nOrder ID: " << orderid;
            cout << "\nRestaurant: " << rename;
            cout << "\nDelivered: " << isdeliver;
        }
};
main()
{
	orderdata data = {101, "Pizza", false};

    foodorder fo(data);

    fo.display();
    fo.markdeliver();
}
