
#include<iostream>
using namespace std;

class Product
{
    public:
        virtual void upload() = 0;
};

class Electronics : public Product
{
    public:
        void upload() override
        {
            cout << "Uploading Electronics product to Flipkart" << endl;
        }
};

class Clothing : public Product
{
    public:
        void upload() override
        {
            cout << "Uploading Clothing product to Flipkart" << endl;
        }
};

int main()
{
    Electronics e1;
    Clothing c1;

    e1.upload();
    c1.upload();

    return 0;
}

