#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,i;
    char *s,ch;
    scanf("%d",&n);
    /* allocate memory block for getting string from the user */
    s=(char*)malloc(sizeof(char)*1000000);

    /* get the string input from the user */
    scanf("%s",s);

    /* get the rotation number */
    scanf("%d",&k);

    /* set the starting index to 0 */
    i=0;

    /* traverse through the string from starting character to End of the string(Null character -'\0') */
    while(*(s+i))
        {

        /* check whether the character is an alphabet */
        if((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z'))
            {

            /* check whether the character is lowercase or uppercase
            based on lowercase or uppercase, set the 'ch' variable to 'a' or 'A' */
            if(*(s+i)>='a' && *(s+i)<='z')
                ch='a';
            else
                ch='A';

            /* to shift the character to exact 'k' rotation */
            *(s+i)=ch+(*(s+i)-ch+k)%26;
        }

        /* update the index value to move the pointer to next character in the string */
        i++;
    }

    /* finally print the updated / rotated string */
    printf("%s",s);

    return 0;
}
