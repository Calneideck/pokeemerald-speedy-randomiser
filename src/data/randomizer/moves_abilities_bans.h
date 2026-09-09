#include "constants/moves.h"
#include "constants/abilities.h"

// Bans moves from the randomizer
const enum Move RandomizerMovesBans[] = {
	MOVE_SHEER_COLD,
	MOVE_FISSURE,
	MOVE_HORN_DRILL,
	MOVE_GUILLOTINE,
	MOVE_BATON_PASS,
	MOVE_MINIMIZE,
	MOVE_DOUBLE_TEAM,
	MOVE_LIGHT_OF_RUIN,
	MOVE_PLASMA_FISTS,
    MOVE_DESTINY_BOND,
    MOVE_SPLASH,
    MOVE_PIKA_PAPOW,
    MOVE_STRUGGLE,
    MOVE_HAPPY_HOUR,
};

// Bans abilities from the randomizer
const enum Ability RandomizerAbilitiesBans[] = {
	ABILITY_HUGE_POWER,
	ABILITY_PURE_POWER,
	ABILITY_WONDER_GUARD,
};
