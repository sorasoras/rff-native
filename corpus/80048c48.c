#include "tc_rt.h"

void fn_80048c48(void)
{
    TcArgs a = {0};
    if (rd32(0x80571064u) != 0u) {
        a.r[0] = 0x803c2830u;
        (void)tc_call(0x8022fbb8u, &a);
        return;
    }
    return;
}
