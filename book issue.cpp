void main_menu();
void main_menu(){
    int choice;
    system("cls");
    do{
        printf("\n\n");
        printf("\n\t\t\t\t*************************************************\n");
        printf("\n\t\t\t\t\t      MAIN MENU: ");
        printf("\n\t\t\t\t\t     1.ISSUE OF BOOKS ");
        printf("\n\t\t\t\t\t     2.RETURN OF BOOKS ");
        printf("\n\t\t\t\t\t     3.DISPLAY STUDENT DETAILS ");
        printf("\n\t\t\t\t\t     4.EXIT\n ");
        printf("\n\t\t\t\t*************************************************\n");
        printf("\n\t\t\t\t\t      Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                start=book_issue(start);
                break;
            case 4:{
                exit(1);
            }
            default:{
                printf("\n\t\t\t\t\t      ...Invalid Option!...\n");
                printf("\n\t\t\t\t\t    Press any key to try again: ");
                getch();
            }
        }
    }while(choice!=4);
}
struct student{
    char name[30];
    char email[20];
    char book[20];
    char a[30];
    int id;
    int sid;
    struct student *prev;
    struct student *next;
};
struct student *start=NULL;
struct student *book_issue(struct student *);
struct student *book_issue(struct student *start){
    struct book *bptr;
    struct student *ptr2,*new_student;
    struct record *studentrec, *rptr;
    int i=1,id,sid,flag=0;
    if(start_lib==NULL){
        printf("\n\t\t\t\t\t No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }else{
        system("cls");
        bptr=start_lib;
        printf("\n\t\t*************** Books Available: ****************\n");
        while(bptr!=NULL){
            printf("\n\t\t_________________________________________________\n");
            printf("\n\t\t Book %d",i);
            printf("\n\t\t Book Title: %s",bptr->name);
            printf("\n\t\t Name of Author: %s",bptr->author);
            printf("\n\t\t Book ID: %d",bptr->id);
            printf("\n\t\t_________________________________________________\n");
            bptr=bptr->next;
            i++;
        }
        printf("\n\n\t Enter the Book ID: ");
        scanf("%d",&id);
        bptr=start_lib;
        while(bptr!=NULL){
            if(bptr->id==id){
                flag=1;
                break;
            }
            bptr=bptr->next;
        }
        if(flag==1){
            bptr=start_lib;
            while(bptr->id!=id){
                bptr=bptr->next;
            }
            new_student=(struct student *)malloc(sizeof(struct student));
            printf("\n\t Enter Student Details:\n ");
            printf("\n\t Enter your Name: ");
            scanf("%s",new_student->name);
            printf("\n\t Enter your student id: ");
            scanf("%d",&new_student->sid);
            printf("\n\t Enter your Email: ");
            scanf("%s",new_student->email);
            strcpy(new_student->book,bptr->name);
            strcpy(new_student->a,bptr->author);
            new_student->id=bptr->id;
            new_student->prev=NULL;
            new_student->next=NULL;
            printf("\n\t*************************************************\n");
            printf("\n\tIssue of Book ID %d done successfully!\n",new_student->id);
            printf("\n\t*************************************************\n");
            if(start==NULL){
                start=new_student;
            }else{
                ptr2=start;
                while(ptr2->next!=NULL){
                    ptr2=ptr2->next;
                }
                ptr2->next=new_student;
                new_student->prev=ptr2;
                new_student->next=NULL;
            }
            
            printf("\n\n\t\t Press any key to go to the main menu: ");
            getch();
            system("cls");
        }else{
            printf("\n\t\t      ...Invalid Option!...\n");
            printf("\n\t\t    Press any key to try again: ");
            getch();
            system("cls");
        }
    }
    return start;
}
