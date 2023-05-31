 ///substring count in a sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
       string s1,s2;
       getline(cin,s1);
       cin>>s2;
       cin.ignore();

       int l1,l2;
       l1 = s1.size();
       l2 = s2.size();

       int cnt = 0;
       for(int i=0; i<=(l1-l2); i++){
        bool flag = true;
        for(int j=0; j<l2; j++){
            if(s1[i+j] != s2[j]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cnt++;
        }
       }

       cout<< cnt << "\n";


    }

    return 0;
}

