#include<iostream>
using namespace std;

class Movie
{
    public:
        string name;
        float rating;

        Movie(string n, float r)
        {
            name = n;
            rating = r;
        }

        // Copy constructor
        Movie(Movie &m)
        {
            name = m.name;
            rating = m.rating;
        }

        void display()
        {
            cout << "\nMovie Name: " << name;
            cout << "\nRating: " << rating;
        }
};

int main()
{
    Movie m1("Pushpa", 4.5);

    Movie m2(m1);

    cout << "\nOriginal Movie:";
    m1.display();

    cout << "\n\nCopied Movie:";
    m2.display();

    return 0;
}
