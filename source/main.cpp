#include <wums.h>
#include <coreinit/debug.h>

WUMS_MODULE_EXPORT_NAME("homebrew_logging");

bool WUMSLogWrite(const char *str, size_t size) {
   OSConsoleWrite(str, size);
   return true;
}

WUMS_EXPORT_FUNCTION(WUMSLogWrite);