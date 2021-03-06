#include "Pokemon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

#define next system("pause"); system("cls")

using namespace std;

//POKEMON
void Pokemon::initPokemon(PID Name)
{
	switch (Name)
	{
	case BULBASAUR:
		this->p_name = "BULBASAUR";
		this->p_type1 = GRASS;
		this->p_type1Name = "Grass";
		this->p_type2 = POISON;
		this->p_type2Name = "Poison";
		this->p_HP = 19;
		this->p_attack = 8;
		this->p_defense = 8;
		this->p_spAttack = 9;
		this->p_spDefense = 9;
		this->p_speed = 8;
		this->p_move[1].m_ID = GROWL;
		this->p_move[2].m_ID = TACKLE;
		this->p_numMoves = 2;
		break;

	case CHARMANDER:
		this->p_name = "CHARMANDER";
		this->p_type1 = FIRE;
		this->p_type1Name = "Fire";
		this->p_type2 = _;
		this->p_HP = 18;
		this->p_attack = 9;
		this->p_defense = 8;
		this->p_spAttack = 9;
		this->p_spDefense = 9;
		this->p_speed = 9;
		this->p_move[1].m_ID = SCRATCH;
		this->p_move[2].m_ID = GROWL;
		this->p_numMoves = 2;
		break;

	case SQUIRTLE:
		this->p_name = "SQUIRTLE";
		this->p_type1 = WATER;
		this->p_type1Name = "Water";
		this->p_type2 = _;
		this->p_HP = 19;
		this->p_attack = 8;
		this->p_defense = 9;
		this->p_spAttack = 9;
		this->p_spDefense = 9;
		this->p_speed = 8;
		this->p_move[1].m_ID = TACKLE;
		this->p_move[2].m_ID = TAILWHIP;
		this->p_numMoves = 2;
		break;

	case PIDGEY:
		this->p_name = "PIDGEY";
		this->p_type1 = NORMAL;
		this->p_type1Name = "Normal";
		this->p_type2 = FLYING;
		this->p_type2Name = "Flying";
		this->p_HP = 19;
		this->p_attack = 8;
		this->p_defense = 8;
		this->p_spAttack = 7;
		this->p_spDefense = 7;
		this->p_speed = 7;
		this->p_move[1].m_ID = TACKLE;
		this->p_move[2].m_ID = SANDATTACK;
		this->p_move[3].m_ID = GUST;
		this->p_numMoves = 3;
		break;

	case RATTATA:
		this->p_name = "RATTATA";
		this->p_type1 = NORMAL;
		this->p_type1Name = "Normal";
		this->p_type2 = _;
		this->p_HP = 18;
		this->p_attack = 9;
		this->p_defense = 7;
		this->p_spAttack = 6;
		this->p_spDefense = 7;
		this->p_speed = 10;
		this->p_move[1].m_ID = TACKLE;
		this->p_move[2].m_ID = TAILWHIP;
		this->p_numMoves = 2;
		break;

	case SPEAROW:
		this->p_name = "SPEAROW";
		this->p_type1 = NORMAL;
		this->p_type1Name = "Normal";
		this->p_type2 = FLYING;
		this->p_type2Name = "Flying";
		this->p_HP = 19;
		this->p_attack = 9;
		this->p_defense = 7;
		this->p_spAttack = 7;
		this->p_spDefense = 7;
		this->p_speed = 10;
		this->p_move[1].m_ID = PECK;
		this->p_move[2].m_ID = GROWL;
		this->p_numMoves = 2;
		break;

	case ODDISH:
		this->p_name = "ODDISH";
		this->p_type1 = GRASS;
		this->p_type1Name = "Grass";
		this->p_type2 = POISON;
		this->p_type2Name = "Poison";
		this->p_HP = 19;
		this->p_attack = 9;
		this->p_defense = 9;
		this->p_spAttack = 10;
		this->p_spDefense = 9;
		this->p_speed = 7;
		this->p_move[1].m_ID = ABSORB;
		this->p_move[2].m_ID = GROWTH;
		this->p_numMoves = 2;
		break;

	case GEODUDE:
		this->p_name = "GEODUDE";
		this->p_type1 = ROCK;
		this->p_type1Name = "Rock";
		this->p_type2 = GROUND;
		this->p_type2Name = "Ground";
		this->p_HP = 19;
		this->p_attack = 11;
		this->p_defense = 13;
		this->p_spAttack = 7;
		this->p_spDefense = 7;
		this->p_speed = 6;
		this->p_move[1].m_ID = DEFENSECURL;
		this->p_move[2].m_ID = TACKLE;
		this->p_move[3].m_ID = SANDATTACK;
		this->p_numMoves = 3;
		break;

	case PIKACHU:
		this->p_name = "PIKACHU";
		this->p_type1 = ELECTRIC;
		this->p_type1Name = "Electric";
		this->p_type2 = _;
		this->p_ability1 = STATIC;
		this->p_HP = 18;
		this->p_attack = 9;
		this->p_defense = 8;
		this->p_spAttack = 9;
		this->p_spDefense = 9;
		this->p_speed = 12;
		this->p_move[1].m_ID = GROWL;
		this->p_move[2].m_ID = THUNDERSHOCK;
		this->p_move[3].m_ID = TAILWHIP;
		this->p_numMoves = 3;
		break;

	case BIDOOF:
		this->p_name = "BIDOOF";
		this->p_type1 = NORMAL;
		this->p_type1Name = "Normal";
		this->p_type2 = _;
		this->p_HP = 20;
		this->p_attack = 8;
		this->p_defense = 8;
		this->p_spAttack = 7;
		this->p_spDefense = 8;
		this->p_speed = 7;
		this->p_move[1].m_ID = GROWL;
		this->p_move[2].m_ID = TACKLE;
		this->p_move[3].m_ID = DEFENSECURL;
		this->p_numMoves = 3;
		break;
	}

	this->p_ID = Name;
	this->p_HPMax = this->p_HP;
	this->p_attackMax = this->p_attack;
	this->p_attackInitial = this->p_attack;
	this->p_spAttackMax = this->p_attack;
	this->p_spAttackInitial = this->p_attack;
	this->p_defenseMax = this->p_defense;
	this->p_defenseInitial = this->p_defense;
	this->p_spDefenseMax = this->p_defense;
	this->p_spDefenseInitial = this->p_defense;
	this->p_speedMax = this->p_speed;
	this->p_speedInitial = this->p_speed;

	this->isParalized = false;
	this->paralysis_count = 0;

	initMoves();
}

