#include<iostream>
#include<cstring>
using namespace std;
class student{
	public:
		string name,addr;
		int age;
		
		student()
		{
			name="unknown";
			addr="-";
			age=0;
		}
		void setinfo(string n, int ag)
		{
			getline(cin,name);
			cin>> age;
		}
		void setinfo(string n, string a, int ag)
		{
			getline(cin,name);
			getline(cin,addr);
			cin>> age;
		}
		void getinfo(string n, int ag)
		{
			cout << "Name: "<< name<<endl;
			cout<< "age: "<< age<<endl;
		}
		void getinfo(string n, string a, int ag)
		{
			cout<< "name: "<< name<< endl;
			cout << "Age: "<< age<< endl;
			cout << "Address: "<< addr<< endl;
		}
};
