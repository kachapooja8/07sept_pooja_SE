#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
        string username;
        int followers;

        void displayProfile()
        {
            cout << "\nUsername: " << username;
            cout << "\nFollowers: " << followers;
        }
};

class YouTuber : public SocialMediaUser
{
    public:
        string channelName;

        void uploadVideo(string title)
        {
            cout << "\nVideo " << title
                 << " uploaded to " << channelName;
        }
};

class GamingYouTuber : public YouTuber
{
    public:
        void streamGame(string gameName)
        {
            cout << "\n" << username
                 << " is now streaming " << gameName
                 << " on " << channelName;
        }
};

int main()
{
    GamingYouTuber g1;

    g1.username = "Pooja";
    g1.followers = 1000;
    g1.channelName = "Pooja Gaming";

    g1.displayProfile();
    g1.uploadVideo("GTA Gameplay");
    g1.streamGame("GTA V");

    return 0;
}
