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
};

class Podcaster : public SocialMediaUser
{
};

class InstagramInfluencer : public SocialMediaUser
{
    public:
        void postStory(string storyTitle)
        {
            cout << "\n" << username
                 << " posted a new story: " << storyTitle;
        }
};

int main()
{
    InstagramInfluencer i1;

    i1.username = "Pooja";
    i1.followers = 2000;

    i1.displayProfile();
    i1.postStory("My New Look");

}
