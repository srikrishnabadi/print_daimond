#include<iostream>
using namespace std;
int main()
{
	int n, c, k, s=1;
    cout<<"Enter the number : ";
    cin>>n;
    s=n-1;
    for (k=1; k<=n; k++)
    {
	for(c=1; c<=s; c++)
	{
		cout<<" ";
	}
	s--;
	for(c=1; c<=(2*k-1); c++)
	{
		cout<<"*";
	}
	cout<<"\n";
    }
    s=1;
    for(k=1; k<=(n-1); k++)
    {
	for(c=1; c<=s; c++)
	{
		cout<<" ";
	}
	s++;
	for(c=1 ; c<=(2*(n-k)-1); c++)
	{
		cout<<"*";
	}
	cout<<"\n";
    }
	return 0;
}
