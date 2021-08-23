#include <stdio.h>
#include <stdlib.h>

void write(){
	FILE* f = fopen("MyFile.txt", "w");
	char words[7] = {'s', 'a', 'm', 's', 'u', 'n', 'g'};
	int i;
	for(i=7; i>=0; i--){
		fprintf(f, "%c", words[i]);
	}
	printf("\nthe reversing string is added to the file successfully");
	}
void reverse(){
	char words[7] = {'s', 'a', 'm', 's', 'u', 'n', 'g'};
	int i;
	printf("\nReversed string: ");
	for(i=7; i>=0; i--){
		printf("%c", words[i]);
	}

	write();
}
	void read(){
	FILE *f = fopen("MyFile.txt", "r");
	char word[7]={0};
	fscanf(f, "%s", word);
	printf("\nString input from file: ");
	printf("%s", word);
	reverse();
	fclose(f);
	}
int main(){
	FILE *f = fopen("MyFile.txt", "w");
	fprintf(f, "samsung");
	printf("File opened successfully ");
	fclose(f);
	read();
	return 0;
	}