void Pokemon::initMoves()
{
	for (int i = 1; i < 5; i++)
		switch (this->p_move[i].m_ID)
		{
		case TACKLE:
			this->p_move[i].m_name = "Tackle";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = PHYSICAL;
			this->p_move[i].m_PP = 35;
			break;

		case GROWL:
			this->p_move[i].m_name = "Growl";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = STATUS;
			this->p_move[i].m_PP = 40;
			break;

		case SCRATCH:
			this->p_move[i].m_name = "Scratch";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = PHYSICAL;
			this->p_move[i].m_PP = 35;
			break;

		case TAILWHIP:
			this->p_move[i].m_name = "Tail Whip";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = STATUS;
			this->p_move[i].m_PP = 35;
			break;

		case SANDATTACK:
			this->p_move[i].m_name = "Sand Attack";
			this->p_move[i].m_type = GROUND;
			this->p_move[i].m_effect = STATUS;
			this->p_move[i].m_PP = 15;
			break;

		case GUST:
			this->p_move[i].m_name = "Gust";
			this->p_move[i].m_type = FLYING;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = SPECIAL;
			this->p_move[i].m_PP = 35;
			break;

		case PECK:
			this->p_move[i].m_name = "Peck";
			this->p_move[i].m_type = FLYING;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = PHYSICAL;
			this->p_move[i].m_PP = 35;
			break;

		case ABSORB:
			this->p_move[i].m_name = "Absorb";
			this->p_move[i].m_type = GRASS;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = SPECIAL;
			this->p_move[i].m_PP = 25;
			break;

		case GROWTH:
			this->p_move[i].m_name = "Growth";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = STATUS;
			this->p_move[i].m_PP = 40;
			break;

		case DEFENSECURL:
			this->p_move[i].m_name = "Defense Curl";
			this->p_move[i].m_type = NORMAL;
			this->p_move[i].m_effect = STATUS;
			this->p_move[i].m_PP = 40;
			break;

		case THUNDERSHOCK:
			this->p_move[i].m_name = "Thunder Shock";
			this->p_move[i].m_type = ELECTRIC;
			this->p_move[i].m_effect = DAMAGE;
			this->p_move[i].m_cat = SPECIAL;
			this->p_move[i].m_PP = 30;
			break;
		}

	for (int i = 1; i <= this->p_numMoves; i++)
		this->p_move[i].m_PPMax = this->p_move[i].m_PP;
}

