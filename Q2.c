#include <stdio.h>

main() {
    
    int count = 0;
    char c; //the char from the user
    char value; 
    printf("Enter Char to Count:");
    c = getchar(); // get the first char.

    
    if(c != 'm' && c != 'M' && c != 's' & c != 'S'){ //if the user dont give a right char.
        return 0;
    }
    printf("Enter the chars sequence :\n");
        value = getchar();
        while (value != '$'){ // if the char != $ keep scan chars.
          value = getchar();
          if(value == c){ //count how much from the char.
          count++;
          }
        }
     if (count > 0){   
    printf("the Char with ASCII code is : %d appeard: %d", c, count);    // print the ascii value and the count;
     }
    
    return 0;
}