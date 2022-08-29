// salary with bonus

#include <stdio.h>

int main() {
    string name;
    double fixed_salary, total_sale, final_salary;

    getline(cin, name);
    scanf("%lf %lf", &fixed_salary, &total_sale);

    final_salary = fixed_salary + ((total_sale * 15) / 100);

    printf("TOTAL = R$ %.2lf\n", final_salary);

return 0;
}