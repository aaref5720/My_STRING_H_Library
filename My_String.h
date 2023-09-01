#ifndef MY_STRING_H
#define MY_STRING_H

#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Searches for the first occurrence of the character 'c' (an unsigned char) in the first 'n' bytes of the memory block pointed to by 'str'.
 * 
 * @param str Pointer to the memory block to search in.
 * @param c The character to search for.
 * @param n Number of bytes to search within.
 * @return void* A pointer to the first occurrence of 'c', or NULL if 'c' is not found.
 */
void *my_memchr(const void *str, int c, size_t n);

/**
 * @brief Compares the first 'n' bytes of memory blocks 's1' and 's2'.
 * 
 * @param s1 Pointer to the first memory block.
 * @param s2 Pointer to the second memory block.
 * @param n Number of bytes to compare.
 * @return int 0 if the memory blocks are equal, a positive value if 's1' > 's2', and a negative value if 's1' < 's2'.
 */
int my_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Copies 'n' bytes from memory block 'src' to memory block 'dest'.
 * 
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param n Number of bytes to copy.
 * @return void* A pointer to 'dest'.
 */
void *my_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies 'n' bytes from memory block 'src' to memory block 'dest', handling overlapping regions.
 * 
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param n Number of bytes to copy.
 * @return void* A pointer to 'dest'.
 */
void *my_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Sets 'n' bytes of memory block pointed to by 's' to the value 'c'.
 * 
 * @param s Pointer to the memory block.
 * @param c The value to set.
 * @param n Number of bytes to set.
 * @return void* A pointer to 's'.
 */
void *my_memset(void *s, int c, size_t n);

/**
 * @brief Concatenates the string 'src' to the end of the string 'dest'.
 * 
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @return char* A pointer to the resulting string 'dest'.
 */
char *my_strcat(char *dest, const char *src);

/**
 * @brief Concatenates at most 'n' characters from the string 'src' to the end of the string 'dest'.
 * 
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Maximum number of characters to concatenate.
 * @return char* A pointer to the resulting string 'dest'.
 */
char *my_strncat(char *dest, const char *src, size_t n);

/**
 * @brief Compares the string 'str1' to the string 'str2'.
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return int 0 if the strings are equal, a positive value if 'str1' > 'str2', and a negative value if 'str1' < 'str2'.
 */
int my_strcmp(const char *s1, const char *s2);

/**
 * @brief Compares at most the first 'n' bytes of strings 'str1' and 'str2'.
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param n Maximum number of bytes to compare.
 * @return int 0 if the strings are equal, a positive value if 'str1' > 'str2', and a negative value if 'str1' < 'str2'.
 */
int my_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Copies the string 'src' to 'dest'.
 * 
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @return char* A pointer to the resulting string 'dest'.
 */
char *my_strcpy(char *dest, const char *src);

/**
 * @brief Copies at most 'n' characters from the string 'src' to 'dest'.
 * 
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Maximum number of characters to copy.
 * @return char* A pointer to the resulting string 'dest'.
 */
char *my_strncpy(char *dest, const char *src, size_t n);

/**
 * @brief Calculates the length of the string 's'.
 * 
 * @param s Pointer to the string.
 * @return size_t Length of the string.
 */
size_t my_strlen(const char *s);

/**
 * @brief Finds the first occurrence of the character 'c' (an unsigned char) in the string 's'.
 * 
 * @param s Pointer to the string.
 * @param c The character to search for.
 * @return char* A pointer to the first occurrence of 'c', or NULL if 'c' is not found.
 */
const char *my_strchr(const char *s, int c);

/**
 * @brief Finds the last occurrence of the character 'c' (an unsigned char) in the string 's'.
 * 
 * @param s Pointer to the string.
 * @param c The character to search for.
 * @return char* A pointer to the last occurrence of 'c', or NULL if 'c' is not found.
 */
const char *my_strrchr(const char *s, int c);

/**
 * @brief Finds the first occurrence of the entire string 'needle' in the string 'haystack'.
 * 
 * @param haystack Pointer to the string to search in.
 * @param needle Pointer to the string to search for.
 * @return char* A pointer to the first occurrence of 'needle', or NULL if 'needle' is not found.
 */
const char *my_strstr(const char *haystack, const char *needle);

/**
 * @brief Calculates the length of the initial segment of string 's' that contains only characters from string 'accept'.
 * 
 * @param s Pointer to the string to examine.
 * @param accept Pointer to the string containing the characters to match.
 * @return size_t Length of the segment.
 */
size_t my_strspn(const char *s, const char *accept);

/**
 * @brief Calculates the length of the initial segment of string 's' that contains no characters from string 'reject'.
 * 
 * @param s Pointer to the string to examine.
 * @param reject Pointer to the string containing the characters to avoid.
 * @return size_t Length of the segment.
 */
size_t my_strcspn(const char *s, const char *reject);

/**
 * @brief Splits the string 'str' into tokens using 'delimiters'.
 * 
 * @param str Pointer to the string to be tokenized.
 * @param delimiters Pointer to the string containing delimiter characters.
 * @return char* A pointer to the next token, or NULL if no more tokens are found.
 */
char *my_strtok(char *str, const char *delimiters);

/**
 * @brief Reentrant version of my_strtok.
 * 
 * @param str Pointer to the string to be tokenized.
 * @param delimiters Pointer to the string containing delimiter characters.
 * @param saveptr Pointer to a save pointer used internally by my_strtok_r.
 * @return char* A pointer to the next token, or NULL if no more tokens are found.
 */
char *my_strtok_r(char *str, const char *delimiters, char **saveptr);

/**
 * @brief Searches an internal array for the error number 'errnum' and returns a pointer to an error message string.
 * 
 * @param errnum The error number.
 * @return char* A pointer to a string describing the error.
 */
char *my_strerror(int errnum);

/**
 * @brief Compares string 's1' to 's2'. The result is dependent on the LC_COLLATE setting of the location.
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return int An integer indicating the collation order.
 */
int my_strcoll(const char *s1, const char *s2);

/**
 * @brief Transforms the first 'n' characters of string 'src' using collation rules, storing the result in 'dest'.
 * 
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * @param n Maximum number of characters to transform.
 * @return size_t The length of the transformed string.
 */
size_t my_strxfrm(char *dest, const char *src, size_t n);

// TODO: Add more test cases for other functions

/**
 * @brief Case-insensitive string comparison.
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return int 0 if the strings are equal, a positive value if 's1' > 's2', and a negative value if 's1' < 's2'.
 */
int my_strcasecmp(const char *s1, const char *s2);

/**
 * @brief Case-insensitive comparison of at most 'n' characters of two strings.
 * 
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param n Maximum number of characters to compare.
 * @return int 0 if the strings are equal, a positive value if 's1' > 's2', and a negative value if 's1' < 's2'.
 */
int my_strncasecmp(const char *s1, const char *s2, size_t n);

#endif // MY_STRING_H
