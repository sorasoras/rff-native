#include "tc_rt.h"

void fn_8018a4e8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)((s32)rd32(rd32((u32)param_1 + 0x40cu) + 0x80u) >> 31) != 0u) {
        r3 = tc_call(0x800813c0u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x800813fcu, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                return;
            }
            f0 = (f64)rdf32(0x80575264u);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdfe8u, f0);
            wrf32d(0x817fdfe4u, f0);
            r3 = rd32((u32)param_1 + 0x40cu);
            a.r[0] = r3;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = 1u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
            if (r3 != 0u) {
                r4 = (u32)rd8(0x80575261u);
                r3 = (u32)rd8(0x80575262u);
                r0 = (u32)rd8(0x80575263u);
                wr8(0x817fdfd8u, rd8(0x80575260u));
                wr8(0x817fdfd9u, (u8)r4);
                wr8(0x817fdfdau, (u8)r3);
                wr8(0x817fdfdbu, (u8)r0);
                wr32(0x817fdfe0u, rd32(0x817fdfd8u));
                a.r[0] = rd32((u32)param_1 + 0x460u);
                a.r[1] = rd32((u32)param_1 + 0x464u);
                a.r[2] = 0x817fdfe4u;
                a.r[3] = 0x817fdfe0u;
                (void)tc_call(0x8015371cu, &a);
                wr32(0x817fdfdcu, rd32(0x817fdfd8u));
                a.r[0] = rd32((u32)param_1 + 0x460u);
                a.r[1] = rd32((u32)param_1 + 0x464u);
                a.r[2] = 0x817fdfe4u;
                a.r[3] = 0x817fdfdcu;
                (void)tc_call(0x80153940u, &a);
            }
        }
    }
    return;
}
