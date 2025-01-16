#include <stdio.h>
void xstrcat(char [], char []);
int main()
{
char p[100], q[100];
printf("Input a string:\n");
gets(p);
printf("Input a string to concatenate:\n");
gets(q);
xstrcat(p, q);
printf("String obtained on concatenation: %s\n\n", p);
return 0;
}
void xstrcat(char p[], char q[])
{
int c, d;
c = 0;
while (p[c] != '\0')
{
c++;
}
d = 0;
while (q[d] != '\0')
{
p[c] = q[d];
d++;
c++;
}
p[c] = '\0';
return;
}