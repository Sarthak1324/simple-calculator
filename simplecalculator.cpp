#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	char op;
	float x,y;
	cout<<"\n Enter operation(+,-,*,/,^)";
	cin>>op;
	cout<<"\n Enter numbers:";
	cin>>x>>y;
	switch(op)
	{
		case'+':
		cout<<"\n Answer is="<<x+y<<endl;
		break;
		case'-':
		cout<<"\n Answer is="<<x-y<<endl;
		break;
		case'*':
		cout<<"\n Answer is="<<x*y<<endl;
		break;
		case'/':
		if(y!=0)
		cout<<"\n Answer is="<<x/y<<endl;
		else
		cout<<"\n Cannot divide by zero";
		break;
		case'^':
		cout<<"\n Answer is="<<pow(x,y)<<endl;
		break;
		default:
			cout<<"\n Invalid operation";
	}
	return 0;
}
