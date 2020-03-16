#include "interface.h"
#include <time.h>

int main()
{
    get_input();
    merge_input();
	puts("\nmining ...");

	clock_t start_t = clock();
    mine();
    clock_t end_t = clock();

	output();
	printf("SUCCESS. (mined in %.3f seconds!) Results are in the file dabdabmining.txt\n", double(end_t - start_t) / double(CLOCKS_PER_SEC));
}
