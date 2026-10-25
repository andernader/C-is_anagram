#include <stdio.h>

int main(void){
    char letters[26] = {0};
    unsigned char user_input;

    while(1){
        user_input = getchar();
        if(user_input == '\n' || user_input == ' ')
            break;
        if(user_input >= 'a' && user_input <= 'z'){
            user_input = user_input - 32;
            letters[user_input - 65]++;
        }else if(user_input >= 'A' && user_input <= 'Z'){
            letters[user_input - 65]++;

        }else{
            printf("Invalid input, only letters allowed!\n");
            return -1;
        }
    }

    char letters2[26] = {0};
    unsigned char user_input2;

    while(1){
        user_input2 = getchar();
        if(user_input2 == '\n' || user_input2 == ' ')
            break;
        if(user_input2 >= 'a' && user_input2 <= 'z'){
            user_input2 = user_input2 - 32;
            letters2[user_input2 - 65]++;
        }else if(user_input2 >= 'A' && user_input2 <= 'Z'){
            letters2[user_input2 - 65]++;

        }else{
            printf("Invalid input, only letters allowed!\n");
            return -1;
        }
    }

    for(int i = 0; i < 26; i++){
        if(letters[i] != letters2[i]){
            printf("The two words are not anagrams!\n");
            return 0;
        }
    }
    printf("The two words are anagrams!\n");
    return 0;
}
