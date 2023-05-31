#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="what is up";
    cout<< s <<endl;


   ///find for searching an string
    s.replace(s.find("is"),2,"life");
    cout<< s <<endl;

    string d = s.substr(5,4);
    cout<< d <<endl;

    ///push and pop back
    string w;
    cin>>w;
    cout<<"After push_back :\n";
    w.push_back('u');
    cout<< w <<endl;

    w.pop_back();
    cout<<"After pop_back: \n";
    cout<< w <<endl;


    return 0;
}
