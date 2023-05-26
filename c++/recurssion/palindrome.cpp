#include<iostream>
using namespace std;
bool check(string s,int i, int j)
{
    if(i>=j)
    return 1;
    if(s[i]!=s[j])
    return false;
    return check(s,i+1,j-1);
    // return 1;
}
int main()
{
    string s= "MADAM";
    cout<<check(s,0,s.size()-1);
    return 0;
}