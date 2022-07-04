int ft_strlen(char *str)
{
        int     c;

        c = 0;
        while(*str != '\0')
        {
                str++;
                c++;
        }
        return (c);
}

char  *ft_strcat(char *dest, char *src)
{
        int     c;

        c = ft_strlen(dest);
        while (*src != '\0')
        {
                dest[c] = *src;
                src++;
                c++;
        }
        dest[c] = '\0';
        return (dest);
}
