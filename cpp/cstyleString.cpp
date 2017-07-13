
/* Write a function to print a C-style string character by character.
 Use a pointer to step through each character of the string and print
that character. Stop when you hit a null terminator. Write a main function
that tests the function with the string literal “Hello, world!”.

Hint: Use operator++ to advance the pointer to the next character */
#include<iostream>
void printChar(const char  *str){
    while(*str != '\0'){
        std::cout<<*str<<std::endl;
        ++str;
    }
}
int main(){
    printChar("Hello, world!");
    return 0;
}