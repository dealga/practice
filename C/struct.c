#include<stdio.h>
#include<string.h>
struct person{
    char name[20];
    int age;
    int id;
};

int main(){
    struct person p;
    strcpy(p.name,"aruna");
    p.age=21;
    p.id= 16;
    printf("name : %s, age : %d, id : %d",p.name,p.age,p.id); //i.e 28(sum of all)
    printf("\nthe size is %llu",sizeof(p));
    return 0;
}