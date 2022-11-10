#include <stdio.h>
int main(void) {
  int n;
  float sum = 0;
  float num;
  float avreg;
  float min;
  float max;
  printf("Enter the Number of mark : ");
  scanf("%d",&n);
  for(int i = 1; i <= n;i++)
    {
      printf("Enter the %d mark : ",i);
      scanf("%f",&num);
      sum = sum + num;
      
      if(num >= max)
      {
        max = num;
      }
      else{
        min = num;
      }
    }
  avreg = sum / n;
  printf("The Sum Of Marks = %.2f\n",sum);
  printf("The Average Of Marks = %.2f\n",avreg);
  printf("The Max Marks = %.2f\n",max);
  printf("The Min Marks = %.2f\n",min);
  
  return 0;
}
