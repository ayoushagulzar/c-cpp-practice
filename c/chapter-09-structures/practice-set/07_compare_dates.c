// Practice 9.7: Compare two dates
// Question: Write compare(d1, d2) returning 0 if equal, 1 if d1 is later, -1
//           if d1 is earlier.

#include <stdio.h>

struct Date
{
    int dd;
    int mm;
    int yyyy;
};
int compare(struct Date d1, struct Date d2)
{
    if (d1.yyyy != d2.yyyy)
        return (d1.yyyy > d2.yyyy) ? 1 : -1;
    if (d1.mm != d2.mm)
        return (d1.mm > d2.mm) ? 1 : -1;
    if (d1.dd != d2.dd)
        return (d1.dd > d2.dd) ? 1 : -1;
    return 0; // same year, month and day
}
int main()
{
    struct Date d1 = {12, 8, 2007}; // 12 Aug 2007
    struct Date d2 = {16, 1, 2007}; // 16 Jan 2007
    struct Date d3 = {28, 7, 2006}; // 28 Jul 2006

    printf("compare(d1, d2) = %d\n", compare(d1, d2)); //  1: d1 is later
    printf("compare(d3, d1) = %d\n", compare(d3, d1)); // -1: d3 is earlier
    printf("compare(d1, d1) = %d\n", compare(d1, d1)); //  0: same date

    return 0;
}
