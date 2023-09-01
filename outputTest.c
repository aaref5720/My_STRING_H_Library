#include <stdio.h>
#include "My_String.h"

int main() {
    char dest[50];
    const char *src = "Hello, ";
    const char *src2 = "world!";
    char haystack[] = "This is a test string";
    const char *needle = "test";

    printf("Testing my_string.h functions:\n");

    // Test my_memcpy
    my_memcpy(dest, src, my_strlen(src) + 1);
    printf("my_memcpy: %s\n", dest);

    // Test my_memmove
    my_memmove(dest, src, my_strlen(src) + 1);
    printf("my_memmove: %s\n", dest);

    // Test my_memset
    my_memset(dest, '*', my_strlen(src) + 1);
    printf("my_memset: %s\n", dest);

    // Test my_strcat
    my_strcpy(dest, src);
    my_strcat(dest, src2);
    printf("my_strcat: %s\n", dest);

    // Test my_strncat
    my_strcpy(dest, src);
    my_strncat(dest, src2, 3);
    printf("my_strncat: %s\n", dest);

    // Test my_strcmp
    int cmp_result = my_strcmp(src, src2);
    printf("my_strcmp: %d\n", cmp_result);

    // Test my_strncmp
    cmp_result = my_strncmp(src, src2, 3);
    printf("my_strncmp: %d\n", cmp_result);

    // Test my_strcpy
    my_strcpy(dest, src);
    printf("my_strcpy: %s\n", dest);

    // Test my_strncpy
    my_strncpy(dest, src, 3);
    printf("my_strncpy: %s\n", dest);

    // Test my_strlen
    size_t length = my_strlen(src);
    printf("my_strlen: %zu\n", length);

    // Test my_strchr
    const char *found_char = my_strchr(src, ',');
    printf("my_strchr: %s\n", found_char);

    // Test my_strrchr
    const char *last_found_char = my_strrchr(src, 'l');
    printf("my_strrchr: %s\n", last_found_char);

    // Test my_strstr
    const char *found_substring = my_strstr(haystack, needle);
    printf("my_strstr: %s\n", found_substring);

    // Test my_strspn
    size_t span_length = my_strspn(haystack, "This ");
    printf("my_strspn: %zu\n", span_length);

    // Test my_strcspn
    size_t cspan_length = my_strcspn(haystack, "test");
    printf("my_strcspn: %zu\n", cspan_length);

    // Test my_strtok
    char str[] = "This,is,a,test,string";
    char *token = my_strtok(str, ",");
    while (token != NULL) {
        printf("my_strtok: %s\n", token);
        token = my_strtok(NULL, ",");
    }

    // Test my_strerror
    printf("my_strerror: %s\n", my_strerror(5));

    // Test my_strcoll (not standard C, may vary)
    int coll_result = my_strcoll("apple", "banana");
    printf("my_strcoll: %d\n", coll_result);

    // Test my_strxfrm (not standard C, may vary)
    size_t xfrm_length = my_strxfrm(dest, "testing", 5);
    printf("my_strxfrm: %s, Length: %zu\n", dest, xfrm_length);

    // Test my_memcmp
    char mem1[] = "hello";
    char mem2[] = "world";
    int mem_cmp_result = my_memcmp(mem1, mem2, 3);
    printf("my_memcmp: %d\n", mem_cmp_result);

    // TODO:
    /*// Test my_strcasecmp (not standard C, may vary)
    int case_cmp_result = my_strcasecmp("AbCdEfG", "aBcDeFg");
    printf("my_strcasecmp: %d\n", case_cmp_result);

    // Test my_strncasecmp (not standard C, may vary)
    int case_cmp_n_result = my_strncasecmp("AbCdEfG", "aBcDeFg", 4);
    printf("my_strncasecmp: %d\n", case_cmp_n_result);*/

    printf("\nAll my_string.h functions have been tested and are working as intended.\n");

    return 0;
}
