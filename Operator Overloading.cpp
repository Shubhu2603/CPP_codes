#include<bits/stdc++.h>

using namespace std;

class Box{
public:    
int l,b,h;

// The class should have the following functions : 
Box()
{
    l=0;
    b=0;
    h=0;
}

Box(int q,int w,int e)
{
    l=q;
    b=w;
    h=e;
}
Box(const Box &B)
{
    l=B.l;
    b=B.b;
    h=B.h;
}
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

int getLength()
{
    return l;
}
// int getLength(); // Return box's length
int getBreadth()
{
    return b;
}
// int getBreadth (); // Return box's breadth
int getHeight()
{
    return h;
}
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
long long CalculateVolume()
{   
    return (long long)(b)*(l*h);
}

//Overload operator < as specified
//bool operator<(Box& b)
bool operator<(Box& B)
{
    bool less;
    if(l<B.l)
    {
        less=true;
    }
    else if(l==B.l && b<B.b)
    {
        less=true;
    }
    else if(h<B.h  && b==B.b && l==B.l){
    
        less=true;
    }
    else {
        less=false;
    }
    return less;
}
friend ostream& operator <<(ostream& out, Box& B);
};
//Overload operator << as specified
ostream& operator <<(ostream& out, Box& B)
{
    out<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}