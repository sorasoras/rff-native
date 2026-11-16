#include "tc_rt.h"

void fn_801c9c98(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_r3 + 0x178u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 < 0) {
            return;
        }
        f31 = (f64)rdf32(0x80575de0u);
        r29 = param_r4;
        r28 = param_r3 + 0x10u;
        r27 = 0u;
        do {
            r26 = rd32(r29 + 0x1694u);
            if (r26 != 0u) {
                wrf32d(0x817fdfccu, f31);
                wrf32d(0x817fdfc8u, f31);
                wrf32d(0x817fdfc4u, f31);
                a.f[0] = (f64)rdf32(param_r3 + 8u);
                a.r[0] = 0x817fdfc4u;
                a.r[1] = r28;
                a.r[2] = param_r4 + 0xcf4u;
                (void)tc_call(0x800457b8u, &a);
                r6 = rd32(0x817fdfc8u);
                r0 = rd32(0x817fdfccu);
                wr32(0x817fdfb8u, rd32(0x817fdfc4u));
                wr32(0x817fdfbcu, r6);
                wr32(0x817fdfc0u, r0);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = r26 + 0xcf4u;
                a.r[2] = 0x817fdfb8u;
                (void)tc_call(0x802343a4u, &a);
                wrf32d(r26 + 0x90u, (f64)rdf32(0x817fdfb8u));
                wrf32d(r26 + 0x94u, (f64)rdf32(0x817fdfbcu));
                wrf32d(r26 + 0x98u, (f64)rdf32(0x817fdfc0u));
                if ((s32)rd32(param_r3 + 0xcu) >= 30) {
                    a.r[0] = r26;
                    a.r[1] = 0x2008u;
                    (void)tc_call(0x800aef78u, &a);
                }
            }
            r27 = r27 + 1u;
            r28 = r28 + 0xcu;
            r29 = r29 + 4u;
        } while ((s32)r27 < 30);
        if ((s32)rd32(param_r3 + 0xcu) >= 30) {
            wr32(param_r3 + 0xcu, 0u);
        }
        f0 = (f64)rdf32(param_r3 + 8u) + rdf64(0x80575e10u);
        f1 = (f64)rdf32(0x80575e18u);
        wr32(param_r3 + 0xcu, rd32(param_r3 + 0xcu) + 1u);
        f0 = (f64)(f32)f0;
        wrf32d(param_r3 + 8u, f0);
        if (!((f0 > f1) || (f0 == f1))) {
            return;
        }
        a.f[0] = f1;
        a.r[0] = 0x68u;
        a.r[1] = param_r4 + 0xcf4u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d783cu, &a);
        r26 = r3;
        if (r3 != 0u) {
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r26 + 0x20u, r3);
            f1 = (f64)rdf32(0x80575e1cu);
            wr32(r26 + 0x24u, 0u);
            a.f[0] = f1;
            a.r[0] = r26;
            (void)tc_call(0x80157f78u, &a);
        }
        a.r[0] = param_r4;
        a.r[1] = 0x226au;
        (void)tc_call(0x800aef78u, &a);
        wr32(param_r3 + 0x178u, 1u);
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056b64u, &a);
        a.r[0] = param_r3 + 0x17cu;
        (void)tc_call(0x8020c0f8u, &a);
        wr32(param_r4 + 0xe94u, 1u);
        a.r[0] = param_r4;
        (void)tc_call(0x800b516cu, &a);
        a.f[0] = (f64)rdf32(0x80575e18u);
        a.r[0] = param_r4;
        a.r[1] = 3u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    } else {
        a.r[0] = param_r3 + 0x17cu;
        r3 = tc_call(0x8020c130u, &a);
        if (r3 == 0u) {
            a.r[0] = param_r3 + 0x17cu;
            (void)tc_call(0x8020c504u, &a);
            r4 = rd32(param_r4 + 0xe88u);
            wr32(param_r4 + 0xe88u, r4 | (r4 ^ 0x80000000u));
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            (void)tc_call(0x80056f08u, &a);
        }
    }
    return;
}
