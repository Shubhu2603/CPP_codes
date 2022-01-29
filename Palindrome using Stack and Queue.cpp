#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    int stack[100], queue[100],top=-1,front=-1,rear=-1;
    public:
    void pushCharacter(int c)
    {
        top++;
        stack[top]=c;
    }
    void enqueueCharacter(int c)
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=c;
    }
    int popCharacter()
    {
        int p=stack[top];
        top--;
        return p;
    }
    int dequeueCharacter()
    {
        int p=queue[front];
        front++;
        return p;
    }
    

};

int main() {