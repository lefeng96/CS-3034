#ifndef MONSTER
#define MONSTER

typedef struct monster {
  int id;
  char location[20];
  char name[20];
  int num_victims;
} monster;

monster *create_monster(monster *data, int counter);

void print_monster(monster *monster);

int getMonsterId(monster *monster, int n);


#endif
