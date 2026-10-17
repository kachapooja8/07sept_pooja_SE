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

int main()
{
    SocialMediaUser s1;

    s1.username = "Pooja";
    s1.followers = 1000;

    s1.displayProfile();

}
