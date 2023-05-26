#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include<map>

using namespace std;

int main()
{
    int v,w;
    cin>>v>>w;
    int diff=w-(2*v);
    int f=diff/2;
    int t=v-f;
    cout<<f<<endl<<t;
    return 0;
}
