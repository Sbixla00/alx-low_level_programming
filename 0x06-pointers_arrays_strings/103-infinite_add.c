#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
int i = strlen(n1) - 1;
int j = strlen(n2) - 1;
int k = 0;
int carry = 0;

if (size_r <= i + j + 1) {
return 0;
}

while (i >= 0 && j >= 0) {
int sum = n1[i] - '0' + n2[j] - '0' + carry;
if (sum >= 10) {
carry = 1;
r[k++] = sum - 10 + '0';
} else {
carry = 0;
r[k++] = sum + '0';
}
i--;
j--;
}

while (i >= 0) {
int sum = n1[i] - '0' + carry;
if (sum >= 10) {
carry = 1;
r[k++] = sum - 10 + '0';
} else {
carry = 0;
r[k++] = sum + '0';
}
i--;
}

while (j >= 0) {
int sum = n2[j] - '0' + carry;
if (sum >= 10) {
carry = 1;
r[k++] = sum - 10 + '0';
} else {
carry = 0;
r[k++] = sum + '0';
}
j--;
}

if (carry) {
r[k++] = carry + '0';
}

r[k] = '\0';

return r;
}
