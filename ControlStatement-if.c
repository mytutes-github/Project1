int main()
{

	float salary;
	
	float da=0;
	
	printf("\n Enter the value for Salary: ");
	scanf("%f", &salary);
	
	if(salary<2500)
		da = salary * 0.5;
		
	printf("\n Your Basic Salary is =%f    You DA is =%f", salary, da);
	
	printf("\n\n Your Net Salary is: =%f", salary+da);
		


}

