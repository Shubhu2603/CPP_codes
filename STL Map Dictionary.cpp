#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,string> tel;  
    map<string,string>::iterator it;
    int n;
    cin>>n;
    string temp;
    string number;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        cin>>number;
        cin.ignore();
        tel.insert(std::pair<string,string>(temp,number));
    }
    
        string name;
    
    while(getline(cin,name))
    {
        it=tel.find(name);
        if(it==tel.end())
        {
            cout<<"Not found"<<endl;
        }
        else {
            cout<<it->first<<"="<<it->second<<endl;
        }
    }
    return 0;
}