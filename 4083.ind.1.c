swap(int *n1,int *n2)

{
	int *temp;
	temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
     
     printf(" swaping value A = %d\n",*n1);
	 printf(" swaping value B = %d\n",*n2);
     
}

main()

{
	
	int a,b;
	a=10;
	b=20;
	swap(&a,&b);
}
