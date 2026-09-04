#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int a) {
        age = a;
    }

    int get_age() {
        return age;
    }

    void set_standard(int s) {
        standard = s;
    }

    int get_standard() {
        return standard;
    }

    void set_first_name(string s) {
        first_name = s;
    }

    void set_last_name(string s) {
        last_name = s;
    }

    string get_name() {
        return last_name + "," + first_name;
    }

    void to_string() {
        cout<< age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;

    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout << st.get_age() << endl;
    cout << st.get_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    st.to_string();

    return 0;
}