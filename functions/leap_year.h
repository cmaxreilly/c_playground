
// Function that determines if year is a leap year
int leap(int year);

int
leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        /* is a leap year */
        return (1);
    else
        return(0);
}
