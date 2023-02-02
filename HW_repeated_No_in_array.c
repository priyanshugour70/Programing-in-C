#include <stdio.h>

// Main function to run the program
int main() 
{ 
    int x ; 

    printf("Enter Array Size  :  ");
    scanf("%d",&x);

    int arr[x] ; 

    for(int i = 0 ; i < x ; i++){

        printf("Enter %d Value :  ",i+1);
        scanf("%d",&arr[i]);

    }

    int arr1[x];

    for(int i = 0 ; x > i ; i++){
        
        int count = 0 ;

        for(int j = 0 ; x > j ; j++){
           
            if(arr[i] == arr[j]){
                count++;
                arr1[i] = count ;
            }
            
        }
    }

    for(int i = 0 ; x > i ; i++){

        printf("%d is repeated %d times.\n",arr[i],arr1[i]);

    }
    
   return 0; 
}