#include<iostream>
#include<fstream>
using namespace std;

class Playlist
{
    public:
        string playlistname;

        Playlist(string name)
        {
            playlistname = name;
        }

        ~Playlist()
        {
            ofstream file("autosave.txt");

            file << playlistname;

            file.close();

            cout << "\nPlaylist auto-saved successfully!";
        }
};

int main()
{
    Playlist p1("My Favourites");

    return 0;
}
