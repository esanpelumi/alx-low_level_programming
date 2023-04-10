#ifndef MY_UTILS_H
#define MY_UTILS_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_file(const char *filepath, size_t bufsize);
int create_file(const char *filepath, char *filecontent);
int append_text(const char *filepath, char *filecontent);

#endif
