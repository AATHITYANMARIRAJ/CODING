#include <stdio.h>
void create();
void overflow();
int pc=1;
void insert1();
void insertl();
void insertsp();
void delete1();
void deletel();
void deletesp();
void display();
int a[10];
int n;
void main(){
   create();

}
void create(){
    printf("enter the amount of elements you want to enter:\n");
    scanf("%d",&n);
    if(n<10){
       int i;
       for(i=0;i<n;i++){
         printf("ENTER THE ELEMENT\n");
          scanf("%d",&a[i]);
         }
   }
   else{
      overflow();
   }

 while((pc==1)&&(n<10)){
    printf("1-INSERTING ELEMENTS AT FIRST INDEX\n");
    printf("2-INSERTING ELEMENTS IN LAST INDEX\n");
    printf("3-INSERTING ELEMENTS AT specified INDEX\n");
    printf("4-DELETING ELEMENTS AT FIRST INDEX\n");
    printf("5-DELETING ELEMENTS AT LAST INDEX\n");
    printf("6-DELETING ELEMENTS AT THE SPECIFIED INDEX\n");
    printf("7-DISPLAY\n");

    int choice;
    printf("ENTER YOUR CHOICE FROM ABOVE\n");
    scanf("%d",&choice);

    if(choice==1){
     insert1();
   }
   if(choice==2){
    insertl();
   }

  if(choice==3){
   insertsp();
  }
if(choice==4){
  delete1();
 }
if (choice==5){
   deletel();
}
if(choice==6){
    deletesp();
}
if(choice==7){
   display();
}
printf("DO YOU WANT TO DO MORE OPERATIONS(1/0)\n");
scanf("%d",&pc);
}
}

void delete1(){
   int i;
   for(i=0;a[i]!=NULL;i++){
      a[i]=a[i+1];
   }
   n--;
   printf("ELEMENT AT FIRST INDEX IS DELETED\n");
}

void deletesp(){
   int i,p;
   printf("enter the position of the element u want to delete\n");
   scanf("%d",&p);
   for(i=(p-1);a[i]!=NULL;i++){
       a[i]=a[i+1];
   }
   n--;
   printf("ELEMENT AT %d position is deleted\n",p);
   
}

void deletel(){
   int i,p;
   printf("NOW YOU ARE DELETING ELEMENT AT LAST INDEX\n");
  for(i=(n-1);i>=0;i--) {
   a[i]=a[i-1];
  }
  n--;

  printf("deleted successfully\n");
}
void overflow(){
   printf("YOU CANT ENTER MORE THAN 10 ELEMENTS\n");
   printf("PROGRAM IS EXITED\n");

}

void insert1(){
   int i,x;
   printf("ENTER THE ELEMENT YOU WANT AT FIRST INDEX\n");
   scanf("%d",&x);
   for(i=(n-1);i>=0;i--){
        a[i+1]=a[i];
    }
  a[0]=x;
  n++;
  printf("VALUE IS INSERTED AT FIRST INDEX\n");
}

void insertl(){
   printf("ENTER THE ELEMENT U WANT AT LAST INDEX\n");
   scanf("%d",&a[n]);
   n++;

}

void insertsp(){
      int i,p;
      printf("ENTER THE POSITION OF THE ELEMENT U WANT TO CHANGE\n");
      scanf("%d",&p);
      n++;
      for(i=(n-1);i>=(p-1);i--){
         a[i+1]=a[i];
      }
      printf("ENTER THE ELEMENT\n");
      scanf("%d",&a[p-1]);
      printf("ELEMENT ENTERED AT POSITION %d SUCCESSFULLY\n",p);
}

void display(){
   printf("YOU ARE DISPLAYING ELEMENTS\n");
   int i;
   for(i=0;a[i]!=NULL;i++){
    printf("%d\n",a[i]);
}
}












