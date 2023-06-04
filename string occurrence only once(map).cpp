///pangram-at least each alphabet occurs at once
///string related
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    map<char,int> mp;
    map<char,int>::iterator it;

    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        char key = tolower(ch);

        if(mp[key]==0) mp[key]++;
    }

    for(auto it=mp.begin(); it!= mp.end(); it++){
        cout<< it->first << " "<< it->second << "\n";
    }

    return 0;
}
