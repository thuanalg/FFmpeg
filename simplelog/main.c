#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* filename = 0;
char outname[1024];
#define PATH__ "D:/test_gen/input.c"
int main(int argc, char* argv[]) {
	int size = 0;
	FILE* fp = 0;
	char* buff = 0;
	int n = 0;
	char* p = 0;
	char fmt[1024];

	if (argc < 2) {
		filename = PATH__;
		//return 1;
	}
	else {
		filename = argv[1];
	}
	do {
		fp = fopen(filename, "r");
		if (!fp) {
			break;
		}
		fseek(fp, 0, SEEK_END);
		size = ftell(fp);
		rewind(fp);
		buff = (char*)malloc(size + 1);
		memset(buff, 0, size + 1);
		n = 0;
		while (n < size) {
			n = fread(buff + n, 1, size - n, fp);
			size -= n;
		}
		fclose(fp);

		snprintf(outname, 1024, "%s_%s", filename, "out_.c");
		fp = fopen(outname, "w+");
		if (!fp) {
			break;
		}
		p =  strtok(buff, ", \r\n\t");
		snprintf(fmt, 1024, "__spl_err_text__[%s] = \"%s\";\n", p, p);
		fwrite(fmt, 1, strlen(fmt), fp);
		while (p) {
			p = strtok(0, ", \r\n\t");
			snprintf(fmt, 1024, "__spl_err_text__[%s] = \"%s\";\n", p, p);
			fwrite(fmt, 1, strlen(fmt), fp);
		}
	} while (0);
	if (fp) {
		fclose(fp);
	}
	if (buff) {
		free(buff);
	}
	return 0;
}