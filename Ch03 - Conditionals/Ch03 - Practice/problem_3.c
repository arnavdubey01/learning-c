/*
3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab      Tax                     
2.5 – 5.0L       5%                            
5.0L - 10.0L     20%                          
Above 10.0L      30%                    
  
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>

int main(){

    int salary;
    printf("enter your salary: \n"); 
    scanf("%d", &salary); 
    printf("You have entered Rs.%d\n", salary);

    if (salary < 250000){
        printf("No income tax");
    }
    else if (salary >= 250000 && salary < 500000){
        int income_tax = ((salary * 5)/100);
        printf("You have to pay %d as income tax", income_tax);
    }
    else if (salary >= 500000 && salary < 1000000){
        int income_tax = ((salary * 20)/100);
        printf("You have to pay %d as income tax", income_tax);
    }
    else if (salary >= 1000000){
        int income_tax = ((salary * 30)/100);
        printf("You have to pay %d as income tax", income_tax);
    }
   
    return 0;
}

// Works.