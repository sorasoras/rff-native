#include "tc_rt.h"

void fn_801568d4(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    if (((u32)param_1 + 0x50u) != 0u) {
        wr8((u32)param_1 + 0x50u, rd8(0x80492824u));
    }
    if (((u32)param_1 + 0x51u) != 0u) {
        wr8((u32)param_1 + 0x51u, rd8(0x80492825u));
    }
    r5 = (u32)rd8((u32)param_1 + 0x51u);
    wr8((u32)param_1 + 0x52u, rd8((u32)param_1 + 0x50u));
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r5) >> 1);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 5u;
    r0 = r5 - r0;
    r0 = r5 - r0;
    wr8((u32)param_1 + 0x53u, (u8)r0);
    return;
}
