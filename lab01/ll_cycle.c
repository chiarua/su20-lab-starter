#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(!head||!head->next){
        return 0;
    }
    node *hare = head->next->next;
    node *turtle = head->next;
    while(hare!=turtle){
        if(hare == NULL||!hare->next){
            return 0;
        }
        hare = hare->next->next;
        turtle = turtle->next;
    }
    return 1;
}