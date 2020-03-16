#include "interface.h"
#include <stdio.h>
#include <string.h>

void output()
{
	FILE* raw = fopen("dabdabmining.txt", "w");
	fwrite(full, 1, full_len, raw);
	fputc('\n', raw);
	fwrite(full_hash, 1, 64, raw);
	fclose(raw);
}
