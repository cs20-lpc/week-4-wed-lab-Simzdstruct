#include <iostream>
#include "DoublyList.hpp"
#include <string>

using namespace std;

int main()
{
    //Testing Append
    DoublyList<int> dlist;
    dlist.append(4);
    dlist.append(30);
    dlist.append(23);
    dlist.append(7);
    cout << dlist.getLength() << " " << "should be 4" << endl;
    //Testing getElement    
    cout << dlist.getElement(1) << " " << "should be 30" << endl; 
    //testing Append String
    DoublyList<string> slist;
    slist.append("Hello");
    slist.append("World");
    cout << slist.getLength() << " " << "should be 2" << endl;
    cout << slist.getElement(0) << " " << "should be Hello" << endl;
    cout << slist.getElement(1) << " " << "should be World" << endl;
    //Testing Isert at start
    dlist.insert(0, 19);
    cout << dlist.getElement(0) << " " << "should be 19" << endl;
    //Testing Insert at middle
    dlist.insert(2, 17);
    cout << dlist.getElement(2) << " " << "should be 17" << endl;
    //Testing Insert at end
    dlist.insert(dlist.getLength(), 25);
    cout << dlist.getElement(dlist.getLength() - 1) << " ";

    //Testing replace
    dlist.replace(2, 54);
    cout << dlist.getElement(2) << " ";

    //Testing Search
    bool found = dlist.search(54);
    cout << found << " ";   
    bool notFound = dlist.search(100);
    cout << notFound << " ";
    //Testing Remove at start
    dlist.remove(0);
    cout << dlist.getElement(0) << " ";
    //Testing Remove at middle
    dlist.remove(1);
    cout << dlist.getElement(1) << " ";
    //Testing Remove at end
    dlist.remove(dlist.getLength() - 1);
    cout << dlist.getElement(dlist.getLength() - 1) << " " << endl;

    cout << dlist.getLength() << " " << "should be 4" << endl;


    //Testing << operator
    cout << dlist << " " << "should be 4 30 23 7" << endl;


}