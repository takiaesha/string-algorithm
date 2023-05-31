#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int x = 0;
    for(int i=0; i<s.size(); i++){
        x = (x*10)+ s[i]-48;
        //x = (x*10)+ s[i]-'0';

    }
    cout<< x << endl;
     ///using function
     int y = 0;
     string st;
     cin>>st;

     y = stoi(st);
     cout<< y <<  "\n";


    return 0;
}

