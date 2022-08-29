// time conversion

#include <stdio.h>

int main() {
    int secs, mins, hours;
    
    scanf("%d", &secs);
    
    hours = secs / 3600;
 secs = secs - (hours * 3600);
    
    mins = secs / 60;
 secs = secs - (mins * 60);
    
    printf("%d:%d:%d\n", hours, mins, secs);

return 0;
}