#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *in = fopen("input1.txt", "r");
    FILE *out = fopen("output3.txt", "w");

    char word[50];
    while (fscanf(input, "%s", word) != EOF) {
        int has_vowel = 0;
        for (int i = 0; word[i] != '\0'; i++) {
            if (strchr("aeiouAEIOU", word[i])) {
                has_vowel = 1;
                break;
            }
        }
        if (has_vowel) {
            int len = strlen(word);
            for (int i = 0; i < len / 2; i++) {
                char temp = word[i];
                word[i] = word[len - i - 1];
                word[len - i - 1] = temp;
            }
        }
        fprintf(out, "%s ",word);
    }

    fclose(in);
    fclose(out);
    return 0;
}
