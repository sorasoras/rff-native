#include "tc_rt.h"

u32 fn_8004114c(void)
{
    if (rd32(0x8034f808u) == 5u) {
        return 0x803bf0c0u;
    }
    return 0u;
}
