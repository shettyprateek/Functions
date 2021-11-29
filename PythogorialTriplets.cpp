#include<iostream>
using namespace std;

bool pt(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
        return true;
    else    
        return false;
}

    
int main()
{
    int a,b,c;
    cout<<"Enter the number";
    cin>>a>>b>>c;
    if(pt(a,b,c))
    {
        cout<<"Pythogorial Triplets";
    }
    else
        cout<<"Not Pythogorial Triplets";
    return 0;
}