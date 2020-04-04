#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int counter,i,j=0,k=0,n;
    char str[10000];
    char *str1,*str2;
    scanf("%d",&counter);
    for(n=0 ; n<counter ; n++)
    {
        scanf("%s",str);
        if (strlen(str)%2==0)
        {
            str1 = (char*)calloc(strlen(str),sizeof(char));
            str2 = (char*)calloc(strlen(str),sizeof(char));
            j=0,k=0;
            for(i=0;i<strlen(str)/2;i++)
            {
                *(str1+j)=str[2*i];
                *(str2+k)=str[(2*i) + 1];
                j++;
                k++;
            }
            
        }
        else if (strlen(str)%2!=0)
        {
            str1 = (char*)calloc(strlen(str),sizeof(char));
            str2 = (char*)calloc(strlen(str),sizeof(char));
            j=0,k=0;
            for(i=0;i<(strlen(str)+1)/2;i++)
            {
                *(str1+j)=str[2*i];
                *(str2+k)=str[(2*i)+1];
                j++;
                k++;
            }
        } 
        printf("%s %s",str1,str2);
        printf("\n");
        free(str1);
        free(str2);
    }

    return 0;
}
