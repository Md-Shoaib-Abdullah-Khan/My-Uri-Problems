#include<stdio.h>
#include<string.h>

char shift3r(char ch)
{
    return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' ? ch + 3 : ch;
}

int main()
{
    int n, i, l;
    char str[1001], temp;
    scanf("%d", &n);

    while(n--)
    {
        fflush(stdin);
        gets(str);
        l = strlen(str);

        for(i = 0; i < l / 2; i++)
        {
            temp = shift3r(str[i]);
            str[i] = shift3r(str[l - i - 1]);
            str[l - i - 1] = temp - 1;
        }
        str[l / 2] += l % 2 ? 2 : 0;

        printf("%s\n", str);
    }
}
