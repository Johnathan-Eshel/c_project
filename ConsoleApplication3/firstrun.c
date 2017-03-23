#include <stdio.h>
#include <string.h>

char* commands[] = { "string.", "data.", "entry.", "extern.", "mov", "cmp", "add", "sub", "not", "clr", "lea", "inc", "dec", "jmp", "bne", "red", "prn", "jsr", "rts", "stop" };
enum command_names      { STRING, DATA, ENTRY, EXTERN, MOV, CMP, ADD, SUB, NOT, CLR, LEA, INC, DEC, JMP, BNE, RED, PRN, JSR, RTS, STOP };

int DC;
int IC;


void skip(char* line, int *i){ // skips all the spaces // always send with "&"

	while (line[*i] == ' ') (*i)++;
}


void read_word(char* line, int *i, char* word){
	int x = *i;
	while (line[x] != ' ') x++;
	strncpy(word, &line[*i], x); // copies the word from the cells i to x into word
	*i = x;
	
	
}


int sending_method(char* word1 , char* word2 , char* command){//checks which addressing method is being used, i used "sending" instead of "addressing" because i like functions with short names
	//if ()





}

int read_operands(char* line, char* word1, char* word2){
	int i = 0, num = 2; //num is how many operands there are
	read_word(line, &i, word1);
	skip(line, &i);

	if (line[i] != ','){
		//errmsg();
		return -1;

		skip(line, i);
		read_word(line, &i, word1);
		if (word1 == NULL) num--;
		if (word2 == NULL) num--;
		return num;
	}
}

int string_to_enum(char* command){
	int i;
	for (i = 0; i < 20; i++){
		if ( strcmp(command, commands[i])) {
			return i;
		}
	}
	return NULL;
}
/*int check_command(char* command){
	int command_num = string_to_enum(command);
	switch (command_num)
	{
	case STRING:

		break;
	case DATA:

		break;
	case ENTRY:

		break;
	case EXTERN:

		break;
	case CMP:

		break;
	case ADD:

		break;
	case SUB:

		break;
	case NOT:

		break;
	case CLR:

		break;
	case LEA:

		break;
	case INC:

		break;
	case DEC:

		break;
	case JMP:

		break;
	case BNE:

		break;
	case RED:

		break;
	case PRN:

		break;
	case JSR:

		break;
	case RTS:

		break;
	case STOP:

		break;

	default:
		break;
	}
}*/

char* checklabel(char* line, char* res){
	char c = ' ';
	char *p;
	int length;
	p = strchr(line, ':');
	if (p != NULL){
		length = p - line; //p is a pointer to the ':' ch, whichar meants that the label is between p and the start
		strncpy(res, line, length);
		res[length] = '\0';
		return res;
	}
	else return NULL;
}

/*enum prefix { PREFIX_NONE, PREFIX_DATA, PREFIX_STRING};

typedef struct {
	char *str;
	int id;
} Prefix;

Prefix valid_prefixes[] = {
	{ "data.", PREFIX_DATA },
	{ "string.", PREFIX_STRING },
};

int NUM_PREFIXES = sizeof(valid_prefixes) / sizeof(valid_prefixes[0]);

char *prefixes[] = { "data.", "string." };*/

//char* checktype(char* line){ // ds means data-string, which means checking if the line is .data or .string type
	//for (int i = 0; i < NUM_PREFIXES; i++)
	//	if (strncmp(line, commands[i]) == 0)
	//		return valid_prefixes[i].id;
//	return PREFIX_NONE;





int check_for_string(char* line, char* string);






void scanLine(char* line){
	
	



	}
	