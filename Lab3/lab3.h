#ifndef LAB3
#define LAB3

struct monster{
	int id;
	char name[15];
	char location[20];
	int num_victims;
};

int user_attacks(struct monster **curr_monster);

void attacks(struct monster *curr, int length);

void victims(struct monster *curr, int length);


#endif
