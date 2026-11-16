#include "tc_rt.h"

u32 fn_800813fc(void)
{
    if ((u32)rd8(0x80492824u) < (u32)rd8((((u32)rd8(0x80492821u) << 2u) & 0xfffffffcu) - 0x7fcaf010u)) {
        return 1u;
    }
    return 0u;
}
