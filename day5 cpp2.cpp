#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int*p = &a;
    char ch = 'a';
    char* pch = & ch;
    if(sizeof(pch) == sizeof(p)){
        cout << "hey chandu" << endl;
    } else {
        cout << "hii" << endl;
    }
    return 0;
}
