#include "Order.h"
class Cart
{
private:
  Order* order[5];
public:
  Cart();
  Cart(Order* order[]);
  void cartDetails();  
  ~Cart();


};