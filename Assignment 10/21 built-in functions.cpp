#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Suraj";
    char str2[100] = "Pawar";
    char str3[100];

    printf("1. strlen = %zu\n", strlen(str1));

    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("3. strncpy = %s\n", str3);

    strcat(str1, " ");
    strcat(str1, str2);
    printf("4. strcat = %s\n", str1);

    strcpy(str3, str2);
    strncat(str3, "12345", 3);
    printf("5. strncat = %s\n", str3);

    printf("6. strcmp  = %d\n", strcmp("ABC", "ABC"));

    printf("7. strncmp  = %d\n", strncmp("ABC", "ABD", 2));

    printf("8. strchr = %s\n", strchr(str1, 'a'));

    printf("9. strrchr = %s\n", strrchr(str1, 'a'));

    printf("10. strstr = %s\n", strstr(str1, "Pawar"));

    printf("11. strspn = %zu\n", strspn("12345ABC", "123456789"));

    printf("12. strcspn = %zu\n", strcspn("Suraj123", "0123456789"));

    printf("13. strpbrk = %s\n", strpbrk("Suraj", "aeiou"));

    strcpy(str3, "Hello World");
    printf("14. strtok = %s\n", strtok(str3, " "));

    printf("15. strcoll  = %d\n", strcoll("ABC", "ABC"));

    printf("16. strxfrm = %zu\n", strxfrm(str3, "ABC", 100));

    printf("17. memset  = ");
    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("%s\n",str3);

    strcpy(str3, "ABCDE");
    printf("18. memchr = %s\n", (char *)memchr(str3,'C',5));

    printf("19. memcmp = %d\n", memcmp("ABC","ABC",3));

    strcpy(str3, "Hello");
    memcpy(str3 + 5, "123", 4);
    printf("20. memcpy    = %s\n",str3);

    strcpy(str3,"Hello");
    memmove(str3+1,str3,5);
    str3[6] = '\0';
    printf("21. memmove = %s\n",str3);

    return 0;
}