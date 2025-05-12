#include "simplelog.h"
#include <stdlib.h>
int main(int argc, char *argv[]) {
	fprintf(stdout, "sizeof: %d", sizeof(void*));
	spl_init_log("simplelog.cfg");
	spllog(0, "abk");
	spl_finish_log();
	return 0;
}