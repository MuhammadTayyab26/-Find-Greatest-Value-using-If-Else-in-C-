#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter value of a :";
	cin >> a;
	
	cout << "Enter value of b :";
	cin >> b;
	
    cout << "Enter value of c :";
	cin >> c;
	
	if(a>b&&c)
	{

		cout << "a is greatest";
	}
	
	 if(b>c&&a)
	 {
	 
	 	cout<<"b is greatest";
	
     }
    
	else
	{
		cout <<"c is greatest";
	}
}
