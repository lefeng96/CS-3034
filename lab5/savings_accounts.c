#include <stdio.h>
#include <stdlib.h>
#include "savings_accounts.h"


saving *create_saving(saving *data, int counter) {

  data = (saving *) malloc(25 * sizeof(saving));

  data->id = counter;

  printf("\nEntering information about saving #%d\n", data->id);
  printf("Name of holder?\n");
  fgets(data->name, sizeof(data->name), stdin);
  printf("Credit score?\n");
  scanf("%d", &data->score);
  printf("How much money?\n");
  scanf("%d", &data->money);

  clean_stdin();

  return data;
}

void print_saving(saving *data, int counter) {
  printf("\nsaving ID: %i\n", data->id);
  printf("Holder Name: %s\n", data->name);
  printf("Credit Score: %d\n", data->score);
  printf("Money: %d\n", data->money);
}

int getSavingId(saving *data) {
  return data->id;
}
