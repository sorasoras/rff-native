#include "tc_rt.h"

void fn_8012b0b4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x803634e8u);
    }
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x80363530u);
    }
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = param_2;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x8036350cu);
    }
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x803634c4u);
    }
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = param_3;
    (void)tc_call(0x800f8348u, &a);
    return;
}
