/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *4/21/15
 *C1A6E2_MyStrcmp.c
 *Win7
 *Visual C++ 11.0
 *
 *This will compare two strings lexicographically
 *Email title: C1A6E2_U06369876
 */


int MyStrcmp(const char *s1, const char *s2)
{
    /*Compares two strings lexicographically*/
    while (*s1 != '\0')
    {
        /*Case where contents of s2 are null*/
        if (*s2 == '\0')
            return 1;
        /*Case where contents of p2 > contens p1*/
        if (*s2 > *s1)
            return -1;
        /*Case where contents of p1 > contens p2*/
        if (*s1 > *s2)
            return 1;
        /*This will increase both strings allowing us to continue the comparison*/
        s1++;
        s2++;
    }
    /*Case where p2 has not reached the end yet*/
    if (*s2 != '\0')
        return -1;
    return 0;
}
