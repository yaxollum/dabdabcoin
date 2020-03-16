#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "interface.h"

static void add_()
{
    full[full_len]='_';
    ++full_len;
}

void merge_input()
{
    memcpy(full + full_len, name, name_len);
	full_len += name_len;

    add_();

	full_len += sprintf(full + full_len, "%02d%02d%02d", month, day, year);

    add_();

	memcpy(full + full_len, prev_hash, 64);
	full_len += 64;

    add_();

	memcpy(full + full_len, comment, comment_len);
	full_len += comment_len;

	add_();
}
