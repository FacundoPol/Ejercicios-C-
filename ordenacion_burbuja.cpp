#include <iostream>

using namespace std;

typedef int tv [10];

main()
{
	tv n{9,2,3,7,5,1};
	int i,a,o=5,j;
	bool c=false;
	
	while(c==false)
	{
		c=true;
		for(i=0;i<=o;i++)
		{
			if(n[i]>n[i+1])
			{
				a=n[i+1];
				n[i+1]=n[i];
				n[i]=a;
				c=false;
			}
			
		}
	}
	
	for(j=0;j<=o;j++)
	{
		cout<<"En el indice ["<<j<<"] esta el numero: "<<n[j]<<endl;
	}
}
