#include <stdio.h>
#include "../Job03/array_clone.c"
#include "../../Jour01/Job01/my_putstr.c"

/**
 * Applique une fonction `f` sur chaque entrée du tableau `arr` (équivalent de `map`)
 * @param arr le tableau sur lequel appliquer la fonction
 * @param f la fonction à appliquer sur chaque entrée du tableau
*/
char **func_to_array(char **arr, void (*f)(char*)) {
    
    int size = 0;
    while(arr[size] != NULL) size++;
    char **res = array_clone(arr, size);

    int i = 0; 
    while(res[i] != NULL) {
        f(res[i]);
        i++;
    }

    return res;
}

// int main() {
//     char *my_arr[6] = {
//         "zelande", "anerie", "rue", "coucou", "bouteille", NULL
//     };

//     char **new_arr = func_to_array(my_arr, my_putstr);

//     // Libérer la mémoire
//     for(int i = 0; new_arr[i] != NULL; i++) {
//         free(new_arr[i]);
//     }
//     free(new_arr);
// }