/*
 * Author: C. Maxwell Reilly
 * Started: Wednesday, September 20
 * Finished: Thursday, September 21
 */


#include <stdio.h>

#define TEST 0
#define OT 1.5
#define tax .03625

// function prototypes


int
main(void)
{
	char input;
	int id, hours_worked, counter = 0;
	double wage_rate, pay, total_payroll = 0.0, average_payroll, taxes;
	printf("Welcome! This program processes time cards for employees of C. Maxwell Reilly music studio.\n");
	printf("In order to start entering an employee time card, press \"t\" on your keyboard.\n");
	printf("Once you have entered all of your data, press \"q\".\n");
	printf("Enter input >> ");
	scanf(" %c", &input);
	while (input != 'q')
	{
		if (input == 't')
		{
			printf("Enter employee id >> ");
			scanf("%d", &id);
			printf("Enter hours worked >> ");
			scanf("%d", &hours_worked);
			printf("Enter wage rate >> ");
			scanf("%lf", &wage_rate);
			if (hours_worked > 0 && hours_worked <= 40)
			{
				pay = wage_rate * hours_worked;
				taxes = pay * tax;
				
			} else if (hours_worked > 40)
			{
				pay = (40 * wage_rate) + ((hours_worked - 40) * wage_rate * OT);
				taxes = pay * tax;
			} else
			{
				printf("Invalid hours");
			}
			total_payroll += pay;
			counter ++;
			printf("Employee # %d pay = $%.2lf\n", id, pay - taxes);
			printf("Total payroll = $%.2lf\n", total_payroll);

			printf("Enter input >> ");
			scanf(" %c", &input);
		} else
		{
			printf("Invalid input. Try again! \"t\" for a new timecard, \"q\" for quit.\n");
			printf("Enter input >> ");
			scanf(" %c", &input);
		}
	}
	average_payroll = total_payroll / counter;
	printf("Session complete! Total payroll = $%.2lf. Average payroll = $%.2lf\n", total_payroll, average_payroll);
	return 0;
}

