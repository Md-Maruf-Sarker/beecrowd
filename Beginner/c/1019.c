#include <stdio.h>

int main(){
  int seconds, minutes, hours;
  scanf("%d", &seconds);

  hours = seconds / 3600;
  seconds = seconds - (hours * 3600);
  minutes = seconds / 60;
  seconds = seconds - (minutes * 60);

  printf("%d:%d:%d\n", hours, minutes, seconds);
  return 0;
}