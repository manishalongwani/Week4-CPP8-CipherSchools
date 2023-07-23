#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int b = 0;
	
	try{
		if(b==0) throw 0;
		// unsure logic or code here
		cout<<a/b<<endl;
	}
	
	catch(int e)
	{
		cout<<e<<"thrown from the try statement";<<endl;
	}
	
	catch(...)
	{
		cout<<"thrown from the try statement";<<endl;
		throw;
	}
	
	
	
	cout<<"program ended successfully";
	
	return 0;
}

