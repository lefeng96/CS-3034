#include <stdio.h>

int main(void)
{
  int age = 22;
  float gpa = 3.5;
    printf("Johnensony is %d years old and has a GPA of %.02f. \n",age,gpa);
		/* print out a message */
  int const pi = 3.14;
  float radius = 42.6;
  float circumfrence = pi*2*radius;
  printf("Circumfrence is %f. \n", circumfrence );

  enum weather { RAIN, WIND, SUNSHINE};
  enum weather curr_weather= RAIN;

  switch(curr_weather){
    case RAIN: printf("Wear a rainbow\n");
    break;
    case WIND: printf("Wear a skirt\n");
    break;
    case SUNSHINE: printf("Bring some water\n");
    break;
  }
      return 0;

}
