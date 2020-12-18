#include<stdio.h>
struct goals {
int id, age, goa;
char name[50];
};
struct goals g[10];

int i=0;

void insert(){
printf("Enter player %d",i+1);
printf("\nENTER ID:");
scanf("%d",&g[i].id);
printf("\nENTER player name:");
scanf("%s",g[i].name);
printf("\nENTER player age:");
scanf("%d",&g[i].age);
printf("\nENTER player goals:");
scanf("%s",&g[i].goa);
i++;
}

void display(){
int k;
printf("The players are\n\n");
printf("ID  NAME    AGE   GOALS\n");

for(k=0;k<i;k++){
    printf("%d   ",g[k].id);
    printf("%s  ",g[k].name);
    printf("%d   ",g[k].age);
    printf("%d   \n",g[k].goa);
    }
}

void sort (){
int k,l;
struct goals temp;
    for(k=0;k<i;k++){
        for(l=0; l=i-1;l++){
            if (strcmp(g[l].name, g[l+1].name)>0){
                    temp=g[l];
                    g[l]=g[l+1];
                    g[l+1]=temp;
            }
        }
    }
    printf("The players are\n\n");
printf("ID  NAME    AGE   GOALS\n");

for(k=0;k<i;k++){
    printf("%d   ",g[k].id);
    printf("%s  ",g[k].name);
    printf("%d   ",g[k].age);
    printf("%d   \n",g[k].goa);
    }
}

void search (){

}

void main (){
    int a;

    do {
        printf("\t\t Choose any number\n\t\t1. Insert\n\t\t2. Display\n\t\t3. Sort\n\t\t4. Search\n\t\t");
    scanf("%d",&a);
    switch (a) {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        sort();
        break;
    case 4:
        search();
        break;
    default:
        printf("Exit");
        }
    } while (a<3);
}
