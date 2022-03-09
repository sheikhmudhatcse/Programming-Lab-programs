#include<stdio.h>
main()
{
	int n, a[100] ,i ,j ,s  ;
	printf("enter the size of the array = ") ;
	scanf("%d",&n) ;
	printf("enter the the values of the array");
	for (i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<i;j++)
		{printf("%d\n",a[j]);}
		
		
	printf("enter the element u want to find  \n ");
	scanf("%d",&s);
	
	for(i=0;i<n;i++)
		{
		
			if(a[i]==s)
			{
			
			printf("element is found \n ");
		
			}
		}
	printf("element not found");	
	
		
}
