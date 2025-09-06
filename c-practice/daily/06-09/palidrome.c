#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int n=strlen(str),flag=1;
    for(int i=0;i<n/2;i++)
        if(str[i]!=str[n-i-1]) flag=0;
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

