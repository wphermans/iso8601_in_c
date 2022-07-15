# iso8601_in_c

A very simple C executable to display datetime in a psuedo ISO 8601 + JSON format.

**Compile:**
```
$ gcc -o test iso8601.c
```

**Run:**
```
$ ./test
{Date: 2022-07-15 19:59:48}
```
**File size:**
```
$ du -h test
20K     test
```
**File size comparrison:**
```
$ which date
/usr/bin/date
$ du -h /usr/bin/date
112K    /usr/bin/date
```
**blog post** [The Embedded Hobbyist - The beginning of a new project](https://www.embeddedhobbyist.com/2022/07/15/the-beginning-of-a-new-project/)
