
/*
Given a base-10 integer,n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    vector<int> number;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    while(n>0)
    {
        if(n%2==0)
        {
            number.push_back(0);
        }
    else
        {
            number.push_back(1);
        }
        n=n/2;
    }
    int count=0,prev,curr,max=0;
    for(int i=0;i<number.size();i++)
    {
        if(number[i]==0)
        {
            count=0;
        }
        else {
            count++;
        }
        if(max<count)
        {
            max=count;
        }
    }
    cout<<max;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
