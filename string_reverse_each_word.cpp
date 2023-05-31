///reverse each word of a sentence maintaining sequence
///This is road
///sihT si daor
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
        cin.ignore();
        string s;
        getline(cin,s);

        s.append(" ");
        int d = s.size();

        int p1=0,p2=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                p2 = i;
                for(int k=p2-1; k>=p1; k--){
                   cout<<s[k];
                }
                p1 = p2+1;
                if(p2+1==d) s.erase(s.size()-1);
                else cout<<" ";
            }
        }

        cout<< "\n";
    }

    return 0;
}
