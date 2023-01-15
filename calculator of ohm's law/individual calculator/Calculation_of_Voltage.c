#include <stdio.h>
// This is calculating for voltage
int main() {
  float vol = 0, resis = 0, curr = 0;
  printf("Enter the value of resistance:\n");
  scanf("%f", &resis);
  printf("Enter the value of current:\n");
  scanf("%f", &curr);
  vol =  resis * curr;

  printf("The value of voltage of this: %fV", vol);
  return 0;
}
