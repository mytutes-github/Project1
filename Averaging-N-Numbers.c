int main()
{

	int n;
	int i;
	float sum=0;
	float in;
	
	printf("\n How many Numbers?:");
	scanf("%d", &n);
	
	
	printf("\n Enter the number one by one:");
	
	for(i=0; i<=n; i++)
	{
		scanf("%f", &in);
		sum = sum + in;
	
	}	 
	
	printf("\nSum= %f    Average= %f", sum, sum/n);

}

