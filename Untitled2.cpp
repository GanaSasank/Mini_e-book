#include <stdio.h>

int main()
{
  char str[20];
  fgets(str,200, stdin); // read from stdin
  puts(str);
  // print read content out to stdout
  // open the file
  FILE *f = fopen("D:\\file.txt" , "w"); 
  // if there was an error
  if(f == NULL)
  {
    perror("Error opening file"); // print error
    return(-1);
  }
  // if there was no error
  else
  { 
    fgets(str, 20, f); // read from file
    puts(str); // print read content out to stdout
  }
  fclose(f); // close file
  return(0);
}
