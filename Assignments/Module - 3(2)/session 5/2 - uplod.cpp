#include<iostream>
using namespace std;

class SocialMediaUploader
{
    public:
        virtual void uploadContent()
        {
            cout << "\nUploading content...";
        }
};

class InstagramUploader : public SocialMediaUploader
{
    public:
        void uploadContent() override
        {
            cout << "\nUploading photo or reel to Instagram";
        }
};

class YouTubeUploader : public SocialMediaUploader
{
    public:
        void uploadContent() override
        {
            cout << "\nUploading video to YouTube";
        }
};

int main()
{
    InstagramUploader i1;
    YouTubeUploader y1;

    i1.uploadContent();
    y1.uploadContent();

    return 0;
}

