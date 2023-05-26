#include<iostream>
using namespace std;

class Solution {
    bool isvalid(char c)
    {
        if((c>='a'&&c<='z')||(c>='0'&&c<='9')||(c>='A'&&c<='Z'))
        {
            return 1;
        }
        return 0;
    }
    bool palindrome(string s)
    {
        int s1=0,e=s.length()-1;
        while(s1<e)
        {
            if(s[s1]!=s[e])
            {
                return false;
            }
            else
            {
                s1++;
                e--;
            }

        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(isvalid(s[i]))
            {
                // cout<<s[i];
                str.push_back(s[i]);
            }
        }
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
        return palindrome(str);

    }
};
int main()
{
    Solution s1;
    string s = "N,i,T,IN";
    cout<<s1.isPalindrome(s);
}