void Pokemon::move(int moveNum, Pokemon &pkmn, Pokemon &foe)
{
	if (this->p_move[moveNum].m_PP <= 0)
	{
		cout << "That move can no longer be used!\n\n";
		next;
		return;
	}

	if (pkmn.isParalized)
	{
		if (pkmn.paralysis_count >= 3)
		{
			cout << pkmn.p_name << " is no longer paralized!\n\n", next;
			pkmn.paralysis_count = 0;
			pkmn.isParalized = false;
			pkmn.p_speed *= 2;
		}

		else
		{
			pkmn.paralysis_count++;
			cout << pkmn.p_name << " is paralized!";
			Sleep(500); cout << "."; Sleep(500); cout << "."; Sleep(500); cout << ".\n\n";
			system("cls");
			srand(time(0));
			if (1 + rand() % 100 <= 50)
			{
				cout << "It can't move!\n\n", next;
				return;
			}
		}

	}

	switch (this->p_move[moveNum].m_ID)
	{
	case TACKLE: this->tackle(foe); break;
	case GROWL: this->growl(foe); break;
	case SCRATCH: this->scratch(foe); break;
	case TAILWHIP: this->tailWhip(foe); break;
	case SANDATTACK: this->sandAttack(foe); break;
	case GUST: this->gust(foe); break;
	case PECK: this->peck(foe); break;
	case ABSORB: this->absorb(foe); break;
	case GROWTH: this->growth(pkmn); break;
	case DEFENSECURL: this->defenseCurl(pkmn); break;
	case THUNDERSHOCK: this->thunderShock(foe); break;
	}

	this->p_move[moveNum].m_PP--;

	if (!(pkmn.p_type1 == ELECTRIC || pkmn.p_type2 == ELECTRIC) && foe.p_ability1 == STATIC && p_move[moveNum].m_cat == PHYSICAL && !pkmn.isParalized)
	{
		srand(time(0));
		if (1 + rand() % 100 <= 30)
		{
			cout << foe.p_name << "'s static paralized " << pkmn.p_name << "!\n\n", next;
			pkmn.isParalized = true;
			pkmn.p_speed /= 2;
		}
	}
}

//PLAYER
void Player::initPlayer(GameMode mode)
{
	this->bag[0] = { EMPTY, "_", 0 };
	switch (mode)
	{
	case CLASSIC:
		this->numItems = 4;
		this->bag[1] = { POTION, "Potion", 1 };
		this->bag[2] = { ETHER, "Ether", 1 };
		this->bag[3] = { XATTACK, "X Attack", 1 };
		this->bag[4] = { XDEFENSE, "X Defense", 1 };
		this->potions = true, this->ethers = true;
		this->xAttacks = true, this->xDefenses = true;
		this->pokeBalls = false;
		break;

	case ENDLESS:
		this->numItems = 4;
		this->bag[1] = { POTION, "Potion", 3 };
		this->bag[2] = { ETHER, "Ether", 3 };
		this->bag[3] = { XATTACK, "X Attack", 1 };
		this->bag[4] = { XDEFENSE, "X Defense", 1 };
		this->potions = true, this->ethers = true;
		this->xAttacks = true, this->xDefenses = true;
		this->pokeBalls = false;
		break;

	case CAMPAIGN:
		this->numItems = 1;
		this->bag[1] = { POKEBALL, "Poke Ball", 5 };
		this->potions = false, this->ethers = false;
		this->xAttacks = false, this->xDefenses = false;
		this->pokeBalls = true;
	}

}

bool Player::item(int itemNum, Pokemon &foe)
{
	bool used = false;

	if (this->bag[itemNum].i_num <= 0)
	{
		cout << "Out of " << this->bag[itemNum].i_name << "s!\n\n", next;
		return false;
	}

	switch (this->bag[itemNum].i_ID)
	{
	case POTION:
		if (this->potion())
			this->bag[itemNum].i_num--, used = true;
		if (this->bag[itemNum].i_num <= 0)
			this->potions = false;
		break;

	case ETHER:
		if (this->ether())
			this->bag[itemNum].i_num--, used = true;
		if (this->bag[itemNum].i_num <= 0)
			this->ethers = false;
		break;

	case XATTACK:
		if (this->XAttack())
			this->bag[itemNum].i_num--, used = true;
		if (this->bag[itemNum].i_num <= 0)
			this->xAttacks = false;
		break;

	case XDEFENSE:
		if (this->XDefense())
			this->bag[itemNum].i_num--, used = true;
		if (this->bag[itemNum].i_num <= 0)
			this->xDefenses = false;
		break;

	case POKEBALL:
		if (this->pokeBall(foe))
			this->bag[itemNum].i_num--, used = true;
		if (this->bag[itemNum].i_num <= 0)
			this->pokeBalls = false;
		break;
	}

	if (this->bag[itemNum].i_num <= 0)
	{
		this->bag[itemNum] = this->bag[0];
		for (int i = itemNum; i < this->numItems; i++)
			this->bag[i] = this->bag[i + 1];
		this->numItems--;
	}

	return used;
}