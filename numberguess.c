#include<stdio.h>
#include<stdlib.h>//for using rand function
#include<time.h>//for time function
int main(){
    int number,guess,nguess=0;
    srand(time(0));//seconds mei time reurn karta hai and generate different number
    number=rand()%100+1;// generate number between 1 to 100 and if i write 1000 inplace of 100 it will give me betwen 100 to 500 or100
     //gccprintf("the number is %d",number);
    // keep running the lo0p until the number is guessed
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("guess higher number\n");
        }
        else if(guess>number){
            printf("guess lower number\n");
        }
        else{
            printf("you guessed in %d attempts\n",nguess);
        }
        nguess++;
    } while(guess!=number);

    return 0;
}

