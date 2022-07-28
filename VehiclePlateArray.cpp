// License plate number
#include <iostream>
#include <string>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function

using namespace std;

int main()
{
  unsigned seed = time(0);

   // Seed the random number generator.
  srand(seed);
  char ch1[8] ;
  for (int a = 0; a < 10; a++)
  {
      for(int i= 0; i < 3; i++)
      {
        ch1[i] = 'A' + rand() % 26;
      }
      for(int i=3; i < 7; i++)
      {
        ch1[i] = '0' + rand() % 10;
      }
     // ch1[7]= '\0';
        cout << "Vehicle plate number" << a+1 << " : "  << ch1 << endl;
  }
}
