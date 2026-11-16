#include "tc_rt.h"

void fn_802fc6b4(s32 param_1)
{
    u32 c0lt = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 5u) != 0u) {
        return;
    }
    r4 = rd32((u32)param_1 + 0xcu);
    if (r4 == 0u) {
        r4 = rd32((u32)param_1 + 0x10u);
    }
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_1 + 0x10u, 0u);
    c0lt = (s32)r4 < 2;
    if (r4 == 2u) {
        wr8((u32)param_1 + 4u, 1u);
        wr8((u32)param_1 + 5u, 1u);
        wr32((u32)param_1 + 8u, 3u);
        a.r[0] = rd32((u32)param_1 + 0x34u);
        a.r[1] = 4u;
        a.r[2] = 0x802fcb98u;
        (void)tc_call(0x8027b0acu, &a);
        return;
    }
    if (!c0lt) {
        if ((s32)r4 >= 4) {
            return;
        }
        wr8((u32)param_1 + 4u, 1u);
        wr8((u32)param_1 + 5u, 1u);
        wr32((u32)param_1 + 8u, 5u);
        a.r[0] = rd32((u32)param_1 + 0x34u);
        a.r[1] = 0u;
        a.r[2] = 0x802fcc80u;
        (void)tc_call(0x8027b0acu, &a);
        return;
    }
    c0lt = (s32)r4 < 0;
    if (r4 == 0u) {
        return;
    }
    if (!c0lt) {
        wr8((u32)param_1 + 4u, 1u);
        wr8((u32)param_1 + 5u, 1u);
        wr32((u32)param_1 + 8u, 1u);
        a.r[0] = rd32((u32)param_1 + 0x34u);
        a.r[1] = 1u;
        a.r[2] = 0x802fca8cu;
        (void)tc_call(0x8027b0acu, &a);
        return;
    }
    return;
}
