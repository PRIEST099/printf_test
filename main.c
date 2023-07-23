#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*this function returns the length of n integer recursively
 * it counts the length reversely starting from the last digit
 * IHERA INYUMA IBARA IKAGEZA KUMUBARE WAMBERE
 */
int len(int n)
{
	if (n < 10)
		return 1;

	return (1 + len(n / 10));
}

int main(){
	int a = 123450;

	int i;
	int length = len(a);

	// here we are allocating the size of the variable string to hold the number in string
	//we also add the null terminator to the size using (length + 1)
	char *buf = malloc((length + 1) * sizeof(char));

	//here we are filling the variable string starting from the last index
	for (i = length -1 ; i >= 0; i--){
		int rem = a % 10;

		buf[i] = rem + '0';	//for conevring the integer to string

		a = a / 10;
	}
	buf[length] = '\0';

	write(1, buf, length);

	putchar('\n');

	free(buf);
	return 0;


}
