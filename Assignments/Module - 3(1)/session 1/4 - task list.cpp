#include<iostream>
using namespace std;
class task
{
	public:
		string title;
		bool isdone;
};
class tasklist
{
	public:
		task tasks[3];
		int n=0;
		
		void addtask(string title)
		{
			tasks[n].title=title;
			tasks[n].isdone=false;
			
			n++;
		}
		
		void donetask(int index)
		{
			tasks[index].isdone=true;
		}
		
		void showtask()
		{
			cout<<"\n--------Task list-------\n";
			
			for(int i=0;i<n;i++)
			{
				cout<<"\nTask:"<<tasks[i].title;
				
				if(tasks[i].isdone==true)
				{
					cout<<"-Done";
				}
				else
				{
					cout<<"-Pending";
				}
			}
			
		}
};

main()
{
	tasklist t;
	
	t.addtask("c++");
	t.addtask("assingment");
	t.addtask("assesment");
	
	t.donetask(0);
	
	t.showtask();
}
