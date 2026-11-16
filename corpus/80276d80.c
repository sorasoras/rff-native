#include "tc_rt.h"

u32 fn_80276d80(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80284b24u, &a);
    return 0u;
}
