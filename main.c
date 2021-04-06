#include <stdio.h>
#include <stdlib.h>
#include <string.h> // to use string copy and strlen
#include <ctype.h> // to change to lowercase

char * removeSpaces(char *string) // uses pointer to delete spaces
{
  char *output = string, *ptr = string;
  for(; *string != '\0'; ++string){
    if(*string != ' '){
      *ptr++ = *string;
    }
  }
  *ptr = '\0';

  return output; // prints out string
}
 void anagram(char* word1,char* word2){
    if(strlen(word1) != strlen(word2)){
            printf("These words are not anagrams");
    }else{
    int matches;
    for(int i = 0;i < strlen(word1);i++){
        for(int j = 0;j < strlen(word2);j++){
                if(word1[i] == word2[j]){
                        word1[i] = "0"; // deletes repeats
                    matches++;
                }
        }
    }
    //if the number of matches is equal to the string length the words are anagrams
    if(matches == strlen(word1)){
        printf("These words are anagrams");
    } else{
    printf("These words are not anagrams");
    }
    }
 }
int main()
{
char word1[10],word2[10];

printf("Enter the first word :\n"); scanf("%[^\n]s", &word1);
printf("\nEnter the second  word:\n"); scanf("\n%[^\n]s", &word2);

for(int i = 0;i<strlen(word1);i++){
            word1[i] = tolower(word1[i]); // changes word1 to lowercase
    }
for(int i = 0;i<strlen(word2);i++){
            word2[i] = tolower(word2[i]); // changes word2 to lowercase
    }

strcpy(word1,removeSpaces(&word1)); // removes spaces
strcpy(word2,removeSpaces(&word2));

anagram(&word1,&word2);

    return 0;
}
