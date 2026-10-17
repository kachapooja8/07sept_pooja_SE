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

int main()
{
    YouTuber y1;

    y1.username = "Pooja";
    y1.followers = 1000;
    y1.channelName = "Pooja Vlogs";

    y1.displayProfile();
    y1.uploadVideo("My First Vlog");

    return 0;
}
