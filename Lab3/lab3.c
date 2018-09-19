#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct monster{
	int id;
	char name[15];
	char location[20];
	int num_victims;
};

int user_attacks(struct monster **curr_monster);

void attacks(struct monster *curr, int length);

void victims(struct monster *curr, int length);

int main(void){
  int length;
	struct monster *curr_monster = NULL;

	length = user_attacks(&curr_monster);

	attacks(curr_monster, length);

	victims(curr_monster, length);

  return 0;
}

int user_attacks(struct monster **curr_monster){
	int length;
	char name[15] = "";
	char location[20] = "";
	int num_victims = 0;
	struct monster *attacks = (struct monster *)malloc(length * sizeof(struct monster));
	printf("Report, how many attacks have happened?\n");
	scanf("%d", &length);

	for(int i = 0; i < length; i++){
		*curr_monster = attacks + i;
		(*curr_monster)->id = i + 1;

		printf("What is the name of the monster in attack %d\n", i+1);
		scanf("%s", name);

		strcpy((*curr_monster)->name, name);

		printf("Where was attack %d taken place?.\n", i+1);
		scanf("%s", location);

		strcpy((*curr_monster)->location, location);

		printf("How many victims were there in attack %d?.\n", i+1);
		scanf("%d", &num_victims);
		(*curr_monster)->num_victims = num_victims;
	}

	*curr_monster = attacks;

	return length;
}

void attacks(struct monster *curr, int length){
  	struct monster *end = curr + length;
    do{
  		printf("We are reporting %s has killed %d people in %s\n", curr->name, curr->num_victims, curr->location);
  		curr++;
  	}while(curr < end);
}

void victims(struct monster *curr, int length){
  	struct monster *end = curr + length;
    int total_victims = 0;

  	do{
  		total_victims = total_victims + (curr->num_victims);
  		curr++;
  	}while(curr < end);

  	printf("From all the attacks, we have %d victims\n", total_victims);
}
