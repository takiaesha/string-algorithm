#include<bits/stdc++.h>
using namespace std;
void toggle(string& s)
{
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            s[i] = toupper(s[i]);
        }else if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
    }
}
int main()
{
    string s;
    cin>>s;
    toggle(s);
    cout << s <<endl;
    return 0;
}
