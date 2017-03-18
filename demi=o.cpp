#include<stdio.h>
#include<stdlib.h>
#include<string.h>		
#define ERROR		1	
#define NO_ERROR	    0
#define SIZE		1024
 
void push(char);
void pop();	
 
int count = 0, FLAG = NO_ERROR;
 
struct node {				
	char data;
	struct node *prev;
} *top, *temp;
 
int main(void){
 
	char c[SIZE];
	int i = 0, length = 0;
	top = NULL;
	printf("\n Enter the string of braces: \n");
	fgets( c, SIZE, stdin );
	length = strlen(c);
	c[length] = '\0';
 
	for( i = 0; c[i] != '\0'; ++i ){
		if ( FLAG == NO_ERROR )
			if( c[i] == '(' )
				 push(c[i]); 
	}
 
	for ( i = 0; c[i] != '\0'; ++i ){
		if( FLAG == NO_ERROR )
			if(c[i] == ')' )
				pop();
	}
	
	free(top); top = NULL;
 
	if( (count == 0) && (FLAG != ERROR) )
		printf("\nBalanced\n");
	else
		printf("\nNot Balanced\n");
	return 0;
}
 
void push(char ch){
 
	if( top == NULL ){
		top = (struct node*)malloc(1*sizeof(struct node));
		top -> data = ch;
		top -> prev = NULL;
		temp = top;
	}
	
	else{
		temp = (struct node *)malloc(1*sizeof(struct node));
		temp -> data = ch;
		temp -> prev = top;
		top = temp;
	}
	++count;
}
 
void pop(){
	if( top == NULL ) 
	{ printf("\n Stack Underflow \n"); FLAG = ERROR; }
	else { 
		temp = top;
		top = temp -> prev;
		free(temp);
		--count;
		temp = top;	
	}
}
