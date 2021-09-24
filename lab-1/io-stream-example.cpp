/*
#include <iostream>
 
int main()
{
   // reading on type
   int i;
   float f;
   char ca [100];
   std::string s;
   std::cin >> i >> f >> ca >> s;
   std::cout << i << f << ca << s;
}
*/

/* #include <iostream>
 
int main()
{
   // reading an int with error checking
   int i;
   while (std::cin >> i,  !std::cin) {
      std::cin.clear();
      std::cin.ignore (256, '\n');
   }
   std::cout << i;
}
*/

#include <iostream>
#include <iomanip>

int main()
{
   char buffer[256];

   // read white-space delimted word
   std::cin >> buffer;

   // as above with buffer overflow check
   std::cin >> std::setw(256) >> buffer;

   // reads until buffer full or delimiter found or end-of-file
   std::cin.getline (buffer, sizeof(buffer));

   // as above but specify delimiter - reads & discards delimiter
   std::cin.getline (buffer, sizeof(buffer), '.');

   // as above - leaves delimiter in stream
   std::cin.get (buffer, sizeof(buffer), '.');

   // read & parse by character, reads
   for (int i=0; i<sizeof(buffer); ++i)
      std::cin.get(buffer[i]);
}


