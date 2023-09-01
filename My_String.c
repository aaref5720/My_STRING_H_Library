#include"My_String.h"

void *my_memchr(const void *str, int c, size_t n)
{
    char *currentPosition = (char *)str ;
    char *returnValue = NULL;

    while (n-- && !(my_strchr((char*)&c, *currentPosition)))
    {
        currentPosition++;
    }

    if (*currentPosition == '\0')
    {
        returnValue = NULL;
    }
    else
    {
        returnValue = currentPosition;
    }
    
    return returnValue;
    
}

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    int retValue = 0 ;
    int Index = 0;

    while (n--)
    {
        if(*((char *)s1 + Index) == *((char *)s2 + Index))
        {
            Index++;
            continue;
        }
        else if(*((char *)s1 + Index) >= *((char *)s2 + Index))
        {
            retValue = 1 ;
            break;
        }
        else if(*((char *)s1 + Index) <= *((char *)s2 + Index))
        {
            retValue = -1 ;
            break;
        }
        Index++;
    }
    return retValue;
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *returnValue = (char *)dest;
    while (n--)
    {
        *((char *)dest ++) = *((char *)src ++);
    }

    return returnValue;

}

void *my_memmove(void *dest, const void *src, size_t n)
{
    char temp[n] ;
    size_t srcIndex = 0;
    char *returnValue = (char *)dest;

    for(srcIndex = 0 ; srcIndex < n ; srcIndex++)
    {
        temp[srcIndex] = *((char *)src + srcIndex);
    }

    for(srcIndex = 0 ; srcIndex < n ; srcIndex++)
    {
        *((char *)dest ++) = temp[srcIndex];
    }

    return returnValue;
}

void *my_memset(void *str, int c, size_t n)
{
    char *returnValue = (char *)str;

    while (n--) 
    {
        *((char *)str ++) = ((char) c);
    }  

    return returnValue;
}

char *my_strcat(char *dest, const char *src)
{
    size_t startPoint = my_strlen(dest);
    size_t srcLength = my_strlen(src);

    while (srcLength--)
    {
        *((char *)dest + (startPoint++)) = *((char *)src ++);
    }
    
    *((char *)dest + (startPoint)) = '\0';

    return dest;
}

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t startPoint = my_strlen(dest);

    while (n--)
    {
        *((char *)dest + (startPoint++)) = *((char *)src ++);
    }
    
    *((char *)dest + (startPoint)) = '\0';

    return dest;
}

int my_strcmp(const char *s1, const char *s2)
{
    int retValue = 0 ;
    int Index = 0;

    int s1Length = my_strlen(s1);
    int s2Length = my_strlen(s2);

    s1Length = (s1Length >= s2Length) ? s1Length : s2Length ;

    while (s1Length--)
    {
        if(*((char *)s1 + Index) == *((char *)s2 + Index))
        {
            continue;
        }
        else if(*((char *)s1 + Index) >= *((char *)s2 + Index))
        {
            retValue = 1 ;
            break;
        }
        else if(*((char *)s1 + Index) <= *((char *)s2 + Index))
        {
            retValue = -1 ;
            break;
        }

    }
    return retValue; 
}

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    int retValue = 0 ;
    int Index = 0;

    while (n--)
    {
        if(*((char *)s1 + Index) == *((char *)s2 + Index))
        {
            Index++;
            continue;
        }
        else if(*((char *)s1 + Index) >= *((char *)s2 + Index))
        {
            retValue = 1 ;
            break;
        }
        else if(*((char *)s1 + Index) <= *((char *)s2 + Index))
        {
            retValue = -1 ;
            break;
        }
        Index++;
    }
    return retValue; 
}

char *my_strcpy(char *dest, const char *src)
{
    int srcLength = my_strlen(src);
    char *returnValue = (char *)dest;

    while (srcLength--)
    {
        *((char *)dest ++) = *((char *)src ++);
    }

    *dest = '\0';

    return returnValue;
}

char *my_strncpy(char *dest, const char *src, size_t n)
{
    char *returnValue = (char *)dest;
    while (n--)
    {
        *((char *)dest ++) = *((char *)src ++);
        if(n == 0)
        {
            *((char *)dest ++) = '\0';
        }
    }

    return returnValue;
}

size_t my_strlen(const char *s)
{
    size_t srtLength = 0 ;
    while (*((char *)s++) != '\0')
    {
        srtLength++;
    }
    return srtLength ;
}

const char *my_strchr(const char *s, int c)
{
    size_t sLength = my_strlen(s);
    size_t Index = 0;
    const char *retValue = NULL;

    for (Index = 0 ; Index < sLength ; Index++)
    {
        if(*(s + Index) == c)
        {
            retValue =  (s + Index);
            break;
        }
    }

    return retValue;  
}

const char *my_strrchr(const char *s, int c)
{
    size_t sLength = my_strlen(s);
    size_t Index = 0;
    const char *retValue = NULL;

    for (Index = (sLength - 1) ; Index > 0 ; Index--)
    {
        if(*(s + Index) == c)
        {
            retValue = (s + Index); 
            break;
        }
    }

    return retValue;  
}

