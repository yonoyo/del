#include<stdio.h>
#include<string.h>
int main(){
    char a[]="asddfgdefdf";
    char input;
    int j=0 ,i=0;
    int length;
    length=strlen(a);
    printf("%s\n",a);
    scanf("%c",&input);
    while(a[i]!='\0'){
        if(a[i]!=input){
            a[j++]=a[i++];
        }
        else i++;
    }
    a[j]='\0';
    printf("%s\n",a);
    return 0;
}
