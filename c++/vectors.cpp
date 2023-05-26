// create a vector in cpp program?  
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    std::vector<int> A;
A.reserve(1);        // A: size:0, capacity:1  {[],x}
A.push_back(5);      // A: size:1, capacity:1  {[0]}
A.push_back(1);      // A: size:2, capacity:2  {[0,1]}
A.push_back(10);      // A: size:3, capacity:4  {[0,1,2],x}
A.push_back(3);      // A: size:4, capacity:4  {[0,1,2,3]}
A.push_back(4);      // A: size:5, capacity:8  {[0,1,2,3,4],x,x,x}
for(int i=0;i<A.size();i++)
{
    cout<<A.at(i)<<" ";
}
sort(A.begin(),A.end());
cout<<endl<<"Sorted "<<endl;
for(int i=0;i<A.size();i++)
{
    cout<<A.at(i)<<' ';
}
cout<<endl<<A.size();

    return 0;
}




//Source: https://stackoverflow.com/questions/3167272


