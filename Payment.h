#include "Order.h"
class Payment
{
private:

int P_ID;
char P_Type[20];
double P_Amount;
public:

Payment();
Payment(int pID, char pType[],double pAmount);
void setp_ID( int pID);
void setp_Type(char pType[]);
void setp_Amount(double pAmount);
void checkPayment(Order*p);
void confirmPayment();
void displayDetails();
~Payment();
};
