#include <stdio.h>
#include <string.h>



int main(){
    char adj [30] = "";
    char noun [30] = "";
    char adv [30] = "";
    char verb [30] = "";
    char ex [30] = "";
    char place[30] = "";
    printf("Enter the noun : ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun) -1] = '\0';
    printf("Enter the adj : ");
    fgets(adj,sizeof(adj),stdin);
    adj[strlen(adj) -1] = '\0';
    printf("Enter the adv : ");
    fgets(adv,sizeof(adv),stdin);
    adv[strlen(adv) -1] = '\0';
    printf("Enter the verb : ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] ='\0';
    printf("Enter the ex : ");
    fgets(ex,sizeof(ex),stdin);
    ex[strlen(ex) -1] = '\0';
    printf("Enter the place : ");
    fgets(place,sizeof(place),stdin);
    place[strlen(place) -1] = '\0';

    printf("%s! I yelled as I stepped into the%s I couldn't believe my eyes—there was a %s %s %sing. right in the middle of the room! A group of %s watched %s from the corner. It was the strangest thing I'd ever seen.",ex,place,adj,noun,verb,noun,adv);


}