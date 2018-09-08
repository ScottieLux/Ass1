/**
*Author: Connor Luchsinger
*
*This Program Uses Snell's Law to Find the Angle That light Enters Water
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv)
{
  double n1;
  double n2;
  double a1;
  double a1r;
  double temp;
  double a2;
  double pi;

  pi = 3.1415;
  n1 = 1;
  printf("Please Enter The Angle Of Incidence ");
  scanf("%lf", &a1);
  printf("Please Enter The Index Of Refraction ");
  scanf("%lf", &n2);

  a1r = (a1*(pi/180));

  temp = (sin(a1r));
  temp = (temp/n2);
  a2 = (asin(temp));

  a2 = a2/(pi/180);

  printf("Angle of incidence: %10.3f degrees\n", a1);
  printf("Index of refraction: %10.3f \n", n2);
  printf("Angle of refraction: %10.2f degrees\n", a2);

  return 0;
}
