#ifndef _OPTIONS_H_
#define _OPTINOS_H_

struct user_options {
	char *usbdev;
	int trace_level;
};

int read_args(int argc, char *argv[], struct user_options *opts);

#endif