
#inculde"Order.h"
#include<iostream>
usingnamespace std;
#include<cstring>


Payment::Payment()
{
p_ID = 0;
strcpy(p_type,"");
p_Amount = 0;
}
Payment::Payment(int p_Id,char P_type[],char p_Amount[]);
{
p_ID = p_ID ;
strcpy(p_type, "p_type");
 p_Amount = p_Amount;
}
void Payment::checkPayment(Order*p)
{
}
void Payment::confirmPayment()
{
}
void Payment::displayPaymentDetails()
{
}
Payment::~Payment()
{
//Destructor 
}
