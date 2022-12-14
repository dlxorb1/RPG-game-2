/*
- Author:
- Data: 22.10.20
- Description: Basic RGP game
- Patch note:
	1. Pointer.
*/
#include "game.h"

int main() {
	int player_hp;
	int player_att;
	int player_def;
	short inventory[INVENTORY_SIZE];
	long cache;

	int monster_hp;
	int monster_att;
	int monster_def;

	init_game(&player_hp, &player_att, &player_def, inventory, &cache,
		&monster_hp, &monster_att, &monster_def);
	run_game(&player_hp, &player_att, &player_def, inventory, &cache,
		&monster_hp, &monster_att, &monster_def);

	return 0;
}


