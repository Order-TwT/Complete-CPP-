// In a list, there isn't a continuous memory block, it is randomised
// lsit is used when we need fast insertion or deletion
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    // list<int>::iterator it; // making iterator it
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // empty list with no elements

    int n;
    cout << "Number of elements to be added in the list is: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list1.push_back(x);
    }
    cout << "The List is: ";

    // WAY TO DISPLAY THE LIST
    // for(data_type variable: container_name)
    // for (int x : list1) // range-based for loop is a simpler way to visit every element in a container like a list, vector, or array
    // {
    //     cout << x << " ";
    // }

    display(list1);

    // -----METHODS TO REMOVE FROM LIST-----
    // list1.pop_back(); deletes the last element
    // list1.pop_front(); deletes the front element
    // int t;
    // cout << "The number to be removed from the list is ";
    // cin >> t;
    // list1.remove(t); // removes from anywhere


    //SORTING IN A LIST
    list1.sort();
    display(list1);
    
    // REVERSING A LIST
    list1.reverse();
    cout<<"The reversed list is: "<<endl;
    display(list1);

    // list<int> list2(3); // list with 3 un-inititalized elements
    // list<int>::iterator iter;
    // iter = list2.begin();
    // *iter = 45;
    // iter++;
    // *iter = 67;
    // iter++;
    // *iter = 69;
    // display(list2);
    // cout << endl;


    //Merging 2 lists after sorting 2 lists
    // list1.sort();
    // list2.sort();

    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);



    return 0;
}