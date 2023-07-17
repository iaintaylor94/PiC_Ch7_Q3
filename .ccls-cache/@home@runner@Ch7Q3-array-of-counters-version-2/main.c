// This program has a serious fault see readme.md for more details

#include <stdio.h>
#include <stdbool.h>

int main(void) {

  int ratingCounters[10], i, response;
  
  // Get number of responses
  int responseNumbers;
  printf ("Enter the number of responses:  ");
  scanf ("%d", &responseNumbers);

  
  // Set rating counter to zero
  for (i = 1; i <= 10; i++)
    ratingCounters[i] = 0;

  
  // Get responses
  printf ("Enter your responses\n");

  i = 1;
  while (true) {
    scanf ("%i", &response);

    if (response < 1) 
      printf ("Bad response: %i\n", response);
    else
      ++ratingCounters[response];

    if (response == 999)
      break;
    
    i++;
  }

  // Print the numbers of each response
  printf ("\n\nRating Number of Responses\n");
  printf ("------ -------------------\n");

  for (i = 1; i <= 10; i++) 
    printf ("%4i%22i\n", i, ratingCounters[i]);
  
  return 0;
}