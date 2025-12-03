#include <stdio.h>

struct Employee{
    char name[30];
    float basic_pay;
    float gross_salary;
};

int main(){
    struct Employee emp[100];
    int i;

    for(i = 0; i < 100; i++){
        printf("\nEnter employee %02d name : ", i+1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay : ");
        scanf("%f", &emp[i].basic_pay);

        float da = 0.52 * emp[i].basic_pay;
        emp[i].gross_salary = emp[i].basic_pay + da;
    }

    printf("\n--- Employee Salary Details ---\n");
    for(i = 0; i < 100; i++){
        printf("%s - Gross Salary: %0.2f\n", emp[i].name, emp[i].gross_salary);
    }

    return 0;
}
