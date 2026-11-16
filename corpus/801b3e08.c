#include "tc_rt.h"

void fn_801b3e08(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x1284u);
    if (r0 != 0x21u) {
        r4 = r0 * 0x38u;
        r0 = rd32((u32)param_1 + 0x1288u);
        r4 = r4 - 0x7fb65020u;
        c0lt = (s32)r0 < 1;
        r4 = (u32)rd8(r4 + 0x57u);
        r5 = r4 & 2u;
        r4 = r4 & 4u;
        if (r0 != 1u) {
            if (!c0lt) {
                wr32((u32)param_1 + 0x1288u, 0u);
                wr32((u32)param_1 + 0x128cu, 0x2eu);
                return;
            }
            if ((s32)r0 < 0) {
                wr32((u32)param_1 + 0x1288u, 0u);
                wr32((u32)param_1 + 0x128cu, 0x2eu);
                return;
            }
            if (r5 != 0u) {
                wr32((u32)param_1 + 0x1288u, 1u);
                wr32((u32)param_1 + 0x128cu, 0x2eu);
                return;
            }
            if (r4 == 0u) {
                wr32((u32)param_1 + 0x128cu, 0x2eu);
                return;
            }
            wr32((u32)param_1 + 0x1288u, 2u);
            wr32((u32)param_1 + 0x128cu, 0x2eu);
            return;
        }
        if (r4 != 0u) {
            wr32((u32)param_1 + 0x1288u, 2u);
            wr32((u32)param_1 + 0x128cu, 0x2eu);
            return;
        }
        wr32((u32)param_1 + 0x1288u, 0u);
        wr32((u32)param_1 + 0x128cu, 0x2eu);
        return;
    }
    return;
}
