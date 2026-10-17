
#include<iostream>
using namespace std;

class Instagram
{
    private:
        string password;

    public:
        void setPassword(string p)
        {
            password = p;
        }

        void login()
        {
            cout << "Login successful!" << endl;
            cout << "Opening Instagram Feed..." << endl;
        }
};

int main()
{
    Instagram i1;

    // Encapsulation
    i1.setPassword("pooja123");

    // Abstraction
    i1.login();

    return 0;
}

