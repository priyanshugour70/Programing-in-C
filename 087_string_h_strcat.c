#include<stdio.h>
#include<string.h>

// This Code is Written By Priyanshu Gour

int main(){

    char firststr[100] = "Priyanshu "; // always give size in first string.
    char secstr[] = "Gour";

    strcat(firststr,secstr);// this function strcat using two string add to one string .

    puts(firststr);

    return 0 ;
} 