#include <iostream>
using namespace std;
int main()
{
	int num,i,sum=0;
	cout<<"\n"<<"Enter the number you want to check";
    cin>>num;
    for(i=1;i<num;i++)
    {
    	if(num%i==0)
    	sum=sum+i;
	}
    if(sum==num)
     cout<<"The entered number is perfect number";
    else if(num<sum)
     cout<<"The entered number is not a perfect number";
    else if(char str[]="num")
     cout<<"invalid input,Enter the valid number";
    else
    cout<<"entered number is not a perfect number";
}
