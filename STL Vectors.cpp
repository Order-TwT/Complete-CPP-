#include <iostream>
#include <vector>

using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << endl; // prints the element at i positon in the vector
    }
    cout << endl;
}

int main()
{
    // Syntax for vector
    //  vector<data_type> vector_name;
    vector<int> vec1;    // zero length vector
    vector<int> vec2(4); // 4 element vector
    // vector<char> vec3(vec2); 4 element vector from vec2
    // vector <int> vec4(6,3); 6 elements of 3s(3,3,3,3,3,3)

    int element, size = 5;
    // to find methods refer to cplusplus website
    cout << "Enter the size of the vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to the vector " << endl;
        cin >> element;
        vec1.push_back(element); // pushes the entered element to the last of the vector
    }


    // vec1.pop_back(); //removes last element

    display(vec1);
    vector<int>::iterator iter = vec1.begin(); // syntax to form iterator
    //using vec.begin we point to the starting of the vector, now we can change position like a pointer by (iter+1).
    // SYNTAX
    //  vector_name.insert(iterator position, number of repeats, element to be added)

    vec1.insert(iter, 566); // inserts element to the front of the vector
    //    vec1.insert(iter+1, 566); //inserts element to the 2nd of the vector
    //    vec1.insert(iter+2, 566); //inserts element to the 3rd of the vector
    //    vec1.insert(iter+3, 566); //inserts element to the 4thof the vector
    display(vec1);


    // SORTING IN A VECTOR
    // sort(VECTOR_NAME.begin(), VECTOR_NAME.end()); //sorting from beginning to end in ascending order
    return 0;
}