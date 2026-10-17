#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Content
{
    public:
        string title;
        string platform;
        int views;
        string status;

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Platform: " << platform << endl;
            cout << "Views: " << views << endl;
            cout << "Status: " << status << endl;
        }
};

// Function to read all contents from file
int readContents(Content items[], int max)
{
    ifstream file("content_list.txt");
    int count = 0;

    while(count < max &&
          getline(file, items[count].title) &&
          getline(file, items[count].platform))
    {
        file >> items[count].views;
        file.ignore();

        getline(file, items[count].status);

        string separator;
        getline(file, separator);

        count++;
    }

    file.close();
    return count;
}

// Function to save all contents to file
void saveContents(Content items[], int count)
{
    ofstream file("content_list.txt");

    for(int i = 0; i < count; i++)
    {
        file << items[i].title << endl;
        file << items[i].platform << endl;
        file << items[i].views << endl;
        file << items[i].status << endl;
        file << "-------------------" << endl;
    }

    file.close();
}

// Function to display numbered list
void displayContents(Content items[], int count)
{
    if(count == 0)
    {
        cout << "\nNo content found!\n";
        return;
    }

    cout << "\n----- Content List -----\n";

    for(int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << items[i].title
             << " | Platform: "
             << items[i].platform << endl;
    }
}

int main()
{
    Content items[100];
    int count;
    int choice;

    do
    {
        cout << "\n===== Content Manager =====\n";
        cout << "1. Add Content\n";
        cout << "2. Display Content List\n";
        cout << "3. Update Content Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        count = readContents(items, 100);

        if(choice == 1)
        {
            if(count >= 100)
            {
                cout << "Content list is full!\n";
                continue;
            }

            cout << "Enter title: ";
            getline(cin, items[count].title);

            cout << "Enter platform: ";
            getline(cin, items[count].platform);

            cout << "Enter views: ";
            cin >> items[count].views;
            cin.ignore();

            cout << "Enter status: ";
            getline(cin, items[count].status);

            count++;
            saveContents(items, count);

            cout << "Content added successfully!\n";
        }
        else if(choice == 2)
        {
            displayContents(items, count);
        }
        else if(choice == 3)
        {
            displayContents(items, count);

            if(count > 0)
            {
                int number;

                cout << "Enter content number to update: ";
                cin >> number;
                cin.ignore();

                if(number >= 1 && number <= count)
                {
                    cout << "Enter new status: ";
                    getline(cin, items[number - 1].status);

                    saveContents(items, count);

                    cout << "Status updated successfully!\n";
                }
                else
                {
                    cout << "Invalid content number!\n";
                }
            }
        }
        else if(choice == 4)
        {
            displayContents(items, count);

            if(count > 0)
            {
                int number;

                cout << "Enter content number to delete: ";
                cin >> number;
                cin.ignore();

                if(number >= 1 && number <= count)
                {
                    for(int i = number - 1; i < count - 1; i++)
                    {
                        items[i] = items[i + 1];
                    }

                    count--;
                    saveContents(items, count);

                    cout << "Content deleted successfully!\n";

                    displayContents(items, count);
                }
                else
                {
                    cout << "Invalid content number!\n";
                }
            }
        }
        else if(choice == 5)
        {
            cout << "Exiting program...\n";
        }
        else
        {
            cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

