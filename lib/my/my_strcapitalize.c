/*
** EPITECH PROJECT, 2018
** my strcapitalize
** File description:
** capitalize all first letters of each words
*/

int is_alphanum(char c)
{
    if (c >= 'a' && c <= 'z'|| c >= 'A' && c <= 'Z')
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

char could_upcase(char *str, int i)
{
    int up = 'A' - 'a';

    if (i != 0) {
        if (is_alphanum(str[i - 1]) == 0)
            return (str[i] += up);
        else
            return (str[i]);
    } else
        return (str[i] += up);
}

char could_lowcase(char *str, int i)
{
    int low = 'a' - 'A';

    if (i != 0) {
        if (is_alphanum(str[i - 1]) == 1)
            return (str[i] += low);
        else
            return (str[i]);
    } else
        return (str[i]);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int low = 'a' - 'A';

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = could_upcase(str, i);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = could_lowcase(str, i);
        i += 1;
    }
    return (str);
}
