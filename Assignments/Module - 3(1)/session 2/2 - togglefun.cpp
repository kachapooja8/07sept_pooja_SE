#include<iostream>
using namespace std;

class playlist
{
	
	public:
		bool ispublic=true;
		void getdata()
		{
			string plname="My songs";
			string date="13-10-2026";
			
			cout<<"Playlist name:"<<plname;
			cout<<"\nCreated on:"<<date;
			cout<<"\nIsplublic:"<<boolalpha<<ispublic;
		}
		void togglepublic()
		{
			ispublic = !ispublic;
		}
};
main()
{
	playlist pl;
	pl.getdata();
	pl.togglepublic();
    cout<<"\n\nAfter first toggle:"<< pl.ispublic;

    pl.togglepublic();
    cout<<"\nAfter second toggle:"<< pl.ispublic;

}
