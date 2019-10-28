#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
 
struct combatant{
        int health;
        int attack;
};
 
struct combatant* new_combatant(){
        struct combatant* c = (struct combatant*)malloc(sizeof(struct combatant));
        c->health = 100;
        c->attack = 10;
 
        return c;
}
 
int get_random(int lower, int upper){
        // seed the random number
        srand(time(0));
 
return rand() % (upper - lower + 1) + lower;
}   

int main(){
        struct combatant* pc = new_combatant();
        struct combatant* npc = new_combatant();
        int att;
 
        while(1){
 
                // pc swings
                att = get_random(1, pc->attack);
                printf("You swing for %d\n", att);
 
                npc->health = npc->health - att;
                printf("Enemy health: %d\n\n", npc->health);
 
                if(npc->health <= 0) break;
 
								sleep(1);
 
                // npc swings
                att = get_random(1, npc->attack);
                printf("The enemy swings for %d\n", att);
 
                pc->health = pc->health - att;
                printf("Your health: %d\n\n", pc->health);
 
                if(pc->health <= 0) break;
 
                sleep(1);
        }
 
        char * winner;
        if(pc->health > 0) winner = "You";
        else winner = "The Enemy";
 
        printf("%s Won!\n", winner);
 
        // deallocate memory
        free(pc);
        free(npc);
 
return 0;
}

