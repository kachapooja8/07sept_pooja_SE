#include<iostream>
using namespace std;

class Ticket
{
    public:
        Ticket()
        {
            cout << "Ticket booked successfully!" << endl;
        }

        ~Ticket()
        {
            cout << "Saving your ticket...";
        }
};

int main()
{
    Ticket *t = new Ticket();

    delete t;

    return 0;
}
