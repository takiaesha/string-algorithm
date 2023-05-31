#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string s1,s2;
        cin>>s1>>s2;

        int indx;
        int l1 = s1.size();
        int l2 = s2.size();

        for(int i=0; i<=l1-l2; i++){
            bool flag = true; //true substring paisi
            for(int j=0; j<l2; j++){
                if(s1[i+j] != s2[j]){
                    flag = false;
                    break;
                }
            }
            if(flag==true){
                indx = i;
                break;
            }
        }

        cout<< indx << "\n";
    }
    return 0;
}
