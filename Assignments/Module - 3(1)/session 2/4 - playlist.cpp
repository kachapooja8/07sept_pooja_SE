#include<iostream>
using namespace std;

class Playlist
{
    public:
        string songs[3];
        int count;

        Playlist()
        {
            count = 0;
        }

        void addSong(string songTitle)
        {
            songs[count] = songTitle;
            count++;
        }

        void showSongs()
        {
            for(int i = 0; i < count; i++)
            {
                cout << songs[i] << endl;
            }
        }
};

int main()
{
    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Heeriye");
    p.addSong("Apna Bana Le");

    cout << "Playlist Songs:\n";
    p.showSongs();

}

