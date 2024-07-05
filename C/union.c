#include<stdio.h>
#include<string.h>
union person{
    char name[20];
    int age;
    int id;
};

int main(){
    union person p;
    strcpy(p.name,"aruna");
    //union stores only 1 value at a time
    //so, print after assigning the values
    printf("the name is %s\n",p.name); 
    p.age=21;
    printf("the age is %d\n",p.age); 
    p.id= 16;
    printf("the id is %d\n",p.id); 

    printf("\nthe size is %llu",sizeof(p));
    return 0;
}