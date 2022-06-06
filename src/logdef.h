
#pragma once

#ifndef LOG_TO_CONSOLE
#define LOGINFO(x, ...) syslog(LOG_INFO,x, ##__VA_ARGS__) 
#define LOGERR(x, ...) syslog(LOG_ERR,x, ##__VA_ARGS__)
#else
#define LOGINFO(x, ...) printf( "I " x "\n", ##__VA_ARGS__ ) 
#define LOGERR(x, ...) printf( "E " x "\n", ##__VA_ARGS__ )
#endif
