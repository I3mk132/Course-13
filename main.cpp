
#include <iostream>
#include "Header Files/DS/clsDblLinkedList.h"
#include "Header Files/DS/clsMyQueue.h"
#include "Header Files/DS/clsMyStack.h"
#include "Header Files/DS/clsDynamicArray.h"
#include "Header Files/DS/clsMyQueueArr.h"
#include "Header Files/DS/clsMyStackArr.h"
#include "Header Files/clsMyString.h"
#include "Header Files/clsString.h"
#include "Header Files/clsDate.h"
#include "Header Files/clsQueueLine.h"

using namespace std;

/// Project 1 : Linked List Class
// Main Functions
/*
int main() {

    // clsDblLinkedList<int> MydblLinkedList;
    //
    // MydblLinkedList.InsertAtBeggining(5);
    // MydblLinkedList.InsertAtBeggining(4);
    // MydblLinkedList.InsertAtBeggining(3);
    // MydblLinkedList.InsertAtBeggining(2);
    // MydblLinkedList.InsertAtBeggining(1);
    //
    // cout << "\nLinked List Content:\n";
    // MydblLinkedList.PrintList();
    //
    // clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    // if (N1 != NULL) {
    //     cout << "\nNode with value 2 is Found :-)\n";
    // }
    // else {
    //     cout << "\nNode is not found :-(\n";
    // }
    //
    // MydblLinkedList.InsertAfter(N1, 500);
    // cout << "\nAfter Inserting 500 after 2:\n";
    // MydblLinkedList.PrintList();
    //
    // MydblLinkedList.InsertAtEnd(700);
    // cout << "\nAfter Inserting 700 at end:\n";
    // MydblLinkedList.PrintList();
    //
    // clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    // MydblLinkedList.DeleteNode(N2);
    // cout << "\nAfter Deleteing 4:\n";
    // MydblLinkedList.PrintList();
    //
    // MydblLinkedList.DeleteFirstNode();
    // cout << "\nAfter Deleting First Node:\n";
    // MydblLinkedList.PrintList();
    //
    // MydblLinkedList.DeleteLastNode();
    // cout << "\nAfter Deleting Last Node:\n";
    // MydblLinkedList.PrintList();

    clsDblLinkedList<int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;

    return 0;
}
*/

/// Project 1 : Extension 1
// Size()
/*
int main() {
    clsDblLinkedList<int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;

    return 0;
}
*/
/// Project 1 : Extension 2
// isEmpty()
/*
int main() {
    clsDblLinkedList<int> MydblLinkedList;

    if (MydblLinkedList.isEmpty())
        cout << "\n\nYes, List is empty.\n";
    else
        cout << "\n\nNo, List is not empty.\n";

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;

    if (MydblLinkedList.isEmpty()) cout << "\n\nYes List is Empty.\n";
    else cout << "\n\nNo List is not empty.\n";

    return 0;
}
*/
/// Project 1 : Extension 3
// Clear()
/*
int main() {
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    cout << "\nExecuting .Clear()";
    MydblLinkedList.Clear();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    cout << "\n\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    system("pause>0");
}
*/
/// Project 1 : Extension 4
// Reverse()
/*
int main() {
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Reverse();

    cout << "\n\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    system("pause>0");
}
 */
/// Project 1 : Extension 5
// GetNode()
/*
int main(){
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node *N;

    N = MydblLinkedList.GetNode(3);

    cout << "\nNode Value is: " << N->value;

    system("pause > 0");
    return 0;
}
 */
/// Project 1 : Extension 6
// GetItem()
/*
int main(){
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    cout << "\nItem(2) Value is: " << MydblLinkedList.GetItem(2) << endl;

    system("pause > 0");
    return 0;
}
 */
/// Project 1 : Extension 7
// Update()
/*
int main(){
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Update(2, 100);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    system("pause > 0");
    return 0;
}
 */
/// Project 1 : Extension 8
// InsertAfter()
/*
int main(){
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeggining(5);
    MydblLinkedList.InsertAtBeggining(4);
    MydblLinkedList.InsertAtBeggining(3);
    MydblLinkedList.InsertAtBeggining(2);
    MydblLinkedList.InsertAtBeggining(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(2, 100);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    system("pause > 0");
    return 0;
}
 */

/// Project 2 : Queue Class (Based on Linked List)
// Main Functions
/*
int main(){
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size() ;
    cout << "\nQueue Front: " << MyQueue.front() ;
    cout << "\nQueue Back: " << MyQueue.back() ;

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();



    system("pause>0");
}
 */
/// Project 2 : Extension 1 - 7
// GetItem(), Reverse(), UpdateItem(), InsertAfter(), InsertAtFront(), InsertAtBack(), Clear()
/*
int main(){
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);

    //Extension #2
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    //Extension #3
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    //Extension #4
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();

    //Extension #5
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    //Extension #6
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    //Extension #7
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();


    system("pause>0");
}
*/

