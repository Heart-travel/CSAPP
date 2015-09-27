#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

unsigned int snooze(unsigned int secs)
{
	unsigned int cnt = 0;
	
	cnt = sleep(secs);
	cnt = secs - cnt;
	
	if (cnt) {
		printf("Slept for %d of %d secs\n", cnt, secs);
	}

	return cnt;
}

void handler()
{
}

int main()
{
	signal(SIGINT, handler);
	snooze(8);

	exit(0);
}
