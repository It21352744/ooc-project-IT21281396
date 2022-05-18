#include "Order.h"
class Payment
{
  
private:
int p_ID;
char p_Type[20];
double p_Amount;

public:
Payment();
Payment(int p_ID, char p_Type[],double p_Amount);
void setp_ID( int p_ID);
void setp_Type(char p_Type[]);
void setp_Amount(double p_Amount);
void checkPayment(Order*p);
void confirmPayment();
void displayDetails();
~Payment();

};
