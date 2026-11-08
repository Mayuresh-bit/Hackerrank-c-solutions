#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    // Read single character
    scanf("%c", &ch);

    // Read single word string
    scanf("%s", s);

    // Clear buffer newline and read full sentence
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
