#include<stdio.h>
#include<string.h>

void slice(char arr[]);

int main(){

    char slc[100];
    gets(slc);
    
    slice(slc);

    return 0 ;
}

void slice(char arr[]){
    int n,m;
    printf("Enter n no. : ");
    scanf("%d",&n);
    printf("Enter m no. : ");
    scanf("%d",&m);

    char new[100];

    int j = 0 ;
    for(int i = n ;i<=m;i++,j++){
        new[j] = arr[i];
    }
    j = '\0';
    puts(new);
    printf("\n");
}