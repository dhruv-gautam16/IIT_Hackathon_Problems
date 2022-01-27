#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter n \n");
    int n;
    scanf("%d", &n);
    char s[n];
    printf("\nenter string \n");
    scanf("\n%[^\n]", s);
    char ans='y';
    printf("\nstring: %s",s);
    int counter = 0;
    while(ans == 'y'){

        char pat[n];
        printf("\nenter pattern ");
        scanf("\n%[^\n]", pat);
        printf("\npattern: %s", pat);
       
        int i, j, l1, l2;
        int counter = 0;

        l1 = strlen(s);
        l2 = strlen(pat);

        for(i = 0; i < l1 - 1; i++) {
            if(strstr(s + i, pat) == s + i) {
                printf("\nposition: %d", i+1);
                counter++;
                i = i + l2 -1; //to cover up the pattern length for next checking
            }
        }
       
        if(counter!=0)
            printf("\noccurence of %s is:  %d ", pat, counter);
        else
            printf("-1");
           
        printf("\ndo you want to check more patterns?y/n \n");
        char choice;
       
        scanf("\n%c", &choice);
        if(choice == 'n'){
            ans=choice;
        }
    }
}