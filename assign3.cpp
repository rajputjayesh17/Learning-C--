#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string page;
    Node *next;

    Node(string p)
    {
        page = p;
        next = NULL;
    }
};

Node *top = NULL;

void addPage()
{
    string page;

    cout << "Enter page name: ";
    cin >> page;

    Node *newNode = new Node(page);
    newNode->next = top;
    top = newNode;
}

void backPage()
{
    if (top == NULL)
    {
        cout << "History is empty" << endl;
        return;
    }
    int option;
    cout << "\nNavigate Back:" << endl;
    cout << "1. Go to Last Page" << endl;
    cout << "2. Go to Specific Page" << endl;
    cout << "Enter option: ";
    cin >> option;

    if (option == 1)
    {
        if (top->next == NULL)
        {
            cout << "No previous page available!" << endl;
        }
        else
        {
            cout << "Previous Page: " << top->next->page << endl;
        }
    }
    else if (option == 2)
    {
        string page;

        cout << "Enter page name: ";
        cin >> page;
        Node *temp = top;
        while (temp != NULL && temp->page != page)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Page not found in history!" << endl;
        }
        else
        {
            cout << "Page Found: " << temp->page << endl;
        }
    }
    else
    {
        cout << "Invalid option!" << endl;
    }
}

void currentPage()
{
    if (top == NULL)
    {
        cout << "No current page" << endl;
    }
    else
    {
        cout << "Current page: " << top->page << endl;
    }
}

void checkHistory()
{
    if (top == NULL)
    {
        cout << "History is empty" << endl;
    }
    else
    {
        Node *temp = top;
        cout << "\nBrowser History:" << endl;
        while (temp != NULL)
        {
            cout << temp->page << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;

    while (true)
    {

        cout << "\n1. Add Visited Page" << endl;
        cout << "2. Navigate Back" << endl;
        cout << "3. View Current Page" << endl;
        cout << "4. Check History" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addPage();
            break;

        case 2:
            backPage();
            break;

        case 3:
            currentPage();
            break;

        case 4:
            checkHistory();
            break;

        case 5:
            cout << "Program ended." << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
