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

class Podcaster : public SocialMediaUser
{
    public:
        string podcastName;

        void publishEpisode(string episodeTitle)
        {
            cout << "\nEpisode " << episodeTitle
                 << " published on " << podcastName;
        }
};

int main()
{
    Podcaster p1;

    p1.username = "Pooja";
    p1.followers = 500;
    p1.podcastName = "Pooja Talks";

    p1.displayProfile();
    p1.publishEpisode("My First Episode");

}
