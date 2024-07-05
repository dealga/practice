#include<stdio.h>
#include<string.h>
struct store{
    double price;  //common for both book and shirt  //8bytes
    char design[20]; //for shirt and book            //20bytes
    union{
        struct {
            int num_pages; //for book                        //4bytes
            char author[20]; //for book                      //20bytes
        }book;
        struct {
            char color[20]; //for shirt                      //20bytes
            char size[10]; //for shirt                       //10bytes  
        }shirt;
    }item;

};

int main(){
    struct store p;
    p.price=250;
    strcpy(p.design,"EBook");
    strcpy(p.item.book.author, "Debus Richie");
    printf("the author of the book is %s\n", p.item.book.author);
    printf("the price of the book is %f\n", p.price);
    printf("the design of the book is %s\n", p.design);
    printf("the size of the book: %llu bytes", sizeof(p));  
    return 0;                                                       
}