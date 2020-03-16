#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "interface.h"

char block_id[10];

int month, day, year;

char prev_hash[100];
char code_hash[100];
char statement_hash[100];

uint8_t tmp_hash[32];

char name[32];
int name_len;

char comment[130];
int comment_len;

char full[300];
int full_len;
char full_hash[100];

void get_input()
{
	//printf("Block number: ");
	//read_line(block_id, 10);
	//printf("Block #%s\n", block_id);

	printf("What day is it (month day year)? ");
	scanf("%d%d%d", &month, &day, &year);
	get_garbage();
	printf("%d %d %d\n", month, day, year);

	printf("Previous Block hash: ");
	read_line(prev_hash, 100);
	if (valid_hash(prev_hash)) printf("Valid hash (starts with %c, ends with %c).\n", prev_hash[0], prev_hash[63]);
	else puts("INVALID HASH!");

	printf("What's your name? ");
	name_len = read_line(name, 32);
	puts(name);

	printf("128 char max one-line comment: ");
	comment_len = read_line(comment, 130);
	puts(comment);
}
