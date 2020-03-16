#ifndef INTERFACE
#define INTERFACE

#include "sha-256.h"

void get_input();
void merge_input();
void mine();
void output();

extern char block_id[10];

extern int month, day, year;

extern char prev_hash[100];
extern char code_hash[100];
extern char statement_hash[100];

extern uint8_t tmp_hash[32];

extern char name[32];
extern int name_len;

extern char comment[130];
extern int comment_len;

extern char full[300];
extern int full_len;
extern char full_hash[100];

static bool valid_hash(char* hash)
{
	for (int i = 0; i < 64; ++i)
	{
		if ((hash[i] >= '0'&&hash[i] <= '9') || (hash[i] >= 'a'&&hash[i] <= 'f')) continue;
		else return false;
	}

	if (hash[64] == 0) return true;
	else return false;
}

static void get_garbage()
{
	char garbage[20];
	fgets(garbage, 20, stdin);
}

static int read_line(char* out, int n)
{
	fgets(out, n, stdin);
	int len = strlen(out) - 1;
	out[len] = 0;
	return len;
}

#endif
