#include<iostream>
using namespace std;
class playlist
{
	public:
		void getdata()
		{
			string plname="My songs";
			string date="13-10-2026";
			bool ispublic=true;
	
			cout<<"Playlist name:"<<plname;
			cout<<"\nCreated on:"<<date;
			cout<<"\nIsplublic:"<<boolalpha<<ispublic;
		}
};
main()
{
	playlist pl;
	pl.getdata();
}
