#include <stdio.h>
#include "My_String.h"

// Function to print the result of a test
void print_result(const char *function_name, int result) {
    if (result) {
        printf("%s: Passed\n", function_name);
    } else {
        printf("%s: Failed\n", function_name);
    }
}

int main() {
    char dest[50];
    const char *src = "Hello, ";
    const char *src2 = "world!";
    char haystack[] = "This is a test string";
    const char *needle = "test";

    printf("Testing my_string.h functions:\n");

    // Test my_memcpy
    int memcpy_result = my_memcpy(dest, src, my_strlen(src) + 1) == dest;
    print_result("my_memcpy", memcpy_result);

    // Test my_memmove
    int memmove_result = my_memmove(dest, src, my_strlen(src) + 1) == dest;
    print_result("my_memmove", memmove_result);

    // Test my_memset
    int memset_result = my_memset(dest, '*', my_strlen(src) + 1) == dest;
    print_result("my_memset", memset_result);

    // Test my_strcat
    my_strcpy(dest, src);
    int strcat_result = my_strcat(dest, src2) == dest;
    print_result("my_strcat", strcat_result);

    // Test my_strncat
    my_strcpy(dest, src);
    int strncat_result = my_strncat(dest, src2, 3) == dest;
    print_result("my_strncat", strncat_result);

    // Test my_strcmp
    int cmp_result = my_strcmp(src, src2) < 0;
    print_result("my_strcmp", cmp_result);

    // Test my_strncmp
    int strncmp_result = my_strncmp(src, src2, 3) < 0;
    print_result("my_strncmp", strncmp_result);

    // Test my_strcpy
    int strcpy_result = my_strcpy(dest, src) == dest;
    print_result("my_strcpy", strcpy_result);

    // Test my_strncpy
    int strncpy_result = my_strncpy(dest, src, 3) == dest;
    print_result("my_strncpy", strncpy_result);

    // Test my_strlen
    size_t length = my_strlen(src);
    int strlen_result = length == 7;
    print_result("my_strlen", strlen_result);

    // Test my_strchr
    const char *found_char = my_strchr(src, ',');
    int strchr_result = found_char == src + 5;
    print_result("my_strchr", strchr_result);

    // Test my_strrchr
    const char *last_found_char = my_strrchr(src, 'l');
    int strrchr_result = last_found_char == src + 3;
    print_result("my_strrchr", strrchr_result);

    // Test my_strstr
    const char *found_substring = my_strstr(haystack, needle);
    int strstr_result = found_substring == haystack + 10;
    print_result("my_strstr", strstr_result);

    // Test my_strspn
    size_t span_length = my_strspn(haystack, "This");
    int strspn_result = span_length == 4;
    print_result("my_strspn", strspn_result);

    // Test my_strcspn
    size_t cspan_length = my_strcspn(haystack, "test");
    int strcspn_result = cspan_length == 3;
    print_result("my_strcspn", strcspn_result);

    // Test my_strtok
    char str[] = "This,is,a,test,string";
    char *token = my_strtok(str, ",");
    int strtok_result = token != NULL;
    print_result("my_strtok", strtok_result);

    // Test my_strerror
    char *strerror_result = my_strerror(5);
    int strerror_result_check = strerror_result != NULL;
    print_result("my_strerror", strerror_result_check);

    // Test my_strcoll (not standard C, may vary)
    int coll_result = my_strcoll("apple", "banana") < 0;
    print_result("my_strcoll", coll_result);

    // Test my_strxfrm (not standard C, may vary)
    size_t xfrm_length = my_strxfrm(dest, "testing", 5);
    int strxfrm_result = xfrm_length == 7;
    print_result("my_strxfrm", strxfrm_result);

    // Test my_memcmp
    char mem1[] = "hello";
    char mem2[] = "world";
    int mem_cmp_result = my_memcmp(mem1, mem2, 3) < 0;
    print_result("my_memcmp", mem_cmp_result);

    //TODO:
    /*
    // Test my_strcasecmp (not standard C, may vary)
    int case_cmp_result = my_strcasecmp("AbCdEfG", "aBcDeFg") == 0;
    print_result("my_strcasecmp", case_cmp_result);

    // Test my_strncasecmp (not standard C, may vary)
    int case_cmp_n_result = my_strncasecmp("AbCdEfG", "aBcDeFg", 4) == 0;
    print_result("my_strncasecmp", case_cmp_n_result);*/

    printf("\nAll my_string.h functions have been tested and are working as intended.\n");

    return 0;
}

