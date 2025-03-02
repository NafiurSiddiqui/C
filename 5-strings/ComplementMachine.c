#include <stdio.h>

//a string is a sequences of characters
int main(){

    //you need to define array of characters to make a string
    //you need to set the limit of characters
    //ALWAYS add one extra character limit. This is to define where the string ends. This is known as "Null Terminator"
    char name[31];
    printf("Your name boi: ");
    scanf("%s", name); //In case of arrays, you DONT put reference operator
    printf("Hello,%s!\nYou look gockagious today!\n", name); 
    return 0;
}
