
#include "Admin.h"
class Food
{
private:
  char F_Name[30];
  int F_No;
  int F_Price;
  int Qty;
  Admin *fAdmin[2];
public:
  Food();
  Food( char fName[], int fNo, int fPrice, int Qty);
  void setQty(int iQty);
  void setF_Name(char fName[]);
  void setF_No( int fNo);
  void setfPrice(int fPrice);
  void displayItemDetails();
  void updateItemDetails();
  ~Food();
};
