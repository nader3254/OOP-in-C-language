
#include <stdio.h>

// Online C compiler to run C program online
typedef struct 
{
    char* name;
    int   customers;

    void (*AddCustomer)();
    void (*RemoveCustomer)();
    
}nader_class;

void add_cust(nader_class * x)
{
     
     x->customers++;

}
void rem_cust()
{
   nader_class * x;
   x->customers --;
   

}

nader_class new_nader_class()
{
    nader_class* n ;
    n = malloc(sizeof(nader_class));
    n->name      = "";
    n->customers =0;

    n->RemoveCustomer  = rem_cust;
    n->AddCustomer     = add_cust;
     
    nader_class nn= *n; 
   
     


    return nn ;
}
/*
nader_class new_nader_class(char* name, int cust)
{
    nader_class n ;
    n.name      = name;
    n.customers =cust;
    return n;
}
**/
void main(void)
{
    nader_class market =new_nader_class();
 
    market.AddCustomer();
    printf("after the adding : %d  \n",market.customers);
    market.RemoveCustomer();
    printf("after the removing :  %d  \n",market.customers);
   while (1)
   {
       /* code */
   }
   

}


/*int x=50;


static struct  home
{
   int* rooms;
   int  data;
   

   void (*AddRoom)(home *);   

}hh;

void add_room()
{
    *(hh.rooms)++;


}


 void test_function()
{
    
   hh.rooms=&x;
}

void main(void)
{
  
   hh.AddRoom  = add_room; 
    

   // hh.rooms=0;
    //hh.data=0;

   //hh.rooms++;
    test_function();
  //  *(hh.rooms) = 80;
   
   hh.AddRoom();

    printf("%d \n",*(hh.rooms));

    while (1);

    





}*/
