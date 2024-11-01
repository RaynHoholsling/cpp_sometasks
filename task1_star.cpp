#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin>>a;
	cin>>b;
	for(int i=0;i<a;i++)
	{
		
		for (int j=0;j<b-1;j++)
		{
			cout<<"*";
		}
		cout<<"*"<<endl;
	}
}

