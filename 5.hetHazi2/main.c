#include "header.h"

int main() {
    STACK myStack;
    char word[30];
    scanf("%s", word);
    myStack=Create(strlen(word));
    for (int i=0;i<strlen(word);i++)
    {
        Push(&myStack, word[i]);
    }
    //Print(&myStack);
    if (isPalindrome(myStack))
        printf("Palindrom szo!\n");
    else
    {
        printf("Nem palindrom szo!\n");
    }
    return 0;
}
