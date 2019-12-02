#include "structure_size.h"
#include <stdio.h>

int main(){
	FILE * fin = fopen("simplefs.txt", "r");
       	struct inode slash;
	fseek(fin, sizeof(struct sb), SEEK_SET);
	fread(&slash,sizeof(slash),1,fin);

	printf("type: %d\n", slash.type);
	printf("size: %d\n", slash.size);
	printf("datablocks[0]: %d", slash.datablocks[0]);	

    system("pause");
	return 0;
}
