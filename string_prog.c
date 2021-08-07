#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT 26

void hex_function (void);

int main (void)
{
	int line_no, i_2 = 0;
	
	char string_a[ ] = "abcdefghijklmnopqrstuvwxyz";

	char *hex_array[26] = {"61", "62", "63", "64", "65", "66", "67", "68", "69", "6A", "6B", "6C", "6D", "6E", "6F", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "7A"};

	do
	{
		printf("Enter #1-26: "); // must be a string
		scanf("%d", &line_no);

		if (line_no >= 1 && line_no <= 26)
		{
			break;
		}

		else if (line_no >= 26)
		{
			printf("Not between 1 & 26!\n Quit!\n");
			break;
		}

		else
		{
			break;
		}
	} while (line_no > 26);

	for (int i = 1; i <= LIMIT; i++) /* counter to letter before string */
	{
		for (i_2 = i - 1; i_2 <= i; i_2++)
		{
			if (line_no == i) // print letter only
			{
				while (i_2 <= i)
				{
					printf("\nNum #: %d\nLetter: %c\n", i_2+1, string_a[i_2]);
					printf("ASCII: %d\n", string_a[i_2]);
					printf("HEX: %s\n", hex_array[i_2]);
					i_2++;
					break;
				}
			}
		}
	}

	printf("\n");

	/* temp */
	return 0;
}
