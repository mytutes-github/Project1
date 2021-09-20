int main()

{

	float p, r, i, n, f;

	printf("\nEnter Principle Amount : ");
	scanf("%f", &p);
	
	printf("\nEnter Rate of Interest  : ");
	scanf("%f", &r);
	
	printf("\nEnter Tenure (In Years) : ");
	scanf ("%f", &n);
	 
	i = r/100;
	f = p*pow(1+i, n);

	printf("\nCoumpounded Value=%f", f);

}

