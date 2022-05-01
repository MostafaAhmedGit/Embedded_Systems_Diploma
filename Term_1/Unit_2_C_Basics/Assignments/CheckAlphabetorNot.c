/*
 * CheckAlphabetorNot.c
 *
 *  Created on: May 1, 2022
 *      Author: JUMBO
 */
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &c);

    if (c >= 'A' && c <= 'z')
        printf("%c is an alphabet", c);
    return 0;
}
