#include <iostream>

using namespace std;

typedef int tv [10];
typedef int tv2 [12];

main()
{
	int i=-1,k=0,j=0,o1=3,o2=3,a=0;
	tv n1; 
	n1[0]={2};
	n1[1]={4};
	n1[2]={7};
	n1[3]={8};
	
	tv n2;
	n2[0]={1};
	n2[1]={3};
	n2[2]={5};
	n2[3]={6};
	
	tv2 n;
	
	while(j<=o1 && k<=o2)
	{
		if(n1[j]<n2[k])
		{
			i++;
			n[i] = n1[j];
			j++;
		}else
		{
			i++;
			n[i] = n2[k];
			k++;
		}
	}
		while(j<=o1)
		{
			i++;
			n[i] = n1[j];
			j++;
			
		}
		while(k<=o2)
		{
			i++;
			n[i] = n2[k];
			k++;
		}
	while(a<=i)
	{
		cout<<"En la posicion ["<<a<<"] esta el numero: "<<n[a]<<endl;
		a++;
	}
}
