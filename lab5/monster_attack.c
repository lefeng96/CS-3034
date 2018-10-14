
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monster_attack.h"

monster *create_monster(monster *data, int counter) {

  data = (monster *) malloc(25 * sizeof(monster));

  data->id = counter;

  printf("\nEnter data about Monster #%i\n", data->id);
  printf("Where was the attack taken place?.\n");
  fgets(data->location, sizeof(data->location), stdin);
  printf("What is the name of the monster\n");
  fgets(data->name, sizeof(data->name), stdin);
	printf("How many victims were there in the attack?.\n");
  scanf("%i", &data->num_victims);
  clean_stdin();
  return data;
}

void print_monster(monster *data) {
  printf("\nMonster ID: %i\n", data->id);
  printf("Monster name: %s\n", data->name);
  printf("Attack location: %s\n", data->location);
  printf("Number of victims: %i\n", data->num_victims);
}

int getMonsterId(monster *monster, int search) {
  return monster[search].id;
}
