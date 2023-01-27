#include<bits/stdc++.h>
using namespace std;

class student{
    string passcode;
    public:
    string name;
    int id;

    void into(){
        cout << name << " " << id << " " << passcode << endl;
    }

    void setPass(string pass){
        passcode = pass;
    }
};

int main(){
    student s1;
    s1.name = "Chandu";
    s1.id = 1;
    s1.setPass("2512");
    s1.into();
    return 0;
}
