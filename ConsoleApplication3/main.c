#include <stdio.h>
#include <stdlib.h>
#include "firstrun.h"





//typdef 

int read_comma(char *line, int *i){
	skip(line, i);
	if (line[*i] != ',') return 0;
	skip(line, i);
	return 1;
}
void print_string(char* line){
	int i;
	for (i = 0; line[i] != NULL; i++)	
		printf("%c"  , line[i]);
	printf("\n");
}

/*int main(){
	int symbol_flag = 0;
	char label;
	IC = 100; // 1.
	DC = 0; // 1.
	fgets(string1, 80, file); // 2.
	scanline(); 
	label = checklabel(string1);
	if (label != null){  // 3.
		symbol_flag = 1; // 4.
	}
	else if (string_to_enum(string1) == 1 || string_to_enum(string1) == 2){
		if(symbol_flag)
			add_to_symboltable(label);
		}	
			//7.//
	}
	else if(string_to_enum(string1) == 3 || string_to_enum(string1) == 4){

	}
	else
			

	}*/














////////
int main(){
	char res[80];
	char word1[80], word2[80];
	int i = 0;
	char *a = "MOV:  1 , 2";

	read_operands(a, word1, word2);
	printf("%s  \n\n\n\n\n\n\n\n %s", word1 , word2);
}
