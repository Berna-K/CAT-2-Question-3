#include <iostream>
using namespace std;

//check if number is even
int max(int number1, int number2, int number3)
{
    int maxnumber;

    if(number1> number2 && number1> number3)
    {
        maxnumber = number1;
    }
    else if(number2>number1 && number2>number3)
    {
        maxnumber=number2;
    }
    else
    {
        maxnumber=number3;
    }
    return maxnumber;
}

int main()
{
int number1;
int number2;
int number3;

cout<<"Please enter three numbers"<<endl;

cin>>number1;
cin>>number2;
cin>>number3;

cout<<"The greatest number is "<<max(number1,number2,number3)<<endl;

return 0;
}