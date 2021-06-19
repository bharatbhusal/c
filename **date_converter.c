#include <stdio.h>
int main()
{
    int ad_year, ad_month, ad_day, total_days, converted_days, lead_days, bs_year, bs_month, bs_day;
    lead_days = (56 * 365) + (8 * 30) + 21;
    printf("Enter the date in AD(yyyy-mm-dd): ");
    scanf("%d-%d-%d", &ad_year, &ad_month, &ad_day);
    total_days = (ad_year * 365) + (ad_month * 30) + ad_day;
    converted_days = total_days + lead_days;
    bs_year = converted_days / 365;
    converted_days = converted_days % 365;
    bs_month = converted_days / 30;
    converted_days = converted_days % 30;
    bs_day = converted_days;
    printf("The date in BS is: %d-%d-%d\n", bs_year, bs_month, bs_day);
}