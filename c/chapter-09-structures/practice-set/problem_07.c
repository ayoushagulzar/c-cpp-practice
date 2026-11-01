#include <stdio.h>

struct Date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct Date d1, struct Date d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
     else if (d1.dd < d2.dd)
    {
        return -1;
    }
}
int main()
{
    struct Date d1 = {12, 8, 2007};
    struct Date d2 = {16, 1, 2007};
    struct Date d3 = {28, 7, 2006};

    printf("%d\n", compare(d1, d2));

    return 0;
}