#include <stdio.h>

int main() {
  float vol = 0, resis = 0, curr = 0;
  printf("Enter the value of voltage:\n");
  scanf("%f", &vol);
  printf("Enter the value of current:\n");
  scanf("%f", &curr);
  resis =  vol / curr;

  printf("The value of resistance of this: %fohm", curr);
  return 0;
}
  
