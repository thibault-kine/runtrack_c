#include <stdio.h>
#include <unistd.h>

int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i])
        ++i;
        
    if (str1[i] < str2[i]) {
        return -1;
    }
    if (str1[i] > str2[i]) {
        return 1;
    }
    return 0;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     char *ref = "abcde";
//     char *sup = "bcdef";
//     char *inf = "!abcd";

//     printf("%s compared to %s = %d\n", ref, ref, my_strcmp(ref, ref)); // Égalité
//     printf("%s compared to %s = %d\n", ref, inf, my_strcmp(ref, inf)); // Inferiorité
//     printf("%s compared to %s = %d\n", ref, sup, my_strcmp(ref, sup)); // Supériorité
// }