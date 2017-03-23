#include <stdlib.h>


typedef struct sym_table {
	char* label;
	struct sym_table* next;
} Symboltable;

static Symboltable *head;


//void create_symbol_table(){
//	Symboltable head;
//	head.next = NULL;
//	head.value = NULL;
//
//
//}

int add_to_symbolTable(char *name){
	int i;
	Symboltable *sym = head;
	for (i = 0; sym->next != NULL; sym = sym->next){}

	
	
	 
//	 label.location = DC;

}

















































