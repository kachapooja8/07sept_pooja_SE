#include<iostream>
using namespace std;

class Product
{
    public:
        string productName;
        float price;
        float rating;

        Product(string n, float p, float r)
        {
            productName = n;
            price = p;
            rating = r;
        }

        void displayInfo()
        {
            cout << "\nProduct Name: " << productName;
            cout << "\nPrice: " << price;
            cout << "\nRating: " << rating;
        }
};

main()
{
    Product p1("Mobile", 15000, 4.5);

    p1.displayInfo();

}
