#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'a';
            arr[index]++;
        }
        
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++)
        {
            if(maxi<arr[i])
            {
                ans=i;
                maxi=arr[i];
            }
        }
        char ch=ans+'a';
        return ch;
    }

};
int main()
{
    Solution s1;
    string s="testcases";
    cout<<s1.getMaxOccuringChar(s);
}