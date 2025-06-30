#include <stdio.h>
#include <string.h>

void hammer(char x, char y, char w) {
    //repeadtly read and write into x and w(physical memory avoiding cache) 
    char new_x = '1';
    memcpy(&x, &new_x, sizeof(char));
    printf("New value of x = %c", new_x);
}


void row_hammer(x, y, w) { 

    for(int i = 0;i < 1000;i++) {
        hammer(x, y, w);

    }

}


int main() {
    char x = '1';
    char y = '2';
    char w = '3';
    
    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &w);
    
    //goal is to rewrite or read the value at y

    hammer(x, y, w);

    return 0;
}


