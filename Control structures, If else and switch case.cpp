#include <iostream>
#include<cmath>
using namespace std;

int main(){
// cout<< "Tell me your age: ";
// int age;
// cin>>age;

//SELECTION CONTROL STRUCTURE: IF ELSE LADDER
// if((age<18) && (age>=0)){
//     cout<<"You cannot come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"Still a kid, come with an adult"<<endl;
// }
// else if(age<0){
//     cout<<"you are not yet born";
// }
// else{
//     cout<<"You are an adult welcome to the party";
// }


//Selection control structure using switch case
// only used when particular case matches
// if we con't break then the code will show all the couts

// switch (age)
// {
// case 18:
//     /* code */
//     cout<<"You are 18"<<endl;
//     break;
// case 2:
//     /* code */
//     cout<<"You are 2"<<endl;
//     break;
// case 22:
//     /* code */
//     cout<<"You are 22"<<endl;
//     break;
// case 10:
//     /* code */
//     cout<<"You are 10"<<endl;
//     break;

// default:
//     cout<<"No special case"<<endl;
//     break;
// }

// cout<<"Done with switch case";



    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /,%,^,m): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        case '%':
            cout<<"Result = "<< int(num1) % int(num2);
            break;
        case 'm':
            if(num1>num2)
                cout<<"Result ="<< num1;
            else
                cout<<"Result ="<<num2;
            break;
        case '^':
            cout<<"The result ="<<pow(num1,num2);
            break;

        default:
            cout << "Invalid operator!";
    }


return 0;

}


// string op;
// int choice;

// if(op == "max")
//     choice = 1;
// else if(op == "min")
//     choice = 2;
// else if(op == "add")
//     choice = 3;

// switch(choice) {
//     case 1:
//         cout << max(num1, num2);
//         break;

//     case 2:
//         cout << min(num1, num2);
//         break;

//     case 3:
//         cout << num1 + num2;
//         break;
// }

// Work around to not being able to use scripts in swict hcase staemts by equatings strings to numbers
