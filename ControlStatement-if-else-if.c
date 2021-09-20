int main()
{

	float salary;
	char grade;
	
	printf("\nEnter the value for Grade: ");
	grade = getchar();
	
	printf("\nEnter the value for Salary:");
	scanf("%f", &salary);
		
	if(grade=='A')
		salary *= 1.25;
	else if(grade=='B')
		salary *= 1.22;
	else if(grade=='C')
		salary *= 1.18;
	else
		salary *= 1.15;
		

	printf("\nRevised Salary is =%f", salary);




}

