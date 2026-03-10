#include <iostream>
#include <string>
using namespace std;

int main()
{
    string task[20];
    int total = 0;
    int choice;

    while(true)
    {
        cout << "\n1. Add Task";
        cout << "\n2. View Tasks";
        cout << "\n3. Delete Task";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, task[total]);
            total++;
        }

        else if(choice == 2)
        {
            cout << "\nYour Tasks:\n";
            for(int i = 0; i < total; i++)
            {
                cout << i+1 << ". " << task[i] << endl;
            }
        }

        else if(choice == 3)
        {
            int num;
            cout << "Enter task number to delete: ";
            cin >> num;

            for(int i = num-1; i < total-1; i++)
            {
                task[i] = task[i+1];
            }

            total--;
        }

        else if(choice == 4)
        {
            break;
        }

        else
        {
            cout << "Invalid choice";
        }
    }

    return 0;
}