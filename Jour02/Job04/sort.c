#include <stdio.h>
#include "../Job03/array_clone.c"
#include "../../Jour01/Job06/my_strcmp.c"

void char_swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

char **sort(char **arr) {

    int size = 0;
    while(arr[size] != NULL) size++;
    char **res = array_clone(arr, size);

    int swapped; // pour confirmer que les deux éléments ont étés swap
    for(int i = 0; i < size - 1; i++) {
        swapped = 0;
        // size - i - 1 car on sait que le i-ème dernier élément est déjà trié
        for(int j = 0; j < size - i - 1; j++) { 
            // Si le premier élément est plus grand que le suivant
            if(my_strcmp(res[j], res[j+1]) == 1) {
                // on les échange
                char_swap(&res[j], &res[j+1]);
                swapped = 1;
                printf("coucou\n");
            }
        }
        // S'il n'y a plus rien à trier, on sort de la boucle
        if(swapped == 0) break;
    }

    return res;
}

// int main() {
//     char *my_arr[6] = {
//         "zelande", "anerie", "rue", "coucou", "bouteille", NULL
//     };

//     char **new_arr = sort(my_arr);
//     for(int i = 0; new_arr[i] != NULL; i++) {
//         printf("%s ", new_arr[i]);
//     }
// }