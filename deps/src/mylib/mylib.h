#ifndef __MYLIB_H_INCLUDED__
#define __MYLIB_H_INCLUDED__

void delete_tms(struct tms *ptms);
clock_t get_tms_cstime(struct tms *ptms);
clock_t get_tms_cutime(struct tms *ptms);
clock_t get_tms_stime(struct tms *ptms);
clock_t get_tms_utime(struct tms *ptms);
struct tms * new_tms();

#endif
