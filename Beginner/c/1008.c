// salary

#include <stdio.h>

int main() {
    int emp_num, work_hour, num;
    float amountperhour, salary;
    
    scanf("%d %d %f",&emp_num,&work_hour,&amountperhour);
    
    num = emp_num;
    salary = work_hour * amountperhour;
    
    printf("NUMBER = %d\n",emp_num);
    printf("SALARY = U$ %.2f\n",salary);

return 0;
}