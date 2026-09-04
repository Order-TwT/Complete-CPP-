#include<iostream>
#include<map>
using namespace std;

// map is an associative array 

int main(){
    map<string, int> marksMap;
    marksMap["Abhay"]=98;
    marksMap["Ayush"]=45;
    marksMap["Aditya"]=43;
    marksMap["krishvi"]=20;

    //METHOD TO INSERT VALUES IN A MAP using map_name.insert({{}})
    marksMap.insert({{"Dhruv",65},{"Asees",58}});

    //METHOD TO DISPLAY THE VALUES IN A MAP
    map<string, int> :: iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;

        //(*iter).first gives the first key
        //(*iter).second gives the second key
    }
    
    cout<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty' s return value is: "<<marksMap.empty()<<endl; //checks whether the given map is empty or not
                                                                    // if empty it returns 1, else 0.
    return 0;
}