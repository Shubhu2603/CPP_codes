#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    string temp;
    vector<string> s;
    vector<string> even;
    vector<string> odd;
    
    for(int i=0;i<t;i++)
    {
        cin>>temp;
        s.push_back(temp);
    }
    for(int i=0;i<s.size();i++)
    {
        string e="",o="";
        temp=s[i];
        for(int j=0;j<temp.size();j++)
        {
            
            if(j%2==0)
            {
                e+=temp[j];
            }
            else {
                o+=temp[j];
            }
        }
        even.push_back(e);
        odd.push_back(o);
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<even[i].size();j++)
        {
            temp=even[i];
            cout<<temp[j];   
        }
        cout<<" ";
        for(int j=0;j<odd[i].size();j++)
        {
            temp=odd[i];
            cout<<temp[j];  
        }
        cout<<endl;
    }
    return 0;
}
