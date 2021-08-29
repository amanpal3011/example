#include<iostream>
using namespace std;
inline int cube(int r)
{
	return r*r*r;
	
}

int main()
{
 int r;
 cout<<"enter the value to compute cube";
 cin>>r;
 cout<<"cube of th number"<<cube(r);
 return 0;	
}
