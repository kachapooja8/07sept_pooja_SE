
#include<iostream>
using namespace std;

class ProductSearch
{
    public:
        void searchProduct(string name)
        {
            cout << "\nSearching by product name: " << name;
        }

        void searchProduct(string name, string category)
        {
            cout << "\nSearching by product name and category";
            cout << "\nProduct Name: " << name;
            cout << "\nCategory: " << category;
        }
};

int main()
{
    ProductSearch p1;

    p1.searchProduct("Mobile");

    cout << "\n";

    p1.searchProduct("Samsung", "Electronics");

    return 0;
}

