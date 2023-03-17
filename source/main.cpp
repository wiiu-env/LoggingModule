#include <coreinit/debug.h>
#include <wums.h>

WUMS_MODULE_EXPORT_NAME("homebrew_logging");

#define OSConsoleWriteEx ((void (*)(uint32_t, uint32_t, const char *, size_t))(0x101C400 + 0x10cf0))

bool WUMSLogWrite(const char *str, size_t size) {
    OSConsoleWriteEx(0xFFFFFFFF, 0xFFFFFFFF, str, size);
    return true;
}

WUMS_EXPORT_FUNCTION(WUMSLogWrite);