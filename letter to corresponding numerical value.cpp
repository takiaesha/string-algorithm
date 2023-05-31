///A-1,B-2,C-3 ---> 65 to 90
///a-1,b-2,c-3 ---> 97 to 122
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                cout<< s[i]-64;
            }else cout<< s[i]-96;
        }
        cout<< "\n";
    }

    return 0;

}
