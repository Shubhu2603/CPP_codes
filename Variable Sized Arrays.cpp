#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q,i,k,a,b,num;
    cin>>n>>q;
    int *ar[n];
    k=0;
    while(k<n)
    {
        cin>>num;
        ar[k]=new int[num];
        for(i=0;i<num;i++)
        {
            cin>>ar[k][i];
        }
        k++;
    }
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<ar[a][b]<<endl;
    }
    return 0;
}
