#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct monster{
	int id;
	char name[15];
	char location[20];
	int num_victims;
};

void user_attacks(struct monster **curr_monster);

void user_attacks(struct monster **curr_monster){
	int id = 0;
	char name[15] = "";
	char location[20] = "";
	int num_victims = 0;
	struct monster *attacks = (struct monster *)malloc(sizeof(struct monster));
	*curr_monster = attacks;
	printf("What is the ID for this attack?\n");
	scanf("%d", &id);
	(*curr_monster)->id = id;

		printf("What is the name of the monster\n");
		scanf("%s", name);

		strcpy((*curr_monster)->name, name);

		printf("Where was the taken place?.\n");
		scanf("%s", location);

		strcpy((*curr_monster)->location, location);

		printf("How many victims were there in the attack?.\n");
		scanf("%d", &num_victims);
		(*curr_monster)->num_victims = num_victims;
			*curr_monster = attacks;
	}
