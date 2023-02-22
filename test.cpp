#include "Base.h"

using namespace std;

int main ()
{
   Calculator cal;
   int op;

   while(op!=6)
   {
      system("clear");
      cal.options();
      cal.calculate();
      op = cal.getOp();
   }

   return 0;
}