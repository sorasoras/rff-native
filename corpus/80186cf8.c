#include "tc_rt.h"

void fn_80186cf8(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xab4u) == 0xbu) {
        r0 = rd32((u32)param_1 + 0xa08u);
        r4 = rd32((u32)param_1 + 0x5c0u);
        if (r0 == 0x1fu) {
            if (r4 == 0x266u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801867a0u, &a);
                return;
            }
            if (r4 == 0x269u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                (void)tc_call(0x801867a0u, &a);
                return;
            }
            if (r4 == 0x26au) {
                a.r[0] = (u32)param_1;
                a.r[1] = 4u;
                (void)tc_call(0x801867a0u, &a);
                return;
            }
            if (r4 == 0x26bu) {
                a.r[0] = (u32)param_1;
                a.r[1] = 5u;
                (void)tc_call(0x801867a0u, &a);
                return;
            }
            if (r4 == 0x26eu) {
                a.r[0] = (u32)param_1;
                a.r[1] = 8u;
                (void)tc_call(0x801867a0u, &a);
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0xbu;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r0 != 0x20u) {
            return;
        }
        if (r4 == 0x268u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r4 == 0x267u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r4 == 0x26cu) {
            a.r[0] = (u32)param_1;
            a.r[1] = 6u;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r4 == 0x26du) {
            a.r[0] = (u32)param_1;
            a.r[1] = 7u;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r4 == 0x26fu) {
            a.r[0] = (u32)param_1;
            a.r[1] = 9u;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        if (r4 == 0x270u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xau;
            (void)tc_call(0x801867a0u, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
        return;
    }
    return;
}
