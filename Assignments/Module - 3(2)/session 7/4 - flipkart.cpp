
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    float price;

    // Write product details to file
    ofstream file("wishlist.txt");

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter product " << i << " name: ";
        getline(cin, name);

        cout << "Enter product price: ";
        cin >> price;
        cin.ignore();

        file << name << endl;
        file << price << endl;
    }

    file.close();

    // Read product details from file
    ifstream readfile("wishlist.txt");

    cout << "\n----- My Wishlist -----\n";

    for(int i = 1; i <= 3; i++)
    {
        getline(readfile, name);
        readfile >> price;
        readfile.ignore();

        cout << "Product: " << name << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "-------------------\n";
    }

    readfile.close();

    return 0;
}

