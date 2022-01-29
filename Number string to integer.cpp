#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

void parseInts(string str) {
    stringstream ss(str);
    string s;
    while(getline(ss,s,','))
    {
        cout<<stoi(s)<<endl;     
    }
}

int main() {
    string str;
    cin >> str;
    parseInts(str);
    return 0;
}