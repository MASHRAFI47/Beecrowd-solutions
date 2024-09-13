#include <stdio.h>

int main()
{

    float salary, salaryIncreaseRate, rate, newSalary;
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400)
    {
        rate = 15;
        salaryIncreaseRate = salary * ((float)rate / 100);
        newSalary = salary + salaryIncreaseRate;
    }
    else if (salary > 400 && salary <= 800)
    {
        rate = 12;
        salaryIncreaseRate = salary * ((float)rate / 100);
        newSalary = salary + salaryIncreaseRate;
    }
    else if (salary > 800 && salary <= 1200)
    {
        rate = 10;
        salaryIncreaseRate = salary * ((float)rate / 100);
        newSalary = salary + salaryIncreaseRate;
    }
    else if (salary > 1200 && salary <= 2000)
    {
        rate = 7;
        salaryIncreaseRate = salary * ((float)rate / 100);
        newSalary = salary + salaryIncreaseRate;
    }
    else
    {
        rate = 4;
        salaryIncreaseRate = salary * ((float)rate / 100);
        newSalary = salary + salaryIncreaseRate;
    }

    printf("Novo salario: %.2f\n", newSalary);
    printf("Reajuste ganho: %.2f\n", salaryIncreaseRate);
    printf("Em percentual: %.f %\n", rate);

    return 0;
}