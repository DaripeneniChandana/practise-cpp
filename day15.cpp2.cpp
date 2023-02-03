#include<bits/stdc++.h>
using namespace std;
// single
class Animal{
    public:
    void speak(){
        cout<<"This is chandu!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"she is very intelligent."<<endl;
    }
};
class Cat:public Animal{
    public:
    void speak(){
        cout<<"awwwwwwwwwww"<<endl;
    }
};
int main(){
    Dog d;
    Animal a;
    Cat c;
    a.speak();
    d.speak();
    c.Animal::speak();
    return 0;
}
