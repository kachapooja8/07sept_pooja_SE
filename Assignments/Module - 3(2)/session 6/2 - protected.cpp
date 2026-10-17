
#include<iostream>
using namespace std;

class InstaStory
{
    protected:
        int storyViews;
};

class SponsoredStory : public InstaStory
{
    public:
        void setViews(int views)
        {
            storyViews = views;
        }

        void displayViews()
        {
            cout << "Story Views: " << storyViews;
        }
};

int main()
{
    SponsoredStory s1;

    s1.setViews(5000);
    s1.displayViews();

    return 0;
}

