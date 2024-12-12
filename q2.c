#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr, *fptr1;
    fptr = fopen("input1.txt", "r");
    fptr1 = fopen("output1.txt", "w");

    char c;
    while ((c = getc(fptr)) != EOF) {
        if (c >= '0' && c <= '9') {
            fputc(c, fptr1);
        }
    }
    
    fclose(fptr);
    fclose(fptr1);
    
    return 0;
}
