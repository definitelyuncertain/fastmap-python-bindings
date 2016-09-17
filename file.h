#ifndef __file_h
    #define __file_h
    #include <stdio.h>
    #include <string.h>
    #include <strings.h>
    #include <assert.h>

    #include "def.h"

    #define MAXLINE 10000
    #define BLANKS " \t\n"

    int countlines(FILE *fp);
    int countcolumns(FILE *fp);
    void checklength(char *line);
    int counttokens(char *line);
    BOOLEAN checkfile(FILE *fp);
    void myrewind(FILE *fp);

#endif
