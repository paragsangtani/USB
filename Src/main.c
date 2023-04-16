#include "stm32f4xx.h"
#include "logger.h"

LogLevel system_log_level = LOG_LEVEL_DEBUG;
int main(void)
{
	log_info("Entry");
	for(;;);
}
