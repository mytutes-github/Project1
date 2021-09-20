int main()
{

	float salary;
	char grade;
	
	printf("\n enter Grade:");
	grade = getchar();
	
	printf("\n Enter Salary: ");
	scanf("%f", &salary);
	
	
	if(grade=='A' || grade=='B' || grade=='C')
		salary = salary * 1.25;
	else
		salary = salary * 1.15;
		
		
	printf("\n Revused salary is:=%f", salary);	    
	
}

