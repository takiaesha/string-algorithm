#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;

    getline(cin,a);
    //cin.ignore();
     getline(cin,b);

    cout<< a.size() <<" "<<b.size()<<endl;
    string c = a+b;
    cout<< c <<endl;

    return 0;
}
