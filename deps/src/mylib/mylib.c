#include <stdlib.h>
#include <sys/times.h>
#include "mylib.h"

void delete_tms(struct tms *ptms) {
	free(ptms);
}

clock_t get_tms_cstime(struct tms *ptms) {
	return ptms->tms_cstime;
}

clock_t get_tms_cutime(struct tms *ptms) {
	return ptms->tms_cutime;
}

clock_t get_tms_stime(struct tms *ptms) {
	return ptms->tms_stime;
}

clock_t get_tms_utime(struct tms *ptms) {
	return ptms->tms_utime;
}

struct tms * new_tms() {
	return malloc(sizeof(struct tms));
}