const char *my_strstr(const char *haystack, const char *needle)
{
    size_t haystackLength = my_strlen(haystack);
    size_t needleLength = my_strlen(needle);
    size_t Index = 0;
    size_t Index2 = 0;
    size_t flag = 0;

    const char *haystack2 = haystack;
    const char *retValue = NULL;
    
    for (Index = 0 ; Index < haystackLength ; Index++)
    {
        if(flag)
        {
            break;
        }

        for (Index2 = 0 ; Index2 < needleLength ; Index2++)
        {
            if( *(haystack2 + Index) == *(needle + Index2))
            {
                haystack2 += Index;

                if(!(my_strncmp(haystack2, needle, needleLength)))
                {
                    retValue = haystack2;
                    flag = 1;
                    break;
                }
            }
        }
        
    }
    return retValue;
}

size_t my_strspn(const char *str, const char *accept)
{
    size_t counter = 0;

    while (*str)
    {
        if (my_strchr(accept, *str))
        {
            counter++;
            str++;
        } 
        else
        {
            break;
        }
    }

    return counter;
}

size_t my_strcspn(const char *s, const char *reject)
{
    size_t counter = 0;

    while (*s)
    {
        if (!(my_strchr(reject, *s)))
        {
            counter++;
            s++;
        } 
        else
        {
            break;
        }
    }

    return counter;
}

char *my_strtok(char *str, const char *delimiters)
{
    static char *currentPosition = NULL ;
    char *returnValue = NULL;

    if(NULL != str)
    {
        currentPosition = str;
    }
    else { }

    while (currentPosition && my_strchr(delimiters, *currentPosition))
    {
        *currentPosition++ = '\0';
    }

    if (*currentPosition == '\0')
    {
        returnValue = NULL;
    }

    else
    {
        returnValue = currentPosition;

        while (*currentPosition && !(my_strchr(delimiters, *currentPosition)))
        {
            currentPosition++;
        }

        if (*currentPosition != '\0')
        {
            *currentPosition++ = '\0';
        }
        else {}
    }
    
    return returnValue;
}

char *my_strtok_r(char *str, const char *delimiters, char **saveptr)
{
    char *returnValue = NULL;

    if(NULL != str)
    {
        *saveptr = str;
    }
    else { }

    while (**saveptr && my_strchr(delimiters, **saveptr))
    {
        *(*saveptr)++ = '\0';
    }

    if (**saveptr == '\0')
    {
        returnValue = NULL;
    }

    else
    {
        returnValue = *saveptr;

        while (**saveptr && !(my_strchr(delimiters, **saveptr)))
        {
            (*saveptr)++;
        }

        if (**saveptr != '\0')
        {
            *(*saveptr)++ = '\0';
        }
        else {}
    }
    
    return returnValue;
}

char *my_strerror(int errnum)
{
    switch (errnum) {
        case 1:
            return "Operation not permitted";
        case 2:
            return "No such file or directory";
        case 3:
            return "No such process";
        case 4:
            return "Interrupted function call";
        case 5:
            return "Input/output error";
        case 6:
            return "No such device or address";
        case 7:
            return "Arg list too long";
        case 8:
            return "Exec format error";
        case 9:
            return "Bad file descriptor";
        case 10:
            return "No child processes";
        case 11:
            return "Resource temporarily unavailable";
        case 12:
            return "Not enough space";
        case 13:
            return "Permission denied";
        case 14:
            return "Bad address";
        case 16:
            return "Resource device";
        case 17:
            return "File exists";
        case 18:
            return "Improper link";
        case 19:
            return "No such device";
        case 20:
            return "Not a directory";
        case 21:
            return "Is a directory";
        case 22:
            return "Invalid argument";
        case 23:
            return "Too many open files in system";
        case 24:
            return "Too many open files";
        case 25:
            return "Inappropriate I/O control operation";
        case 27:
            return "File too large";
        case 28:
            return "No space left on device";
        case 29:
            return "Invalid seek";
        case 30:
            return "Read-only file system";
        case 31:
            return "Too many links";
        case 32:
            return "Broken pipe";
        case 33:
            return "Domain error";
        case 34:
            return "Result too large";
        case 36:
            return "Resource deadlock avoided";
        case 38:
            return "Filename too long";
        case 39:
            return "No locks available";
        case 40:
            return "Function not implemented";
        case 41:
            return "Directory not empty";
        case 42:
            return "Illegal byte sequence";
        default:
            return "Unknown error";
    }
}

int my_strcoll(const char *s1, const char *s2)
{
    int retValue = 0 ;
    int Index = 0;

    int s1Length = my_strlen(s1);
    int s2Length = my_strlen(s2);

    int n = 0;

    n = (s1 >= s2) ? s1Length : s2Length ;

    while (n--)
    {
        if(*((char *)s1 + Index) == *((char *)s2 + Index))
        {
            Index++;
            continue;
        }
        else if(*((char *)s1 + Index) >= *((char *)s2 + Index))
        {
            retValue = 1 ;
            break;
        }
        else if(*((char *)s1 + Index) <= *((char *)s2 + Index))
        {
            retValue = -1 ;
            break;
        }
        Index++;
    }
    return retValue; 
}

size_t my_strxfrm(char *dest, const char *src, size_t n)
{
    int srcLength = my_strlen(src);

    while (n--)
    {
        *((char *)dest ++) = *((char *)src ++);
    }

    return srcLength; 
}

int my_strcasecmp(const char *s1, const char *s2)
{
    // TODO:
}

int my_strncasecmp(const char *s1, const char *s2, size_t n)
{
    // TODO:
}