/// Project 3 : Stack Class (Based on Linked List)
// Main Functions and Extension
/*
int main(){
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);

    //Extension #2
    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    //Extension #3
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    //Extension #4
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();


    //Extension #5
    MyStack.InsertAtTop(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    //Extension #6
    MyStack.InsertAtBottom(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    //Extension #7
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();

    system("pause>0");
}
 */

/// Project 4 : Dynamic Array Class
// Main Functions
 /*
int main(){
    clsDynamicArray <int> MyDynamicArray(10);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty() ;
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();





    system("pause>0");
}
  */

 /// Project 4 : Extension 1
 // Resize()
/*
 int main(){
     clsDynamicArray <int> MyDynamicArray(5);

     MyDynamicArray.SetItem(0, 10);
     MyDynamicArray.SetItem(1, 20);
     MyDynamicArray.SetItem(2, 30);
     MyDynamicArray.SetItem(3, 40);
     MyDynamicArray.SetItem(4, 50);

     cout << "\nIs Empty?  " << MyDynamicArray.isEmpty();
     cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
     cout << "\nArray Items: \n";

     MyDynamicArray.PrintList();


     MyDynamicArray.Resize(2);
     cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
     cout << "\nArray Items after resize to 2 : \n";
     MyDynamicArray.PrintList();



     MyDynamicArray.Resize(10);
     cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
     cout << "\nArray Items after resize to 10 : \n";
     MyDynamicArray.PrintList();


     system("pause>0");
 }
 */

/// Project 4 : Extension 2 - 4
// GetItem(), Reverse(), Clear()
/*
int main(){

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";


    MyDynamicArray.Reverse();

    cout << "\nArray Items after reverse: \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();

    cout << "\nArray Items after clear: \n";
    MyDynamicArray.PrintList();

    system("pause>0");
}
 */

/// Project 4 : Extension 5
// DeleteItemAt()
/*
int main(){
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteItemAt(2);
    cout << "\nArray Items after deleting item(2): \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    system("pause>0");

}
 */

/// Project : Extension 6 - 7
// DeleteFirstItem(), DeleteLastItem()
/*
int main(){

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty() ;
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Items after deleting FirstItem: \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteLastItem();
    cout << "\nArray Items after deleting LastItem: \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    system("pause>0");

}
 */

/// Project 4 : Extension 8 - 9
// Find(), DeleteItem()
/*
int main(){
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty() ;
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    int Index = MyDynamicArray.Find(30);
    if (Index ==-1)
        cout << "\nItem was not Found :-(\n ";
    else
        cout << "\n30 is found at index : " << Index;

    MyDynamicArray.DeleteItem(30);
    cout << "\n\nArray Items after deleting 30:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    system("pause>0");
}
 */

/// Project 4 : Extension 10
// InsertAt()
/*
int main(){

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty() ;
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAt(2,500);
    cout << "\n\nArray after insert 500 at index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    system("pause>0");

}
 */

/// Project 4 : Extension 11 - 14
// InsertAtBeginning(), InsertBefore(), InsertAfter(), InsertAtEnd()
/*
int main(){
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.isEmpty() ;
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtBeginning( 400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2,500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtEnd( 800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    system("pause>0");
}
 */

/// Project 5 : Queue Class (Based on Dynamic Array)
// Basic Functions
/*
int main(){
    clsMyQueueArr <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();


    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);


    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();


    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();


    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();



    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();


    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();


    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    cout << "\n\nhi";
    system("pause>0");

}
 */

/// Project 6 : Stack Class (Based on Dynamic Array)
// Basic Functions
/*
int main(){
    clsMyStackArr <int> MyStack;

    MyStack.Push(10);
    MyStack.Push(20);
    MyStack.Push(30);
    MyStack.Push(40);
    MyStack.Push(50);


    cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();


    cout << "\n\n Item(2) : " << MyStack.GetItem(2);


    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();


    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();


    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();



    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();


    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();


    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();

    system("pause>0");
}
*/

/// Project 7 : String Lib
// Undo(), Redo()
/*
int main(){
    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;

    cout << "\nS1  = " << S1.get() << "\n";

    S1.set("Mohammed");

    cout << "S1  = " << S1.get() << "\n";

    S1.set("Mohammed2");

    cout << "S1  = " << S1.get() << "\n";

    S1.set("Mohammed3");

    cout << "S1  = " << S1.get() << "\n";

    S1.set("Mohammed4");

    cout << "S1  = " << S1.get() << "\n";

    S1.set("Mohammed5");

    cout << "S1  = " << S1.get() << "\n";

    cout << "\n\nUndo: ";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1  after undo = " << S1.get() << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.get() << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.get() << "\n";

    cout << "\n\nRedo: ";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1  after Redo = " << S1.get() << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.get() << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.get() << "\n";

    system("pause>0");

    return 0;
}
*/

/// Project 8 : Queue Line Class
// Queue Line Class

int main(){
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);


    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();



    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bills Queue After Serving One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nSubscriptions Queue Info:\n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();


    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();

    SubscriptionsQueue.PrintAllTickets();

    SubscriptionsQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscriptionsQueue.PrintInfo();


    return 0;
}