#include<stdio.h>
struct goals{
int id,age,goa;
char name[50];
};
struct goals g[10],t;

int i=0;

void insert(){

printf("Enter player  %d",i+1);
printf("\nEnter ID :");
scanf("%d",&g[i].id);
printf("\nEnter player name:");
scanf("%s",g[i].name);
printf("\nEnter player age:");
scanf("%d",&g[i].age);
printf("\nEnter player Goals:");
scanf("%d",&g[i].goa);
i++;

}

void display(){
int k;
printf("The players are \n\n");
printf("ID   Name    Age    Goals\n");

for(k=0;k<i;k++){
    printf("%d   ",g[k].id);
    printf("%s   ",g[k].name);
    printf("%d   ",g[k].age);
    printf("%d   \n",g[k].goa);
}

}

void sort(){
    int j,k;
    for(j=0;j<i;j++){
    for(k=j;k<i;k++){

        if(strcmp(g[j].name ,g[k].name)>0){
        t=g[k];
        g[k]=g[j];
        g[j]=t;
    }
    }

}
printf("Players are:\n");
printf("ID Name  Age Goals\n");
for(j=0;j<i;j++){
       printf("%d ",g[j].id);
       printf("%s  ",g[j].name);
       printf("%d  ",g[j].age);
       printf("%d\n",g[j].goa);
}
}


void main(){
    int a;
do{
    printf("\t\t Choose any number\n\t\t1. Insert\n\t\t2. Display \n\t\t3. sort\n\t\t");

scanf("%d",&a);

switch(a){
case 1:
    insert();
    break;
case 2:
    display();
    break;
case 3:
    sort();
    break;
default:
    printf("Exit");
}
}while(a<4);
}





