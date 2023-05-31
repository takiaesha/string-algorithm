#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
       string s;
       getline(cin,s);

       int cnt[256] = {};
       int occr=0;
       for(int i=0; i<s.size(); i++){
        int val = tolower(s[i]);

        if(val>='a' && val<='z') cnt[val]++;
        else continue;
        occr  = max(occr,cnt[val]);
       }

       for(char c='a'; c<='z';c++){
        if(cnt[c]==occr) cout<< c;
       }
       cout<< "\n";
    }
    return 0;
}
