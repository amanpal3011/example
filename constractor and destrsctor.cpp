#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"Parent class Constructor\n";
    }
    
    ~parent()
    {
        cout<<"Parent class Destructor\n";
    }
};

class child : public parent
{

    public:
    child() 
    {
        cout<<"Child class Constructor\n";
    }

    ~ child() 
    {
        cout<<"Child class Destructor\n";
    }
};

int main()
{

    child c;
    
    return 0;
}
