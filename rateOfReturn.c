/**
*Author: Connor Luchsinger
*
*This program finds the rate of return of an investment based on an initial amount,
* final amount, and the amount of years, months and days since the initial investment
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv)
{
    /**
     * get years months days
     * convert to just years
     *
     * output = input * (annual rate ^ years)
     * output/input = annual rate ^ years
     * see worksheet for more details
     *
     * use
     * (F/I)^(1/Y)=R
     * F=Final
     * I=Initial
     * Y=Year
     * R=Rate of Return
     **/

  double year;
  double week;
  double day;
  double final;
  double initial;
  double rate;

  printf("You will be prompted to enter the Years, Months (1-12), and Days(0-31)\n");
  printf("since an investment. Then after entering the initial and final value\n");
  printf("of the investment, you will receive the rate of return \n");

  printf("Please enter the years since the investment");
  scanf("%lf", &year);
  printf("Please enter the weeks since the investment");
  scanf("%lf", &week);
  printf("Please enter the days since the investment");
  scanf("%lf", &day);
  printf("Please enter the initial value of the investment");
  scanf("%lf", &initial);
  printf("Please enter the final value of the investment");
  scanf("%lf", &final);

  year = (year+(((week*7)+day)/365));
  rate = pow((final/initial),(1/year));
  rate = (rate - 1);
  rate = (rate*100);

  printf("Initial Value: %10.2f \n", initial);
  printf("Final Value: %10.2f \n", final);
  printf("Years %10.5f \n", year);
  printf("Annualized Rate of Return: %10.2f %\n", rate);

  return 0;
}
