#include <stdio.h> 
int main()
{
    int q;
    printf("Enter number input: ");
    scanf("%d",&q);
    switch (q)
    {
        case 1:
        printf("QUESTION 1\n");
        int a,b;
        printf("Enter the amount to be withdrawn: ");
        scanf("%d",&a);
        printf("Enter the balance amount: ");
        scanf("%d",&b);
        if (a<=b)
        {
            printf("The transaction is successful!");
        }
        else
        {
            printf("Insufficient Balance");
        }
        break;

        case 2:
        printf("QUESTION 2\n");
        int dd,pd,bill;
        bill = 400;
        printf("Enter the due date: ");
        scanf("%d",&dd);
        printf("Enter the payment date: ");
        scanf("%d",&pd);
        if (pd>dd)
        {
            printf("The bill amount is: %d",bill+100);
        }
        else {printf("The bill amount is: %d",bill);}
        break;

        case 3:
        printf("QUESTION 3\n");
        float sal;
        float y,u;
        printf("Enter the salaray amount: ");
        scanf("%f",&sal);
        if (sal>50000)
        {
            y=sal+(sal*(10/100.0));
            printf("The final salary is: %.2f",y);
        }
        else
        {
            u=sal+(sal*(5/100.0));
            printf("The final salary is: %.2f",u);
        }

        case 4:
        printf("QUESTION 4\n");
        int f;
        printf("Enter the speed of vehicle: ");
        scanf("%d",&f);
        if (f>80)
        {
            printf("Over Speeding - Fine Applied");
            printf("\nThe amount to be paid: %d",(f-80)*20);
            printf("Rs");
        }
        else
        {
            printf("Within Speed Limit");
        }

        case 5:
        printf("QUESTION 5\n");
        int r;
        printf("Enter the house number: ");
        scanf("%d",&r);
        if (r%2==0)
        {
            printf("Sweet Home");
        }
        else
        {
            printf("Brilliant Home");
        }

        case 6:
        printf("QUESTION 6\n");
        int salary;
        printf("Enter the salary: ");
        scanf("%d",&salary);
        if (salary>25000)
        {
            printf("Elligible loan amount: %d",salary*5);
        }
        else
        {
            printf("Elligible loan amount: %d",0);
        }

        case 7:
        printf("QUESTION 7\n");
        int pass,cpass;
        printf("Enter password [5digits]: ");
        scanf("%d",&pass);
        cpass=12345;
        if (pass==cpass)
        {
            printf("Password Correct");
        }
        else
        {
            printf("Password Incorrect");
        }

        case 8:
        printf("QUESTION 8\n");
        int year;
        printf("Enter the year: ");
        scanf("%d",&year);
        if (year%4==0)
        {
            printf("The year is a leap year");
        }
        else
        {
            printf("The year is not a leap year");
        }

        case 9:
        printf("QUESTION 9\n");
        int age;
        printf("Enter the age: ");
        scanf("%d",&age);
        if (age>18)
        {
            printf("Elligible to vote");
        }
        else
        {
            printf("Not elligible to vote");
            printf("\nYou must wait %d years to vote",18-age);
        }

        case 10:
        printf("QUESTION 10\n");
        int price;
        float h;
        printf("Enter the price amount: ");
        scanf("%d",&price);
        if (price>2000)
        {
            printf("Discount applied");
            h=price-(price*(5/100.0));
            printf("\nThe final amount is: %.2f",h);
        }
        else
        {
            printf("The final amount is: %d",price);
        }
        
}