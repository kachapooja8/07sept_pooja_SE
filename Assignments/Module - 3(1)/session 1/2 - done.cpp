#include <iostream>
using namespace std;

string tasks[5];
int status[5] = {0};

void markTaskDone(int index)
{
    status[index] = 1;
}
main()
{
    int n, taskNo;

    cout << "Enter number of tasks: ";
    cin >> n;
    cin.ignore();

    for (int i=0;i<n;i++)
    {
        cout<<"Enter task:";
        getline(cin, tasks[i]);
    }

    cout << "\nEnter task number to mark DONE: ";
    cin >> taskNo;

    markTaskDone(taskNo - 1);

    cout << "\nTask List:\n";

    for (int i = 0; i < n; i++)
    {
        cout << tasks[i];

        if (status[i] == 1)
        {
        	cout << " - DONE";
		}
        cout << endl;
    }
}
