#include <stdio.h>
#include "../includes/ft_printf.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    unsigned int u;

    u = 42;

    printf("***************************************\n");
	printf ("\t\tUNSIGNED TEST\n");
	printf("***************************************\n\n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = 0;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);


     u = -1;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = INT_MIN;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = -0;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);
    
    u = -8;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    unsigned short us;

    us = 65535;

    ft_printf("ft_printf:\t[]\t[%hu]\n", us);
	printf("printf:\t\t[]\t[%hu]\n", us);
    ft_printf("ft_printf:\t[3]\t[%3hu]\n", us);
	printf("printf:\t\t[3]\t[%3hu]\n", us);
    ft_printf("ft_printf:\t[-3]\t[%-3hu]\n", us);
	printf("printf:\t\t[-3]\t[%-3hu]\n", us);
    ft_printf("ft_printf:\t[]\t[%hu]\n", us);
	printf("printf:\t\t[]\t[%hu]\n", us);
    ft_printf("ft_printf:\t[3]\t[%3hu]\n", us);
	printf("printf:\t\t[3]\t[%3hu]\n", us);
    ft_printf("ft_printf:\t[4]\t[%4hu]\n", us);
	printf("printf:\t\t[4]\t[%4hu]\n", us);
    ft_printf("ft_printf:\t[.4]\t[%.4hu]\n", us);
	printf("printf:\t\t[.4]\t[%.4hu]\n", us);
    ft_printf("ft_printf:\t[.3]\t[%.3hu]\n", us);
	printf("printf:\t\t[.3]\t[%.3hu]\n", us);
    ft_printf("ft_printf:\t[5.3]\t[%5.3hu]\n", us);
	printf("printf:\t\t[5.3]\t[%5.3hu]\n", us);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3hu]\n", us);
	printf("printf:\t\t[-5.3]\t[%-5.3hu]\n", us);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3hu]\n", us);
	printf("printf:\t\t[-4.3]\t[%-4.3hu]\n", us);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3hu]\n", us);
	printf("printf:\t\t[-4.3]\t[%-4.3hu]\n", us);
    ft_printf("ft_printf:\t[.]\t[%.hu]\n", us);
	printf("printf:\t\t[.]\t[%.hu]\n", us);
    ft_printf("ft_printf:\t[.0]\t[%.0hu]\n", us);
	printf("printf:\t\t[.0]\t[%.0hu]\n", us);
    ft_printf("ft_printf:\t[0.]\t[%0.hu]\n", us);
	printf("printf:\t\t[0.]\t[%0.hu]\n", us);
    ft_printf("ft_printf:\t[0.0]\t[%0.0hu]\n", us);
	printf("printf:\t\t[0.0]\t[%0.0hu]\n", us);
    ft_printf("ft_printf:\t[.]\t[%.hu]\n", us);
	printf("printf:\t\t[.]\t[%.hu]\n", us);
    ft_printf("ft_printf:\t[.0]\t[%.0hu]\n", us);
	printf("printf:\t\t[.0]\t[%.0hu]\n", us);
    ft_printf("ft_printf:\t[0.]\t[%0.hu]\n", us);
	printf("printf:\t\t[0.]\t[%0.hu]\n", us);
    ft_printf("ft_printf:\t[0.0]\t[%0.0hu]\n", us);
	printf("printf:\t\t[0.0]\t[%0.0hu]\n", us);
    ft_printf("ft_printf:\t[019.21]\t[%019.21hu]\n", us);
	printf("printf:\t\t[019.21]\t[%019.21hu]\n\n", us);

    us = -0;

    ft_printf("ft_printf:\t[]\t[%hu]\n", us);
	printf("printf:\t\t[]\t[%hu]\n", us);
    ft_printf("ft_printf:\t[3]\t[%3hu]\n", us);
	printf("printf:\t\t[3]\t[%3hu]\n", us);
    ft_printf("ft_printf:\t[-3]\t[%-3hu]\n", us);
	printf("printf:\t\t[-3]\t[%-3hu]\n", us);
    ft_printf("ft_printf:\t[]\t[%hu]\n", us);
	printf("printf:\t\t[]\t[%hu]\n", us);
    ft_printf("ft_printf:\t[3]\t[%3hu]\n", us);
	printf("printf:\t\t[3]\t[%3hu]\n", us);
    ft_printf("ft_printf:\t[4]\t[%4hu]\n", us);
	printf("printf:\t\t[4]\t[%4hu]\n", us);
    ft_printf("ft_printf:\t[.4]\t[%.4hu]\n", us);
	printf("printf:\t\t[.4]\t[%.4hu]\n", us);
    ft_printf("ft_printf:\t[.3]\t[%.3hu]\n", us);
	printf("printf:\t\t[.3]\t[%.3hu]\n", us);
    ft_printf("ft_printf:\t[5.3]\t[%5.3hu]\n", us);
	printf("printf:\t\t[5.3]\t[%5.3hu]\n", us);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3hu]\n", us);
	printf("printf:\t\t[-5.3]\t[%-5.3hu]\n", us);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3hu]\n", us);
	printf("printf:\t\t[-4.3]\t[%-4.3hu]\n", us);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3hu]\n", us);
	printf("printf:\t\t[-4.3]\t[%-4.3hu]\n", us);
    ft_printf("ft_printf:\t[.]\t[%.hu]\n", us);
	printf("printf:\t\t[.]\t[%.hu]\n", us);
    ft_printf("ft_printf:\t[.0]\t[%.0hu]\n", us);
	printf("printf:\t\t[.0]\t[%.0hu]\n", us);
    ft_printf("ft_printf:\t[0.]\t[%0.hu]\n", us);
	printf("printf:\t\t[0.]\t[%0.hu]\n", us);
    ft_printf("ft_printf:\t[0.0]\t[%0.0hu]\n", us);
	printf("printf:\t\t[0.0]\t[%0.0hu]\n", us);
    ft_printf("ft_printf:\t[.]\t[%.hu]\n", us);
	printf("printf:\t\t[.]\t[%.hu]\n", us);
    ft_printf("ft_printf:\t[.0]\t[%.0hu]\n", us);
	printf("printf:\t\t[.0]\t[%.0hu]\n", us);
    ft_printf("ft_printf:\t[0.]\t[%0.hu]\n", us);
	printf("printf:\t\t[0.]\t[%0.hu]\n", us);
    ft_printf("ft_printf:\t[0.0]\t[%0.0hu]\n", us);
	printf("printf:\t\t[0.0]\t[%0.0hu]\n", us);
    ft_printf("ft_printf:\t[019.21]\t[%019.21hu]\n", us);
	printf("printf:\t\t[019.21]\t[%019.21hu]\n\n", us);

    unsigned long long ull;

    ull = 42;

    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[-3]\t[%-3llu]\n", ull);
	printf("printf:\t\t[-3]\t[%-3llu]\n", ull);
    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[4]\t[%4llu]\n", ull);
	printf("printf:\t\t[4]\t[%4llu]\n", ull);
    ft_printf("ft_printf:\t[.4]\t[%.4llu]\n", ull);
	printf("printf:\t\t[.4]\t[%.4llu]\n", ull);
    ft_printf("ft_printf:\t[.3]\t[%.3llu]\n", ull);
	printf("printf:\t\t[.3]\t[%.3llu]\n", ull);
    ft_printf("ft_printf:\t[5.3]\t[%5.3llu]\n", ull);
	printf("printf:\t\t[5.3]\t[%5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3llu]\n", ull);
	printf("printf:\t\t[-5.3]\t[%-5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[019.21]\t[%019.21llu]\n", ull);
	printf("printf:\t\t[019.21]\t[%019.21llu]\n\n", ull);

    ull = UINT_MAX;

    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[-3]\t[%-3llu]\n", ull);
	printf("printf:\t\t[-3]\t[%-3llu]\n", ull);
    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[4]\t[%4llu]\n", ull);
	printf("printf:\t\t[4]\t[%4llu]\n", ull);
    ft_printf("ft_printf:\t[.4]\t[%.4llu]\n", ull);
	printf("printf:\t\t[.4]\t[%.4llu]\n", ull);
    ft_printf("ft_printf:\t[.3]\t[%.3llu]\n", ull);
	printf("printf:\t\t[.3]\t[%.3llu]\n", ull);
    ft_printf("ft_printf:\t[5.3]\t[%5.3llu]\n", ull);
	printf("printf:\t\t[5.3]\t[%5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3llu]\n", ull);
	printf("printf:\t\t[-5.3]\t[%-5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[019.21]\t[%019.21llu]\n", ull);
	printf("printf:\t\t[019.21]\t[%019.21llu]\n\n", ull);

    ull = ULLONG_MAX;

    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[-3]\t[%-3llu]\n", ull);
	printf("printf:\t\t[-3]\t[%-3llu]\n", ull);
    ft_printf("ft_printf:\t[]\t[%llu]\n", ull);
	printf("printf:\t\t[]\t[%llu]\n", ull);
    ft_printf("ft_printf:\t[3]\t[%3llu]\n", ull);
	printf("printf:\t\t[3]\t[%3llu]\n", ull);
    ft_printf("ft_printf:\t[4]\t[%4llu]\n", ull);
	printf("printf:\t\t[4]\t[%4llu]\n", ull);
    ft_printf("ft_printf:\t[.4]\t[%.4llu]\n", ull);
	printf("printf:\t\t[.4]\t[%.4llu]\n", ull);
    ft_printf("ft_printf:\t[.3]\t[%.3llu]\n", ull);
	printf("printf:\t\t[.3]\t[%.3llu]\n", ull);
    ft_printf("ft_printf:\t[5.3]\t[%5.3llu]\n", ull);
	printf("printf:\t\t[5.3]\t[%5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3llu]\n", ull);
	printf("printf:\t\t[-5.3]\t[%-5.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3llu]\n", ull);
	printf("printf:\t\t[-4.3]\t[%-4.3llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[.]\t[%.llu]\n", ull);
	printf("printf:\t\t[.]\t[%.llu]\n", ull);
    ft_printf("ft_printf:\t[.0]\t[%.0llu]\n", ull);
	printf("printf:\t\t[.0]\t[%.0llu]\n", ull);
    ft_printf("ft_printf:\t[0.]\t[%0.llu]\n", ull);
	printf("printf:\t\t[0.]\t[%0.llu]\n", ull);
    ft_printf("ft_printf:\t[0.0]\t[%0.0llu]\n", ull);
	printf("printf:\t\t[0.0]\t[%0.0llu]\n", ull);
    ft_printf("ft_printf:\t[019.21]\t[%019.21llu]\n", ull);
	printf("printf:\t\t[019.21]\t[%019.21llu]\n\n", ull);

    return (0);
}