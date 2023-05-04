#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout <<"after swapping 1st number is : "<< a <<"\n" ; 
    cout <<"after swapping 2nd number is : "<< b <<"\n\n";
	return 0;	
}
