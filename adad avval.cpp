#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int x;
	int z = 0;
	int p;	
	cout<<"please enter a number: ";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			z++;
			}	
	}	
	if(z == 2)
	{
		cout<<"this number is a prime!!!!!\a";
	}
	else
	{
		cout<<"this number is a composite!!!!\a";
	}
	getch();
	return 0;
}