#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> solar_sys = {"mer","venus","earth","mars","jupiter","saturn","uranus","naptune"};
    vector<string>::iterator chandu = solar_sys.begin();
    vector<string>::iterator tara = solar_sys.begin();
    advance(chandu,3);
    cout<<"Distance from chandu "<<distance(tara,chandu)<<endl;
  return 0;
}
