#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct book{
    char name[30];
    char author[30];
    int id;
    struct book *prev;
    struct book *next;
};

struct book *start_lib=NULL;
struct book *initialize_lib(struct book *);

int main(){
    start_lib=initialize_lib(start_lib);
//    greetings();
//    main_menu();
    return 0;
}

struct book *initialize_lib(struct book *start){
    struct book *ptr,*new_book1,*new_book2,*new_book3,*new_book4,*new_book5,*new_book6,*new_book7,*new_book8,*new_book9,
    *new_book10;
    new_book1=(struct book *)malloc(sizeof(struct book));
    new_book1->prev=NULL;
    new_book1->next=NULL;
    start_lib=new_book1;
    strcpy(new_book1->name,"The Lord Of The Rings");
    strcpy(new_book1->author,"John Tolkien");
    new_book1->id=101;
    ptr=new_book1;

    new_book2=(struct book*)malloc(sizeof(struct book));
    new_book2->prev=NULL;
    new_book2->next=NULL;
    strcpy(new_book2->name,"The Little Prince");
    strcpy(new_book2->author,"Antoine de Saint-Exupery");
    new_book2->id=102;
    ptr->next=new_book2;
    ptr=new_book2;
    ptr->prev=new_book1;

    new_book3=(struct book*)malloc(sizeof(struct book));
    new_book3->prev=NULL;
    new_book3->next=NULL;
    strcpy(new_book3->name,"Harry Potter and the Philosopher's Stone");
    strcpy(new_book3->author,"J.K. Rowling");
    new_book3->id=103;
    ptr->next=new_book3;
    ptr=new_book3;
    ptr->prev=new_book2;

    new_book4=(struct book*)malloc(sizeof(struct book));
    new_book4->prev=NULL;
    new_book4->next=NULL;
    strcpy(new_book4->name,"Scouting for Boys");
    strcpy(new_book4->author,"Robert Baden-Powell");
    new_book4->id=104;
    ptr->next=new_book4;
    ptr=new_book4;
    ptr->prev=new_book3;

    new_book5=(struct book*)malloc(sizeof(struct book));
    new_book5->prev=NULL;
    new_book5->next=NULL;
    strcpy(new_book5->name,"And Then There Were None");
    strcpy(new_book5->author,"Agatha Christie");
    new_book5->id=105;
    ptr->next=new_book5;
    ptr=new_book5;
    ptr->prev=new_book4;
    
	new_book6=(struct book*)malloc(sizeof(struct book));
    new_book6->prev=NULL;
    new_book6->next=NULL;
    strcpy(new_book6->name,"The Hobbit");
    strcpy(new_book6->author,"John Tolkien");
    new_book6->id=106;
    ptr->next=new_book6;
    ptr=new_book6;
    ptr->prev=new_book5;
    
	new_book7=(struct book*)malloc(sizeof(struct book));
    new_book7->prev=NULL;
    new_book7->next=NULL;
    strcpy(new_book7->name,"The Dream of The Red Chamber");
    strcpy(new_book7->author,"Cao Xueqin");
    new_book7->id=107;
    ptr->next=new_book7;
    ptr=new_book7;
    ptr->prev=new_book6;

	new_book8=(struct book*)malloc(sizeof(struct book));
    new_book8->prev=NULL;
    new_book8->next=NULL;
    strcpy(new_book8->name,"Fifty Shades of Grey");
    strcpy(new_book8->author,"E.L. James");
    new_book8->id=108;
    ptr->next=new_book8;
    ptr=new_book8;
    ptr->prev=new_book7;
    
    new_book9=(struct book*)malloc(sizeof(struct book));
    new_book9->prev=NULL;
    new_book9->next=NULL;
    strcpy(new_book9->name,"Angel and Demons");
    strcpy(new_book9->author,"Dan Brown");
    new_book9->id=109;
    ptr->next=new_book9;
    ptr=new_book9;
    ptr->prev=new_book8;
    
	new_book10=(struct book*)malloc(sizeof(struct book));
    new_book10->prev=NULL;
    new_book10->next=NULL;
    strcpy(new_book10->name,"Twilight");
    strcpy(new_book10->author,"Stephenie Meyer");
    new_book10->id=110;
    ptr->next=new_book10;
    ptr=new_book10;
    ptr->prev=new_book9;
    
    return start_lib;
}
