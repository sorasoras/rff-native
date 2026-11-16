#include "tc_rt.h"

void fn_80210878(u32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x480u) != (u32)param_2) {
        r31 = (u32)param_2 * 0x2cu;
        a.r[0] = param_1 + 0x43cu;
        a.r[1] = rd32(param_1 + 0x40cu) + r31;
        a.r[2] = 0x2cu;
        (void)tc_call(0x80004338u, &a);
        if (rd32(param_1 + 0x480u) == 0xffffffffu) {
            a.r[0] = param_1 + 0x410u;
            a.r[1] = rd32(param_1 + 0x40cu) + r31;
            a.r[2] = 0x2cu;
            (void)tc_call(0x80004338u, &a);
        }
        wr32(param_1 + 0x480u, (u32)param_2);
    }
    a.r[0] = param_1;
    a.r[1] = rd32(rd32(param_1 + 0x40cu) + ((u32)param_2 * 0x2cu));
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80576880u);
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    return;
}
