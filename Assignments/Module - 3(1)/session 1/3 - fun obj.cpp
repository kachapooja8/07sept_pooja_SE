#include<iostream>
using namespace std;
class task
{
	public:
		string title;
		bool isdone;
		
		void getdata()
		{
			cout<<"\nEnter task title:";
			cin>>title;
			
			isdone=false;
		}
		
		void done()
		{
			isdone=true;
		}
		
		void display()
		{
			cout<<"\nTask:"<<title;
			
			if(isdone==true)
			{
				cout<<"\nStatus:DONE\n";
			}
			else
			{
				cout<<"\nStatus:PENDING\n";
			}	
		}
};
main()
{
	task t;
	t.getdata();
	t.display();
	t.done();
	
	cout<<"\nAfter compliting task:\n";
	t.display();
}
