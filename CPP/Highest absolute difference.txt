#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> ele)
    {
        elements=ele;
    }
    void computeDifference()
    {
        maximumDifference=0;
        int def;
        for(int i=0;i<elements.size();i++)
        {
            for(int j=0;j<elements.size();j++)
            {
                
                def=elements[i]-elements[j];
                if(def<0)
                {
                    def*=-1;
                }
                if(def>maximumDifference)
                {
                    maximumDifference=def;
                }
            }
        }
    }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}