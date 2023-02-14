#include<iostream>
using namespace std;

//Implement the class Box 
class Box {
private:
    int l;
    int b;
    int h;
public:
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    
    Box (const Box& B) { 
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength() {
        return l;
    }
    
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    
    long long CalculateVolume() {
        return l*b*h;
    }
    
    // An overloaded less than operator '<' that takes a reference to 
    // another Box object as an argument and compares the dimensions of the current Box object 
    // with that of the passed Box object, 
    // and returns true if the current Box is less than the passed Box based on their dimensions.

    bool operator<(Box &B)
    {
        if (l < B.l) // comparing length of given box object to the length of the passed box object
        {
            return true;
        }
        else if (l == B.l)
        {
            if (b < B.b)
            {
                return true;
            }
            else if (b == B.b)
            {
                if (h < B.h)
                {
                return true;
                }
            }
        }
        return false;
    }
};

ostream &operator<<(ostream &out, Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}; 


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