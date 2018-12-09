/*
** EPITECH PROJECT, 2018
** my get nbr 
** File description:
** get the number in a string
*/

#include <limits.h>

static int get_sign(char const **str)
{
    int mul = 1;
    
    while (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-')
            mul *= -1;
        *str += 1;
    }
    return (mul);
}

static int is_limit(int mul, int ret, int unit)
{
    if (mul == 1 && INT_MAX / 10 <= ret) {
        if (INT_MAX / 10 < ret)
            return (0);
        else if (INT_MAX / 10 == ret && INT_MAX % 10 < unit)
            return (0);
        else
            return (1);
    }
    else if (mul == -1 && INT_MIN / -10 <= ret) {
        if (INT_MIN / -10 < ret)
            return (0);
        else if (INT_MIN / -10 == ret && INT_MIN % 10 * -1 < unit)
            return (0);
        else
            return (1);
    }
    else
        return (1);
}

int my_getnbr(char const *str)
{
    int mul = get_sign(&str);
    int ret = 0;
    int i = 0;

    while (str[i] >= '0'  && str[i] <= '9') {
        if (is_limit(mul, ret, str[i] - '0') == 0)
            return (0);
        else
            ret = ret * 10 + str[i] - '0';            
        i += 1;
    }
    return (ret * mul);
}
