#include "tc_rt.h"

void fn_800da6bc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    if (param_1 == param_2) {
        return;
    }
    if (param_3 >= 9) {
        return;
    }
    c0lt = param_3 < 4;
    if ((u32)param_3 == 4u) {
        if (rd32(param_1 + 0x118u) != param_2) {
            return;
        }
        wr32(param_1 + 0x118u, 0u);
        return;
    }
    if (!c0lt) {
        if ((u32)param_3 == 8u) {
            if ((param_1 + 0x80u) == 0u) {
                return;
            }
            wr32(param_1 + 0x98u, 0u);
            return;
        }
        return;
    }
    c0lt = param_3 < 2;
    if ((u32)param_3 == 2u) {
        if (rd32(param_1 + 0x11cu) != param_2) {
            return;
        }
        wr32(param_1 + 0x11cu, 0u);
        return;
    }
    if (!c0lt) {
        if (rd32(param_1 + 0x118u) != 0u) {
            return;
        }
        wr32(param_1 + 0x118u, param_2);
        a.r[0] = param_2;
        a.r[1] = param_1;
        a.r[2] = 1u;
        a.r[3] = param_1;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x7cu), &a);
        return;
    }
    if (param_3 >= 1) {
        if (rd32(param_1 + 0x11cu) != 0u) {
            return;
        }
        wr32(param_1 + 0x11cu, param_2);
        a.r[0] = param_2;
        a.r[1] = param_1;
        a.r[2] = 3u;
        a.r[3] = param_1;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x7cu), &a);
        return;
    }
    return;
}
