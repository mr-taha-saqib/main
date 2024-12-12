#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input1.txt", "r");
    FILE *out = fopen("output2.txt", "w");

    char word[50];
    while (fscanf(input, "%s", word) != EOF) {
        int is_non_alpha = 1;
        for (int i = 0; word[i] != '\0'; i++) {
            if (isalpha(word[i])) {
                is_non_alpha = 0;
                break;
            }
        }
        if (is_non_alpha) {
            fprintf(out, "%s", word);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}
