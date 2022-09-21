/**
 * @file strncat.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return char* 
 */
char *_strncat(char *dest, char *src, int n)
{
        int index = 0, dest_len = 0;
        while (dest[index++])
                dest_len++;
        for (index = 0; src[index] && index < n; index++)
                dest[dest_len++] = src[index];
        return (dest);
}