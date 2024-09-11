//use online GDB compiler
#include<iostream>
#include<string>
using namespace std;

struct Login {
    int id, pwd;
};

struct Student {
    int en, age, year;
    string name;
};

int main() {
    int i, id, pwd, found = 0;

    Login l[4] = {{182, 13072005}, {407, 4052006}, {301, 123456}, {181, 22062007}};
    Student s[4] = {{182, 19, 2, "Patel Pratham R."}, {407, 17, 2, "Suthar Dhruv"}, {301, 17, 2, "Manav Chaudhary"}, {181, 16, 2, "Patel Pratham M."}};

    cout<<"\033[2J\033[1;1H";; 
    cout<<"----------------------------------Parul University------------------------------"<<endl;
    cout<<"Enter UserId : ";
    cin>>id;
    cout<<"Enter Password : ";
    cin>>pwd;

    for (i = 0; i < 4; i++) {
        if (id == l[i].id && pwd == l[i].pwd) {
            cout<<"\033[2J\033[1;1H";; 
            cout<<"----------------------------------Parul University------------------------------"<<endl;
            cout<<"Name = "<<s[i].name<<endl;
            cout<<"Enrollment = "<<s[i].en<<endl;
            cout<<"Age = " << s[i].age<<endl;
            cout<<"Year = " << s[i].year<<endl;
            found = 1;
            break;
        }
    }

    if (found != 1) {
        cout << "Please Enter Correct Id Or Password!";
    }

    return 0;
}