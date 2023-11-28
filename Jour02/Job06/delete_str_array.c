#include <stdio.h>
#include "../Job03/array_clone.c"

void delete_str_array(char ***strs) {

    int size = 0;
    while((*strs)[size] != NULL) size++;
    printf("%d\n", size);
    for(int i = 0; i < size; i++) {
        // Libère l'espace de chaque str 
        free((*strs)[i]);
    }
    // Libbère l'espace du tableau entier
    free(*strs);

    *strs = NULL;
}

// int main() {
//     char *my_arr[4] = {
//         "anerie", "rue", "pina colada", NULL
//     };

//     printf("Coucou\n");
//     char **new_arr = array_clone(my_arr, 3);

//     printf("%p\n", new_arr);
//     delete_str_array(&new_arr);
//     printf("%p\n", new_arr);
// }
