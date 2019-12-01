#include <stdio.h>
#define REGFILE 0
#define DIR 1
#define DATABLOCKSIZE 512
#define DIRENTRYSIZE 32
#define NUMOFINODES 32

struct sb{
	int inode_bitmap;
	int data_bitmap[10];
};

struct inode{
	int type;
	int size;
	int datablocks[10];
};

struct dir_entry{
	char name[28];
	int inode_num;
};

int main(){
	FILE * fin = fopen("simplefs.bin", "r");
       	struct inode slash;
	fseek(fin, sizeof(struct sb), SEEK_SET);
	fread(&slash,sizeof(slash),1,fin);

	printf("type: %d\n", slash.type);
	printf("size: %d\n", slash.size);
	printf("datablocks[0]: %d", slash.datablocks[0]);	

    system("pause");
	return 0;
}
