#include <stdio.h>

int main() {
  float vol = 0, resis = 0, curr = 0;
  printf("Enter the value of resistance:\n");
  scanf("%f", &resis);
  printf("Enter the value of voltage:\n");
  scanf("%f", &vol);
  curr =  vol / resis;

  printf("The value of current of this: %fA", curr);
  return 0;
}
  
