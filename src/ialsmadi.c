//PART A

//1>
#include <stdio.h>
#define ARRAY_LEN 10
	double grades[ARRAY_LEN] = {3.7, 2.2, 4.3, 3.4, 3.2, 2.8, 3.9, 2.6, 4.1, 3.0};
    int i;
void main()
{

    //prints addresses
	 printf("type  \t|variable\t|address\t|value  \t|\n");
	for (i=0; i < ARRAY_LEN; i++) {

    printf("double\t|grade    \t|%p     |%lf\t|\n", &grades[i],grades[i]);
	}
   // printf("double\t|numb    \t|%p     |%d      \t|\n", &numb,numb);
   // printf("double\t|text    \t|%p     |%s\t|\n", &text,text);

  //  return 0;
}

//2>

// 2 hex characters = 2 nibbles = 1 byte
// 4 bytes are used to store each address on my computer.
// ALL my variables are located in the second half of all possible memory addresses. They all began with 'b'

//3> See attached diagram

//4> changing length within 7 chars doesnt change address values for me. This is because i'm NOT using the strings.h library and and text[7] has a specific memory chunk associated with it. But i can see how things might get messed up if i were using strings.h

