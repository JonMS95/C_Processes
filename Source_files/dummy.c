#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define CORRECT_ARGC_VALUE      2
#define ARGUMENT_NUMBER_MESSAGE "Two arguments should be passed on the command line!\r\n"

/*
@brief Reverts the order of the bits within an 32 bit unsigned integer.
@param n The uint32_t number that is meant to be reverted.
@return The input with its bits in reverse order.
*/
uint32_t reverseBits(uint32_t n)
{
    uint32_t reverse = 0;
	
	for(int i = 0; i < 32; i++)
	{
		if((n & (1 << i)) != 0)
		{
			reverse |= (1 << (32 - i - 1));
		}
	}
	
	return reverse;
}

/*
@brief Main function. Program's entry point.
*/
int main(int argc, char** argv)
{
    if(argc != CORRECT_ARGC_VALUE)
    {
        perror(ARGUMENT_NUMBER_MESSAGE);
        exit(1);
    }

    uint32_t n = (uint32_t)atoi(argv[1]);
    printf("%d in reverse bit order equals %u\r\n", n, reverseBits(n));

    return 0;
}