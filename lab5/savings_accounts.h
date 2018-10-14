#ifndef SAVE
#define SAVE

typedef struct saving {
  int id;
  char name[20];
  int score;
  int money;
} saving;

saving *create_saving(saving *saving, int counter);

void print_saving(saving *saving, int counter);

int getSavingId(saving *saving);

#endif
