#include <stdio.h>
#include <ctype.h>
int main(){
    char questions[][100] = {"What is the largest planet in solar system",
                             "What is the hottest planet in solar system",
                             "What is the coldest planet in solar system",
                             "What is the smallest planet in solar system"};
    
    char options[][50] = {"A. Jupiter\nB. Saturn\nC. Earth\nD. Venus\n",
                          "A. Jupiter\nB. Saturn\nC. Earth\nD. Venus\n",
                          "A. Jupiter\nB. Pluto\nC. Uranus\nD. Neptune\n",
                          "A. Earth\nB. Pluto\nC. Mercury\nD. Venus\n"};

    char answer[4] = {'A','D','C','C'};
    char guess ='\0';
    int count = 0;
    int question = sizeof(questions) / sizeof(questions[0]);
    for (int i = 0; i<question; i++){
        printf("\n%s\n",questions[i]);
        printf("%s",options[i]);
        scanf(" %c",&guess);
        guess = toupper(guess);
        if (guess == answer[i]){
            printf("CORRECT\n");
            count++;
        }
        else {
            printf("WRONG\n");
        }
    }
    
    printf("Your score is %d ",count);
}