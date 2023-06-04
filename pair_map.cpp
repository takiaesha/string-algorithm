///string s, store pairwise character in a map
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        string s;
        cin>>n>>s;

        //map<string,int> mp;

//        for(int i=0; i<n-1; i++){
//            string p = "";
//            p += s[i];
//            p += s[i+1];
//            mp[p]++;
//        }
//
//        for(auto it=mp.begin(); it!=mp.end(); it++){
//            cout<< it->first<< " "<< it->second << "\n";
//        }

        map<pair<char,char>,int> m;
        for(int i=0; i<n; i++){
            m[{s[i],s[i+1]}]++;
        }

        for(auto it=m.begin(); it!=m.end(); it++){
            cout<< it->first.first << it->first.second << " "<< it->second<<endl;
        }

    }
    return 0;
}
