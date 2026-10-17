
#include<iostream>
using namespace std;

class MusicPlayer
{
    public:
        virtual void play(string song)
        {
            cout << "Playing: " << song;
        }
};

class SpotifyPlayer : public MusicPlayer
{
    public:
        void play(string song) override
        {
            cout << "Streaming on Spotify: " << song;
        }
};

int main()
{
    MusicPlayer *m1 = new SpotifyPlayer();

    m1->play("Kesariya");

    delete m1;

    return 0;
}

