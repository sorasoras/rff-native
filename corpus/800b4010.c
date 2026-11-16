#include "tc_rt.h"

s32 fn_800b4010(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u || rd32(param_1 + 0xe98u) != 0u) {
        r3 = 2u;
    } else {
        r3 = rd32((u32)param_2 + 0x2cu);
        if (r3 != 0u) {
            wr32(param_1 + 0xd84u, r3);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            wrf32d(param_1 + 0xd88u, (f64)rdf32(r3));
            wrf32d(param_1 + 0xd8cu, (f64)rdf32(r3 + 4u));
            wrf32d(param_1 + 0xd90u, (f64)rdf32(r3 + 8u));
        } else {
            wr32(param_1 + 0xd84u, 0u);
            wrf32d(param_1 + 0xd88u, (f64)rdf32((u32)param_2 + 8u));
            wrf32d(param_1 + 0xd8cu, (f64)rdf32((u32)param_2 + 0xcu));
            wrf32d(param_1 + 0xd90u, (f64)rdf32((u32)param_2 + 0x10u));
        }
        if ((rd32((u32)param_2 + 0x30u) & 0x100u) != 0u) {
            a.r[0] = (u32)param_2;
            f1 = tc_callf(0x8006ff00u, &a);
            r30 = (u32)rd8(0x80499098u);
            a.r[0] = param_1;
            a.r[1] = 0x80499060u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0xecu), &a);
            f1 = tc_lastf();
            r4 = rd32(param_1 + 0xf08u);
            r3 = r3 - r30;
            if ((s32)r4 <= 0 || (s32)rd32(0x80570730u) <= (s32)r3) {
                a.r[0] = 0x817fdfd8u;
                a.r[1] = param_1;
                a.r[2] = param_3;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0xb4u), &a);
                a.f[0] = (f64)rdf32(0x80572c00u);
                a.r[0] = 0x8bu;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
                r3 = 2u;
                return (s32)r3;
            }
            r0 = r4 - 1u;
            wr32(param_1 + 0xf08u, r0);
            if ((s32)r0 <= 0) {
                a.r[0] = param_1;
                a.r[1] = 0x138bu;
                (void)tc_call(0x800aef78u, &a);
                a.r[0] = rd32(param_1 + 0x1bcu);
                a.r[1] = 2u;
                (void)tc_call(0x800a796cu, &a);
                a.r[0] = 0u;
                a.r[1] = 0x1cu;
                (void)tc_call(0x800a6d5cu, &a);
                wr8(param_1 + 0x162cu, 0u);
                a.r[0] = param_1;
                a.r[1] = 0xcu;
                (void)tc_call(0x800b31dcu, &a);
                a.r[0] = rd32(0x804863d8u);
                (void)tc_call(0x8006b570u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r7 = rd32(r3);
                f1 = (f64)rdf32(0x80572c00u);
                wr32(0x817fdfe8u, rd32(r3 + 4u));
                wr32(0x817fdfe4u, r7);
                f0 = (f64)rdf32(0x817fdfe8u);
                wr32(0x817fdfecu, rd32(r3 + 8u));
                f0 = (f64)(f32)(f0 + (f64)rdf32(param_1 + 0xb4u));
                wrf32d(0x817fdfe8u, f0);
                a.f[0] = f1;
                a.r[0] = 0x32u;
                a.r[1] = 0x817fdfe4u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0x1eu;
                    (void)tc_call(0x80157f70u, &a);
                }
            }
            r3 = 2u;
        } else {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = param_3;
            r3 = tc_call(0x8007f238u, &a);
            r29 = r3;
            if (r3 == 0u && (u32)((s32)rd32(param_1 + 0x148u) >> 31) == 0u) {
                r30 = rd32((u32)param_2 + 0x30u);
                if ((r30 & 0x1000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x800b0e58u, &a);
                }
                if ((r30 & 0x2000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800b0e58u, &a);
                }
                if ((r30 & 0x4000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 2u;
                    (void)tc_call(0x800b0e58u, &a);
                }
                if ((r30 & 0x8000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x800b0e58u, &a);
                }
                if ((r30 & 0x10000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 4u;
                    (void)tc_call(0x800b0e58u, &a);
                }
                if ((r30 & 0x20000000u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 5u;
                    (void)tc_call(0x800b0e58u, &a);
                }
            }
            r3 = r29;
        }
    }
    return (s32)r3;
}
