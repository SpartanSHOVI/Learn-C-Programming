/*

🔹 break
    Exits a loop or switch immediately.

*/

#include <stdio.h>

int main (){
    for(int i = 0; i < 10; i++){
        if(i == 5) break;
        printf("%d", i);
    }
    return 0;
}