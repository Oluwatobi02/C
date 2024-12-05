#include <stdio.h>
#include <string.h>

char * reverse_string(char *string) {
    int length = strlen(string)-1;
    int start = 0;
    while (start < length) {
        char temp = string[start];
        string[start] = string[length];
        string[length] = temp;
        start++;
        length--;
    }
    return string;
}
void reverse(char *str) {
    char *end = str + strlen(str)-1;
    printf("%s \n", str);
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
    printf("%s\n", str);
}

int main() {
    char str1[] = "tobi is a good boy";
    char str2[] = "tobi";
    printf("%s \n", reverse_string(str1));
    reverse(str2);
    return 0;
}

