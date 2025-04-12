#include<stdio.h>
#include<string.h>
struct book
{
    char title[30];
    char author[30];
    int price;   
};

int main()
{
    struct book book1,book2,book3;
    printf("Give details of the book like Title,Author,Price\n\n");
    printf("enter the book details of book1\n");
    printf("enter Title:\n");
    fgets(book1.title,30,stdin);
    book1.title[strcspn(book1.title,"\n")]='\0';
    printf("enter author:\n");
    fgets(book1.author,30,stdin);
    book1.author[strcspn(book1.author,"\n")]='\0';
    printf("enter price:\n");
    scanf("%d",&book1.price);
    getchar();
    printf("enter the book details of book2\n");
    printf("enter Title:\n");
    fgets(book2.title,30,stdin);
    book2.title[strcspn(book2.title,"\n")]='\0';
    printf("Enter Author:\n");
    fgets(book2.author,30,stdin);
    book2.author[strcspn(book2.author,"\n")]='\0';
    printf("enter price:\n");
    scanf("%d",&book2.price);
    getchar();
    printf("enter the book details of book3\n");
    printf("enter title:\n");
    fgets(book3.title,30,stdin);
    book3.title[strcspn(book3.title,"\n")]='\0';
    //printf("enter the book details of book2\n");
    printf("Enter author:\n");
    fgets(book3.author,30,stdin);
    book3.author[strcspn(book3.author,"\n")]='\0';
    printf("enter price:\n");
    scanf("%d",&book3.price);
    if(book1.price==book2.price&&book1.price==book3.price&&book2.price==book3.price)
    {
        printf("\"All PRICES ARE EQUAL\"");
        printf("Details of book1:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book1.title,book1.author,book1.price);
        printf("Details of book2:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book2.title,book2.author,book2.price);
        printf("Details of book3:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book3.title,book3.author,book3.price);
    }
    else{
    if(book1.price>book2.price&&book1.price>book3.price)
    {
        printf("book1 is expensive\n");
        printf("Details of book1:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book1.title,book1.author,book1.price);
    }else if(book2.price>book1.price&&book2.price>book3.price)
    {
        printf("book2 is expensive\n");
        printf("Details of book2:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book2.title,book2.author,book2.price);
    }else if(book3.price>book1.price&&book3.price>book2.price)
    {
        printf("book3 is expensive\n");
        printf("Details of book3:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book3.title,book3.author,book3.price);
    }printf("\n");
    if(book1.price<book2.price&&book1.price<book3.price)
    {
        printf("book1 is lowest\n");
        printf("Details of book1:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book1.title,book1.author,book1.price);
    }else if(book2.price<book1.price&&book2.price<book3.price)
    {
        printf("book2 is lowest");
        printf("Details of book2:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book2.title,book2.author,book2.price);

    }else if(book3.price<book1.price&&book3.price<book2.price)
    {
        printf("book3 is lowest");
        printf("Details of book3:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book3.title,book3.author,book3.price);

    }else if(book1.price==book2.price&&book1.price<book3.price)
    {
        printf("book1 and book2 prices are equal\n");
        printf("Details of book1:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book1.title,book1.author,book1.price);
        printf("Details of book2:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book2.title,book2.author,book2.price);
    }else if(book2.price==book3.price&&book2.price<book1.price)
    {
        printf("book2 and book3 prices are equal\n");
        printf("Details of book2:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book2.title,book2.author,book2.price);
    }else if(book1.price==book3.price&&book1.price<book2.price)
    {
        printf("book1 and book3 prices are equal\n");
        printf("Details of book1:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book1.title,book1.author,book1.price);
        printf("Details of book3:\nTitle : \"%s\"\nAuthor : \"%s\"\nPrice : %d",book3.title,book3.author,book3.price);

    }
    }
    printf("\n");
}
