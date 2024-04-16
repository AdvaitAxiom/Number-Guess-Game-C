#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess,noguess=1;
    srand(time(0));
    number=rand()%100+1;
    //printf("The number is %d\n", number);
    do{
        printf("Guess the number 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }else if(guess<number){
            printf("Higher number please!\n");
        }else{
            printf("You have guessed it in %d attempts\n",noguess);
        }
        noguess++;
    }while(guess!=number);
    return 0;
}