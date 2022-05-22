#include <stdio.h>
#include <stdlib.h>
typedef struct node {
int data;
struct node *link;
}node;
void add_last (struct node *head, int br){
   struct node *current = (struct node*)malloc(sizeof(struct node));
   struct node *ptr ;
   ptr=head;
   current->data=br;
   current->link=NULL;
   while(ptr->link!=NULL){
    ptr=ptr->link;}
   ptr->link=current;
}
struct node* ajouter_simple(struct node *head , int nbr){
    struct node *current = malloc(sizeof(struct node));
    current->data=nbr;
    current->link=NULL;
    head->link=current;
    return current ;
}
node* tabListe (int *T,int a){
      node *A=NULL;
     int i ;
     A=malloc(sizeof(node));
     A=ajouter_simple(A,T[0]);
     for(i=1;i<a;i++){
        ajouter_simple(A,T[i]);
     }
     return A;
}
void print_data(node *head){
    if(head==NULL){
    printf("liste khawya");
}else{
 node *ptr =NULL;
 ptr=head;
 while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->link;
 }
 printf("\n");
}
}

int main()
{   node *A=NULL;
    int Tab[8]={1,2,3,4,5,6,7,8};
    A=tabListe(Tab,8);
    print_data(A);
    printf("Hello world!\n");
    return 0;
}
