#pragma once

#include "libmx.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <time.h>


#include <dirent.h> // for opendir, readdir, closedir
#include <stdio.h> // DELETE IT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



typedef struct s_uls {
    int fd;
}              t_uls;
