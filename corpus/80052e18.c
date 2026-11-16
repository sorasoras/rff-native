#include "tc_rt.h"

u32 fn_80052e18(void)
{
    if (rd32(0x803d115cu) == 0u) {
        wr32(0x803d115cu, 1u);
        return 0x803d1160u;
    }
    return 0u;
}
