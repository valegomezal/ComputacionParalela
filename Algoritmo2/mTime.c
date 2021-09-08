#include "funcionmatrices.h"
#include <stdio.h>
#include <sys/time.h>
#include "mTime.h"

struct timeval start;
struct timeval stop;

void sampleStart(){
	gettimeofday(&start, NULL);	
}

void sampleStop(){
	gettimeofday(&stop, NULL);	
}

void printTime(){
	stop.tv_sec-=start.tv_sec;
	printf("%.0f \n", (double)(stop.tv_sec*1000000+stop.tv_usec));
}
