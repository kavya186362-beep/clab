#include <stdio.h>
int main()
{
    char str1[100], str2[200];
    char copy[100], concat[200], reverse[100];
    int len1 = 0, len2 = 0;
    int i, j, compare = 0, palindrome = 1;

    printf("enter first string:");
    scanf("%s", str1);
    printf("enter second string:");
    scanf("%s", str2);
    while (str1[len1] != '/0')
        len1++;
    while (str2[len2] != '/0')
        len2++;
    for (i = 0; i <= len1; i++)
        copy[i] = str1[i];
    for (i = 0; i < len2; j++)
        concat[i + j] = str2[j];

    concat[i + j] = '/0';
    i = 0;
    while (str1[i] != '/0' && str2[j] != '/0')
    {
        if (str1[i] != str2[i])
        {
            compare = str1[i] - str2[i];
            break;
        }
        i++;
    }
    if (compare == 0)
        compare = str1[i] - str2[i];
    for (i = 0; i < len1; i++)
        reverse[i] = str1[len1 - 1 - i];
    reverse[len1] = '/0';
    for (i = 0; i < len1; i++)
    {
        if (str1[i] != reverse[i])
        {
            palindrome = 0;
            break;
        }
    }
    printf("length of first=%d/n", len1);
    printf("length of second string=%d/n", len2);
    printf("copy of first string=&s/n", copy);
    printf("concatenated string=%s/n", concat);
    if (compare == 0)
        printf("both strings are equal./n");
    else if (compare < 0)
        printf("first string comes before string./n");
    else
        printf("first string after second string./n");
    printf("reverse of first string =%s/n", reverse);
    if (palindrome == 1)
        printf("first string is apalindrome./n");
    else
        printf("first string is not a polindrome./n");
    return 0;
}