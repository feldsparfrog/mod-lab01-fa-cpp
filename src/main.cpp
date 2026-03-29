#include "fun.h"
#include <stdio.h>

int main()
{
	const char* testMessage = " GNEURSHK - 3500 is The Thing  of Fut43ure    until the fds23234 334h 4hh Est  s4";
	unsigned int result1 = faStr1(testMessage);
	unsigned int result2 = faStr2(testMessage);
	unsigned int result3 = faStr3(testMessage);
	printf("Words not containing numbers: %d\nWords starting on a capital letter and containing only latin letters: %d\nAverage word length: %d", result1, result2, result3);
	return 0;
}
