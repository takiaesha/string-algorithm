#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    string s;
    cin>>s;
    cout<< "Size of string = "<< s.size() << "\n";
    cout<< s << endl;

    sort(s.begin(),s.end());
    cout<< "After sorting : ";
    cout<< s << "\n";


    reverse(s.begin(),s.end());
    cout<< "After reverse : "<<s << "\n";

    //s = takia
    string ans = s.substr(0,3);  /// 0 theke sure kore total 3ta character
    cout<< ans << endl;///tki
    string ans1 = s.substr(2,3); /// 0 theke sure kore total 3ta charcter
    cout<< ans1 << "\n"; ///kia

    cin.ignore();

    //input with space
    string s1;
    getline(cin,s1);
    cout<< s1 << "\n";

    //toupper
    for(int i=0; i<s1.size(); i++){
        char ch = toupper(s1[i]);
        cout<<  ch;
    } cout<< "\n";

    //tolower
    for(int i=0; i<s1.size(); i++){
        char ch = tolower(s1[i]);
        cout<< ch;
    }  cout<< "\n";


    ///istringstream-from sentence print word
    istringstream iss(s1);
    string word;

    while(iss>>word) cout<< word << "\n";

    //erase()
    s1.erase(s1.begin()+0); /// first char delete
    cout<< s1 << "\n";
    s1.erase(s1.begin()+3);  ///4th char delete
    cout<< s1 << endl;


    ///pop_back()
    cout<< "After pop_back : ";
    s1.pop_back();
    cout<<s1 << "\n";

    ///push_back()
    s1.push_back('^');
    cout<< s1 << endl;

    return 0;

}
