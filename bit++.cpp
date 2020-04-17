#include<iostream>
using namespace std;
int main()
{
	int x=0,i=0,n;
	char a[10];
	cin>>n;
	while(i<n)
	{
		cin>>a;
		if((a[0]=='X'&&a[1]=='+'&&a[2]=='+')||(a[0]=='+'&&a[1]=='+'&&a[2]=='X'))
		x++;
		else
		x--;
		i++;
	}
	cout<<x<<endl;
	
}
