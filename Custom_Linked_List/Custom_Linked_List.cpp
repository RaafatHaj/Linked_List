
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    
    LinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List is Empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();


    LinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    LinkedList<int>::Node* N2 = MydblLinkedList.Find(5);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 5:\n";
    MydblLinkedList.PrintList();


    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();


    cout << "\nNumber of items in the linked list : " << MydblLinkedList.Size();


    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List is Empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";

    /*  MydblLinkedList.Clear();


      cout << "\nNumber of items in the linked list : " << MydblLinkedList.Size();


      if (MydblLinkedList.IsEmpty())
          cout << "\n\nYes List is Empty.\n";
      else
          cout << "\n\nNo List is not Empty.\n";*/


    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();



    LinkedList<int>::Node* N4 = MydblLinkedList.GetNode(1);

    cout << "\nValue of N4[1] is : " << N4->value;

    cout << "\nItem (1) value is :" << MydblLinkedList.GetItem(1);

    MydblLinkedList.UpdateItem(3, 99);

    cout << "\nAfter Updating item (3) : \n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(1, 444);

    //cout << "\nAfter Inserting  \n";
    //MydblLinkedList.PrintList();


    system("pause>0");
}

