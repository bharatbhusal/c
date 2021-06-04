#include <stdio.h> 
#include <limits.h>
int main()
{
    int years;
    int months;
    int weeks;
    int days;

    printf("Enter the days: \n");
    scanf("%d", &days);
    years = days/365;
    printf("Year: %d\n", years);
    months = (days%365)/30;
    printf("Months: %d\n", months);
    weeks = ((days%365)%30)/7;
    printf("Weeks: %d\n", weeks);
    days = (((days%365)%30)%7);
    printf("Days: %d\n", days);
    return 0;
}