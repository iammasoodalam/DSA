#include <stdio.h>
#include <stdlib.h>

typedef struct polyNode
{
    int coefficient;
    int exponent;
    struct polyNode *link;
} Node;

Node *createPolynomial(){
    Node *header, *p, *new;
    int n;

    header = (Node *)malloc(sizeof(Node));
    header->coefficient = 0;
    header->exponent = 0;
    header->link = NULL;
    p = header;

    printf("Enter the degree of your polynomial: ");
    scanf("%d", &n);

    while (n >= 0)
    {
        new = (Node *)malloc(sizeof(Node));
        printf("Enter the data for x^%d: ", n);
        scanf("%d", &new->coefficient);
        new->exponent = n;
        new->link = NULL;
        p->link = new;
        p = new;
        n--;
    }
    return header;
}

void traversalPoly(Node *header){
    Node *ptr;
    ptr = header->link;
    while (ptr != NULL){
        if(ptr->coefficient != 0){
            if(ptr != header->link){
                printf(" + ");
            }
            printf("%d X^(%d)", ptr->coefficient, ptr->exponent);
        }
        ptr = ptr->link;
    }
    printf("\n");
}

Node *addPolynomials(Node *header1, Node *header2){
    printf("This algorith only works on the positive powers of polynomials.\n");

    Node *header3 = (Node *)malloc(sizeof(Node));
    Node *ptr1 = header1->link;
    Node *ptr2 = header2->link;
    Node *ptr3 = header3;

    while(ptr1 != NULL && ptr2 != NULL){
        Node *new = (Node *)malloc(sizeof(Node));
        if(ptr1->exponent == ptr2->exponent){
            new->exponent = ptr1->exponent;
            new->coefficient = ptr1->coefficient + ptr2->coefficient;
            new->link = NULL;
            ptr3->link = new;
            ptr3 = new;
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        } else if (ptr1->exponent > ptr2->exponent){
            new->exponent = ptr1->exponent;
            new->coefficient = ptr1->coefficient;
            new->link = NULL;
            ptr3->link = new;
            ptr3 = new;
            ptr1 = ptr1->link;
        } else {
            new->exponent = ptr2->exponent;
            new->coefficient = ptr2->coefficient;
            new->link = NULL;
            ptr3->link = new;
            ptr3 = new;
            ptr2 = ptr2->link;
        }
    }
    while (ptr1 != NULL){
        Node *new = (Node *)malloc(sizeof(Node));
        new->exponent = ptr1->exponent;
        new->coefficient = ptr1->coefficient;
        new->link = NULL;
        ptr3->link = new;
        ptr3 = new;
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL){
        Node *new = (Node *)malloc(sizeof(Node));
        new->exponent = ptr2->exponent;
        new->coefficient = ptr2->coefficient;
        new->link = NULL;
        ptr3->link = new;
        ptr3 = new;
        ptr2 = ptr2->link;
    }
    return header3;
}

int addPolynomialsMain(){
    Node *header1 = createPolynomial();
    traversalPoly(header1);
    Node *header2 = createPolynomial();
    traversalPoly(header2);
    Node *result = addPolynomials(header1, header2);
    traversalPoly(result);
}