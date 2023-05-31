#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    sync;
    char c = '1'; ///123
    int n = (int)c-48;
    cout<< n << endl;

    int p = 1234567890;
    string s = to_string(p);
    cout<< s<< endl;

    int number = 45678;
    string str;

    while(number>0){
        int r = number%10;
        char ch = r + '0';
        str += ch;
        number /= 10;
    }

    reverse(str.begin(),str.end());
    cout<< str << "\n";

    return 0;
}
