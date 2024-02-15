#include <iostream>

using namespace std;

typedef int tv [10];

main()
{
	tv n{8,1,5,3,4,6,2,7};
	int i,j,o=7,a,k;
	
	for(i=1;i<=o;i++)
	{
		a=n[i];
		j=i-1;
		while(j>=0 && a<n[j])
		{
			n[j+1]=n[j];
			j--;
		}
		n[j+1]=a;
	}
	
	for(k=0;k<=o;k++)
	{
		cout<<"En la posicion ["<<k<<"] esta el numero: "<<n[k]<<endl;
	}
}
