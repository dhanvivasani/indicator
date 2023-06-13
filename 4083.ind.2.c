#include<stdio.h>

 main()
 
 {
 	
    int arr[100],n;
     
     printf("enter the array size");
     scanf("%d",&n);
     int i;
     for(i=0;i<n;i++)
     {
     	printf("a[%d]=",i);
     	scanf("%d",&arr[i]);
     	
	 }
	 
	 int *p1[100];
	
	 
	 for(i=0;i<n;i++)
	 { p1[i] = &arr[i];
	 	printf("%u = %d\n",p1+i,*(p1+i));
	 }
}
