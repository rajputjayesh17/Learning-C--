#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string title;
    string artist;
    float duration;
    Node *next;

    Node(string t, string a, float d)
    {
        title = t;
        artist = a;
        duration = d;
        next = NULL;
    }
};

Node *head = NULL;

void insertBeginning(string title, string artist, float duration)
{
    Node *temp = new Node(title, artist, duration);
    temp->next = head;
    head = temp;
    cout << "Song inserted at beginning.\n";
}

void insertEnd(string title, string artist, float duration)
{
    Node *temp = new Node(title, artist, duration);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }

    cout << "Song inserted at end.\n";
}

void insertPosition(string title, string artist, float duration, int pos)
{
    if (pos <= 1 || head == NULL)
    {
        insertBeginning(title, artist, duration);
        return;
    }

    Node *temp = new Node(title, artist, duration);
    Node *p = head;

    for (int i = 1; i < pos - 1 && p->next != NULL; i++)
    {
        p = p->next;
    }

    temp->next = p->next;
    p->next = temp;

    cout << "Song inserted successfully.\n";
}

void deleteBeginning()
{
    if (head == NULL)
    {
        cout << "Playlist is empty.\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;

    cout << "First song deleted.\n";
}

void deleteEnd()
{
    if (head == NULL)
    {
        cout << "Playlist is empty.\n";
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        cout << "Last song deleted.\n";
        return;
    }

    Node *p = head;

    while (p->next->next != NULL)
    {
        p = p->next;
    }

    delete p->next;
    p->next = NULL;

    cout << "Last song deleted.\n";
}

void deletePosition(int pos)
{
    if (head == NULL)
    {
        cout << "Playlist is empty.\n";
        return;
    }

    if (pos == 1)
    {
        deleteBeginning();
        return;
    }

    Node *p = head;
    Node *prev = NULL;

    for (int i = 1; i < pos && p != NULL; i++)
    {
        prev = p;
        p = p->next;
    }

    if (p == NULL)
    {
        cout << "Invalid Position.\n";
        return;
    }

    prev->next = p->next;
    delete p;

    cout << "Song deleted successfully.\n";
}

void display()
{
    if (head == NULL)
    {
        cout << "Playlist is empty.\n";
        return;
    }

    Node *temp = head;

    cout << "\nPlaylist\n\n";

    while (temp != NULL)
    {
        cout << "Title    : " << temp->title << endl;
        cout << "Artist   : " << temp->artist << endl;
        cout << "Duration : " << temp->duration << " mins\n\n";
        temp = temp->next;
    }
}

void playSong(string title)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->title == title)
        {
            cout << "\nNow Playing\n";
            cout << "Title    : " << temp->title << endl;
            cout << "Artist   : " << temp->artist << endl;
            cout << "Duration : " << temp->duration << " mins\n";
            return;
        }

        temp = temp->next;
    }

    cout << "Song not found.\n";
}

int main()
{
    int choice;
    string title, artist;
    float duration;

    do
    {
        cout << "\nMUSIC PLAYLIST: \n";
        cout << "1. Insert Song\n";
        cout << "2. Delete Song\n";
        cout << "3. Display Playlist\n";
        cout << "4. Play Song\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            int ch, pos;

            cout << "\n1. Insert at Beginning\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Any Position\n";
            cout << "Enter Choice: ";
            cin >> ch;
            cin.ignore();

            cout << "Enter Song Title: ";
            getline(cin, title);

            cout << "Enter Artist Name: ";
            getline(cin, artist);

            cout << "Enter Duration: ";
            cin >> duration;

            switch (ch)
            {
            case 1:
                insertBeginning(title, artist, duration);
                break;

            case 2:
                insertEnd(title, artist, duration);
                break;

            case 3:
                cout << "Enter Position: ";
                cin >> pos;
                insertPosition(title, artist, duration, pos);
                break;

            default:
                cout << "Invalid Choice!\n";
            }

            break;
        }

        case 2:
        {
            int ch, pos;

            cout << "\n1. Delete from Beginning\n";
            cout << "2. Delete from End\n";
            cout << "3. Delete from Any Position\n";
            cout << "Enter Choice: ";
            cin >> ch;

            switch (ch)
            {
            case 1:
                deleteBeginning();
                break;

            case 2:
                deleteEnd();
                break;

            case 3:
                cout << "Enter Position: ";
                cin >> pos;
                deletePosition(pos);
                break;

            default:
                cout << "Invalid Choice!\n";
            }

            break;
        }

        case 3:
            display();
            break;

        case 4:

            cout << "Enter Song Title: ";
            getline(cin, title);
            playSong(title);
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
