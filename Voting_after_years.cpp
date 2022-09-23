#include <iostream>

using namespace std;
int main() 
{
	int age;
	
	cout<<"Enter your age:";
	cin>>age;
	if (age>=18)
	
	   cout<<"The person is elligible for voting"<<endl;
	else if(age<18)
	   cout<<"you are not elligible for voting"<<"\nand"<<"\n"<<18-age <<" years left to vote";
	else
       cout<<"invalid input";
    
}
