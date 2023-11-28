#include <stdio.h>
#include <stdlib.h>
#include "../../Jour01/Job05/my_strdup.c"

/**
 * Clone un tableau `strs` jusqu'à l'index `n`
 * @param strs le tableau original
 * @param n l'index limite 
*/
char **array_clone(char **strs, int n) {
    char **res = malloc(sizeof(char*) * (n + 1));
    int i = 0;
    
    while(i < n) {
        res[i] = my_strdup(strs[i]);
        i++;
    }

    res[i] = NULL; // Assigne le dernier index à NULL

    return res;
}

// int main() {
//     char *my_arr[4] = {
//         "anerie", "rue", "pina colada", NULL
//     };
//                                                  //    [0]     [1]   [2]   
//     char **my_arr_copy = array_clone(my_arr, 3); // { "ane", "rue", NULL }

//     for(int i = 0; my_arr_copy[i] != NULL; i++) {
//         printf("%s\n", my_arr_copy[i]);
//     }
// }