// Lowercase character to Uppercase conversion

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int no;
    printf("Enter a lowercase character :\n");
    scanf("%c", &ch);
    // no = ch-32; // not portable
    no = toupper(ch);

    printf("Letter in capital  : %c\n", no);

    return 0;
}
