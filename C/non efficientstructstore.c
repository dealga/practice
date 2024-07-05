#include<stdio.h>
#include<string.h>
struct store{
    double price;  //common for both book and shirt  //8bytes
    int num_pages; //for book                        //4bytes
    char design[20]; //for shirt and book            //20bytes
    char author[20]; //for book                      //20bytes
    char color[20]; //for shirt                      //20bytes
    char size[10]; //for shirt                       //10bytes  
};

int main(){
    struct store book;
    book.price=250;
    strcpy(book.design,"EBook");
    strcpy(book.author, "Debus Richie");
    printf("the esize of the book: %llu bytes", sizeof(book));  // the size comes to 88 bytes though we'v eused less
    return 0;                                                   //this is a non efficient structure    
}