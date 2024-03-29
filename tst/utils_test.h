#ifndef __TEST_H__
#define __TEST_H__

#include "../src/rule_ext.h"
#include "../src/utils.h"
#include "../src/world.h"

#define NB_NEIGHBORS 9
#define MAX_RULE 2
#define MAX_STATE 20

/** Struct representing a couple of unsigned int */
struct position {
    unsigned int x;
    unsigned int y;
};

/** Print an array of unsigned int */
void afficher_tableau(int n, unsigned int* t);

/** Return a booleen. True (return 1) if the two world are the same. */
int comparer_monde(struct world* w1, struct world* w2);

/** Print the position in an array */
void afficher_tableau_positions(int n, struct position* t);

/** Print the movements of a rule (with the following syntax (dx,dy))*/
void print_moves_rule(struct rule* r, unsigned int len_changes, struct position* t);
#endif // __TEST_H__
