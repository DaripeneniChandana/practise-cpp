#include<bits/stdc++.h>
using namespace std;
// single
class A{
    public:
    A(){
        cout<<"A's Chandu"<<endl;
    }
    ~A(){
        cout<<"A's Spurthi"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"B's Reethu"<<endl;
    }
    ~B(){
        cout<<"B's Tara"<<endl;
    }
};
int main(){
    B obj;
    return 0;
}
