#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));

    int a=0;
    int b=0;
    int result;
    char name[100];

    printf("Who are you?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    printf("Tossing a coin...\n");

    for(int i=1; i<=3; i++){
        printf("Round %d: ",i);    
        result = rand() % 2;
        if(result == 0){
            printf("Heads\n");
            a++;
        }
        else if(result == 1){
            printf("Tails\n");
            b++;
        }
    }
        printf("Heads: %d, Tails: %d\n",a,b);

        if(a>b){
            printf("%s won!\n",name);
        } else if(a<b){
            printf("%s lose!\n",name);
        }    
return 0;
}