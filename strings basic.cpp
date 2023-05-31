#include<bits/stdc++.h>
using namespace std;
int main()
{
    string greeting = "hello";
    string c_greeting = greeting +" there";
    c_greeting += " !";

    cout<< greeting <<endl;
    cout<< c_greeting <<endl;
    cout<< c_greeting.length() <<endl;  ///c_greeting.size()

///string adding
    string a="Love for ";
    a.append(" nature");
    cout<< a <<endl;

    /* string p;
     cin>>p;
     string q;
     cin>>q; ///need to use getline here
     cout<<p[0]<<" "<<p[1]<<endl;
     cout<< p<<endl;
     cout<< q <<endl;*/

    ///string insert
    string e ="hello";
    e.insert(3,"aaaabbbbbccccccddd   ");

    cout<< e <<endl;

    ///string erase
    string s="lovebook";
    cout<< s.size() <<endl;
    s.erase(3,1);
    cout<< s <<endl;
    cout<< s.size()<<endl;

    ///removing last letter
    string q="love for nature";
    q.erase(q.size()-1) ;
    cout<< q <<endl;
    ///or,
    string m="pagolsagol";

    m.pop_back();
    cout<< m << endl;

///string replacement
    string b="Love for nature";
    b.replace(9,6,"Bookish");
    cout<< b <<endl;




    return 0;
}
