#include <stdio.h>
#include <cs50.h>

int main (void)	{
	
	long int num, num2, num3, a, a2, b, b2, c, c2, d, d2, e, e2, f, f2, g, g2, h, h2, i, i2, j, j2, k, k2, l, l2, m, m2, n, n2, o, card2, card3, vor;
	int  num4, num5, b3, b4, d3, d4, f3, f4, h3, h4, j3, j4, l3, l4, n3, n4;
	
	num = get_long("NUMBER: ");
		
	num2 = (num / 1000000000000000) * 2;
		if (num2 > 9) { num4 = num2 / 10; num5 = num2 % 10; }
		else { num4 = num2; num5 = 0;	}
	num3 = num % 1000000000000000;
	a = num3 / 100000000000000;
	a2 = num3 % 100000000000000;
	b = (a2 / 10000000000000) * 2;
		if (b > 9) {b3 = b / 10; b4 = b % 10;	}
		else { b3 = b; b4 = 0;	}
	b2 = a2 % 10000000000000;
	c = b2 / 1000000000000;
	c2 = b2 % 1000000000000;
	d = (c2 / 100000000000) * 2;
		if (d > 9) {  d3 = d / 10; d4 = d % 10;	}
		else { 	d3 = d; d4 = 0;	}
	d2 = c2 % 100000000000;
	e = d2 / 10000000000;
	e2 = d2 % 10000000000;
	f = (e2 / 1000000000) * 2;
		if (f > 9) {	 f3 = f / 10;  f4 = f % 10;	}
		else {	f3 = f; f4 = 0;	}
	f2 = e2 % 1000000000;
	g = f2 / 100000000;
	g2 = f2 % 100000000;
	h = (g2 / 10000000) * 2;
		if (h > 9) {  h3 = h / 10;  h4 = h % 10;	}
		else {	h3 = h; h4 = 0;	}
	h2 = g2 % 10000000;
	i = h2 / 1000000;
	i2 = h2 % 1000000;
	j = (i2 / 100000) * 2;
		if (j > 9)	{j3 = j / 10;  j4 = j % 10;	}
		else {	j3 = j; j4 = 0;	}
	j2 = i2 % 100000;
	k = j2 / 10000;
	k2 = j2 % 10000;
	l = (k2 / 1000) * 2;
		if (l > 9)	{	 l3 = l / 10;  l4 = l % 10;	}
		else {	l3 = l; l4 = 0;	}
	l2 = k2 % 1000;
	m = l2 / 100;
	m2 = l2 % 100;
	n = (m2 / 10) * 2;
		if (n > 9)	 {  n3 = n / 10;  n4 = n % 10;	}
		else { n3 = n; n4 = 0;	}
	n2 = m2 % 10;
	o = n2 / 1;		
	
	int cred1 = num4 + num5 + b3 + b4 + d3 + d4 + f3 + f4 + h3 + h4 + j3 + j4 + l3 + l4 + n3 + n4;
	int cred2 = cred1 + o + m + k + i + g + e + c + a;
	int cred3 = cred2 % 10;
	
    if(cred3 >= 1)    {    printf("INVALID\n");}
    else {
        if (num >= 1000000000000000 && num <= 9999999999999999)    {
		card2 = num / 1000000000000000;
		card3 = num / 100000000000000;
		
				
		if (card2 == 4) {	printf("VISA\n");		}
		else if (card3 == 51 || card3 == 52 || card3 == 53 || card3 == 54 || card3 == 55) {	printf("MASTERCARD\n");	}
		else {	printf("INVALID\n");	}
    }    
    else if (num >= 100000000000000 && num <= 999999999999999)
	{
		card2 = num / 10000000000000;
		if (card2 == 34 || card2 == 37) 	{	printf("AMEX\n");	}
		else {	printf("INVALID\n");	}
	}
	else if (num >= 1000000000000 && num <= 9999999999999)
	{
		card2 = num / 100000000000;
		if (card2 == 51 || card2 == 52 || card2 == 53 || card2 == 54 || card2 == 55) {	printf("MASTERCARD\n");	}
		else {	printf("INVALID\n");	}
	}
	else
	{
		printf("INVALID\n");
	}
    
    }
    
	return 0;
	
	}
