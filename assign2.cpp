#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
   string data;
   Node *prev;
   Node *next;

   Node()
   {
      data = "";
      prev = NULL;
      next = NULL;
   }
};

class Text
{
private:
   Node *head;
   Node *tail;

public:
   Text()
   {
      head = tail = NULL;
   }

   void insert_at_big()
   {
      Node *NewNode = new Node();
      cout << "Enter Text: ";
      cin >> NewNode->data;
      if (head == NULL)
      {
         head = tail = NewNode;
      }
      else
      {
         NewNode->next = head;
         head->prev = NewNode;
         head = NewNode;
      }
   }

   void insert_at_end()
   {
      Node *NewNode = new Node();

      cout << "Enter Text: ";
      cin >> NewNode->data;
      if (head == NULL)
      {
         head = tail = NewNode;
      }
      else
      {
         tail->next = NewNode;
         NewNode->prev = tail;
         tail = NewNode;
      }
   }

   void insert_at_pos()
   {
      int pos;

      cout << "Enter Position: ";
      cin >> pos;

      if (pos == 1)
      {
         insert_at_big();
      }
      else
      {
         int counter = 1, i = 1;
         Node *temp = head;
         while (temp->next != NULL)
         {
            temp = temp->next;
            counter++;
         }
         if (pos < 1 || pos > counter)
         {
            cout << "Invalid Position!!\n";
         }
         else
         {
            temp = head;
            while (i < pos - 1)
            {
               temp = temp->next;
               i++;
            }
            Node *NewNode = new Node();
            cout << "Enter the text:  ";
            cin >> NewNode->data;
            NewNode->next = temp->next;
            NewNode->prev = temp;
            if (NewNode->next != NULL)
            {
               NewNode->next->prev = NewNode;
            }
            else
            {
               tail = NewNode;
            }
            temp->next = NewNode;
         }
      }
   }

   void delete_at_big()
   {
      Node *temp = head;
      if (head == NULL)
      {
         cout << "List is Empty\n";
      }
      else if (head == tail)
      {
         head = tail = NULL;
         delete temp;
      }
      else
      {
         head = head->next;
         head->prev = NULL;
         delete temp;
      }
   }

   void delete_at_end()
   {
      Node *temp = tail;
      if (tail == NULL)
      {
         cout << "List is Empty\n";
      }
      else if (head == tail)
      {
         head = tail = NULL;
         delete temp;
      }
      else
      {
         tail = tail->prev;
         tail->next = NULL;
         delete temp;
      }
   }

   void delete_at_pos()
   {
      int pos, i = 1, counter = 1;
      Node *temp = head;
      cout << "Enter Position: ";
      cin >> pos;

      if (head == NULL)
      {
         cout << "List is Empty\n";
      }
      else
      {
         while (temp->next != NULL)
         {
            counter++;
            temp = temp->next;
         }
         if (pos < 1 || pos > counter)
         {
            cout << "Invalid Position\n";
         }
         else if (pos == 1)
         {
            delete_at_big();
         }
         else if (pos == counter)
         {
            delete_at_end();
         }
         else
         {
            temp = head;
            while (i < pos)
            {
               temp = temp->next;
               i++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
         }
      }
   }

   void display()
   {
      Node *temp = head;
      if (head == NULL)
      {
         cout << "List is Empty\n";
      }
      else
      {
         cout << "Text:   NULL <-> ";
         while (temp != NULL)
         {
            cout << temp->data << " <-> ";
            temp = temp->next;
         }
         cout << "NULL" << endl;
      }
   }

   void search()
   {
      string key;
      cout << "Enter Text to Search: ";
      cin >> key;
      Node *temp = head;
      int pos = 1;
      while (temp != NULL)
      {
         if (temp->data == key)
         {
            cout << "Text Found at Position " << pos << endl;
            return;
         }
         else
         {
            temp = temp->next;
            pos++;
         }
      }
      cout << "Text Not Found\n";
   }

   void reverse()
   {
      Node *temp = tail;
      if (tail == NULL)
      {
         cout << "List is Empty\n";
      }
      else
      {
         cout << "Reverse Text:   NULL <-> ";
         while (temp != NULL)
         {
            cout << temp->data << " <-> ";
            temp = temp->prev;
         }
         cout << "NULL" << endl;
      }
   }
};

int main()
{
   Text t;

   int choice1, choice2;

   do
   {
      cout << "\n1. Insert Text\n";
      cout << "2. Delete Text\n";
      cout << "3. Display Text\n";
      cout << "4. Search Text\n";
      cout << "5. Print Reverse\n";
      cout << "6. Exit\n";

      cout << "Enter Choice: ";
      cin >> choice1;

      switch (choice1)
      {
      case 1:
         cout << "1. Insert at Beginning\n";
         cout << "2. Insert at End\n";
         cout << "3. Insert at Position\n";
         cout << "Enter Choice: ";
         cin >> choice2;

         switch (choice2)
         {
         case 1:
            t.insert_at_big();
            break;

         case 2:
            t.insert_at_end();
            break;

         case 3:
            t.insert_at_pos();
            break;

         default:
            cout << "Invalid Choice\n";
         }

         break;

      case 2:
         cout << "1. Delete at Beginning\n";
         cout << "2. Delete at End\n";
         cout << "3. Delete at Position\n";
         cout << "Enter Choice: ";
         cin >> choice2;

         switch (choice2)
         {
         case 1:
            t.delete_at_big();
            break;

         case 2:
            t.delete_at_end();
            break;

         case 3:
            t.delete_at_pos();
            break;

         default:
            cout << "Invalid Choice\n";
         }

         break;

      case 3:
         t.display();
         break;

      case 4:
         t.search();
         break;

      case 5:
         t.reverse();
         break;

      case 6:
         cout << "Exit...\n";
         break;

      default:
         cout << "Invalid Choice\n";
      }

   } while (choice1 != 6);

   return 0;
}
