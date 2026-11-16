#include "tc_rt.h"

void fn_801266cc(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x44u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_1 + 0x1acu;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80125f80u, &a);
    a.r[0] = param_1 + 0x314u;
    (void)tc_call(0x80163f60u, &a);
    a.r[0] = param_1 + 0x44u;
    (void)tc_call(0x80161594u, &a);
    a.r[0] = param_1 + 0x1acu;
    (void)tc_call(0x80161594u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801976e0u, &a);
    r30 = rd32(param_1 + 0x10u);
    r31 = (r30 << 2u) & 0xfffffffcu;
    while ((s32)r30 < (s32)(rd32(param_1) + rd32(param_1 + 0x10u))) {
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r31);
        (void)tc_call(0x80161b8cu, &a);
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    a.r[0] = param_1 + 0x320u;
    (void)tc_call(0x80190984u, &a);
    if (rd32(param_1 + 0x40u) != 8u) {
        a.r[0] = param_1 + 0x3e8u;
        (void)tc_call(0x801e64d0u, &a);
    }
    (void)tc_call(0x800f974cu, &a);
    return;
}
