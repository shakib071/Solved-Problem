#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)//strib=ngStream data type reference hisebe dite hoy

{
    string word;
    if(ss>>word)
    {
        
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}