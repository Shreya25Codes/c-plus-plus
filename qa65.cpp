
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1, l2;
    list<int>::iterator it;

    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(20);
    l1.push_front(5);

    cout << "Initial list: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.push_front(1);
    l1.push_back(40);
    cout << "After insertion at beginning and end: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.pop_front();
    l1.pop_back();
    cout << "After deletion at beginning and end: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    it = l1.begin();
    advance(it, 2);
    l1.insert(it, 15);
    cout << "After insertion at position 3: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    it = l1.begin();
    advance(it, 1);
    l1.erase(it);
    cout << "After erasing position 2: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.sort();
    cout << "After sorting: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.unique();
    cout << "After removing duplicates: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.reverse();
    cout << "After reversing: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l1.remove(20);
    cout << "After removing element 20: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l2.push_back(7);
    l2.push_back(8);
    l2.push_back(9);

    l1.sort();
    l2.sort();
    l1.merge(l2);

    cout << "After merging lists: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    l2.push_back(100);
    l1.swap(l2);

    cout << "List 1 after swapping: ";
    for (int x : l1)
        cout << x << " ";
    cout << endl;

    cout << "List 2 after swapping: ";
    for (int x : l2)
        cout << x << " ";
    cout << endl;

    cout << "Size of list 1: " << l1.size() << endl;
    cout << "Is list 1 empty? "
         << (l1.empty() ? "Yes" : "No") << endl;

    return 0;
}
 
