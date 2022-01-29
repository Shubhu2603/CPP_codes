/*
There is a string, s, of lowercase English letters that is repeated infinitely many times. Given an integer, n, find and print the number of letter a's in the first n letters of the infinite string.
*/


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


long repeatedString(string s, long n) {
    size_t index=0,count=0;
    int size=s.size();
    int extra=(n%s.size());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    size_t div=n/s.size();
    count*=div;
    if(extra>0)
    {
        for(int i=0;i<extra;i++)
        {
            if(s[i]=='a')
                count++;
        }
    }
    return count; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

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
