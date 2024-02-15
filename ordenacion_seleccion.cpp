#include <iostream>

using namespace std;

typedef int tv [10];

main()
{
	tv n{8,1,5,3,4,6,2,7};
	int i,o=7,j=1,a,k=0;
	for(i=0;i<=o-1;i++)
	{
		for(j=i+1;j<=o;j++)
		{
			if(n[i]>n[j])
			{
				a=n[i];
				n[i]=n[j];
				n[j]=a;
			}	
		}
		
	}
	
	while(k<=o)
	{
		cout<<"En el indice ["<<k<<"] esta el numero: "<<n[k]<<endl;
		k++;
	}
}
