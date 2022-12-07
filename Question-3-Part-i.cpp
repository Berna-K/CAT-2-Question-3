#include <iostream>
using namespace std;

//check if number is even
bool checkEvent(int number)
{
    if(number%2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
int number;
cout<<"please enter a number"<<endl;
cin>>number;

if(checkEvent(number)==true)
{    
cout<<"The number is Even"<<endl;
}else{
cout<<"The number is Odd"<<endl;
}

return 0;
}