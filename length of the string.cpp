#include<iostream>
using namespace std;
int main()
{
	int i=0;
	char str[30],*ptr;
	cout<<"enter any string ";
	cin>>str;
	ptr=str;
	while(*ptr!=0)
	{
		i++;
		ptr++;
	}
	cout<<"length of the string "<<i;
	return 0;
	}
