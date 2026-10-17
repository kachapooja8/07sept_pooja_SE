#include<iostream>
using namespace std;
class playlist
{
	public:
	string plname;
	
	playlist()
	{
		plname="MyFavSongs";
		cout<<"\nWelcome to my playlist.";
	}
};
main()
{
	playlist play;
	cout<<"\nPlay list name:"<<play.plname;
	
}
