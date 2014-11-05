#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int var;
	struct node* next;
}_nstr;

_nstr* newStr(_nstr*);

void main(){
	int _in;
	_nstr* first;
	_nstr* curr;
	printf("Enter first link value\n");
	scanf("%d",&first->var);
	first->next = NULL;
	curr = first;
	do{
	printf("Select Options(0 to exit):\n1) Create new link and assign value\n2) Show current link value\n3) Shift to first link\n4) Shift to next link\n");
	scanf("%d",&_in);
	if(_in == 1)
		curr = newStr(curr);
	else if(_in ==2)
		printf("%d\n",curr->var);
	else if(_in == 3)
		curr = first;
	else if(_in == 4){
	if(curr->next != NULL)
		curr = curr->next;	
	else
		printf("Reached end of the list\n");
	}

		
}while(_in!=0);

}

_nstr* newStr(_nstr* new){
if(new->next!= NULL){
	printf("Not at end of the list to create new link\n");
	return new;
}
_nstr* temp;
printf(" new link created\n");
temp = (_nstr*) malloc(sizeof(_nstr));
printf("Enter link value\n");
scanf("%d",&temp->var);
new->next = temp;
new = temp;
new->next = NULL;
return new;
}
