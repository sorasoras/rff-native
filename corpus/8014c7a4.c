#include "tc_rt.h"

void fn_8014c7a4(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f31 = (f64)rdf32(0x805746e4u);
    f30 = (f64)rdf32(0x805746e0u);
    r29 = param_r3;
    r28 = param_r3;
    r26 = 0u;
    do {
        r27 = rd32(r29 + 0x28u);
        if (r27 != 0u) {
            a.r[0] = r27;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 == 0u) {
                wr32(r29 + 0x28u, 0u);
            } else {
                wrf32d(0x817fdeecu, f30);
                wrf32d(0x817fdef0u, f30);
                wrf32d(0x817fdef4u, f30);
                if (rd32(r29 + 0x34u) == 0u) {
                    wrf32d(0x817fdf58u, f31);
                    wrf32d(0x817fdf68u, f30);
                    wrf32d(0x817fdf78u, f30);
                    wrf32d(0x817fdf5cu, f30);
                    wrf32d(0x817fdf6cu, f31);
                    wrf32d(0x817fdf7cu, f30);
                    wrf32d(0x817fdf60u, f30);
                    wrf32d(0x817fdf70u, f30);
                    wrf32d(0x817fdf80u, f31);
                    wrf32d(0x817fdf64u, f30);
                    wrf32d(0x817fdf74u, f30);
                    wrf32d(0x817fdf84u, f30);
                    wrf32d(0x817fdef8u, f31);
                    wrf32d(0x817fdf08u, f30);
                    wrf32d(0x817fdf18u, f30);
                    wrf32d(0x817fdefcu, f30);
                    wrf32d(0x817fdf0cu, f31);
                    wrf32d(0x817fdf1cu, f30);
                    wrf32d(0x817fdf00u, f30);
                    wrf32d(0x817fdf10u, f30);
                    wrf32d(0x817fdf20u, f31);
                    wrf32d(0x817fdf04u, f30);
                    wrf32d(0x817fdf14u, f30);
                    wrf32d(0x817fdf24u, f30);
                    wrf32d(0x817fdf04u, (f64)rdf32(r28 + 0x40u));
                    wrf32d(0x817fdf14u, (f64)rdf32(r28 + 0x44u));
                    wrf32d(0x817fdf24u, (f64)rdf32(r28 + 0x48u));
                    a.r[0] = 0x817fdef8u;
                    a.r[1] = 0x817fdf58u;
                    a.r[2] = 0x817fdf58u;
                    (void)tc_call(0x802337a0u, &a);
                    a.r[0] = rd32(param_r3 + 4u) + 0x40u;
                    a.r[1] = 0x817fdf58u;
                    a.r[2] = 0x817fdf58u;
                    (void)tc_call(0x802337a0u, &a);
                    a.r[0] = 0x817fdf58u;
                    a.r[1] = 0x817fdeecu;
                    a.r[2] = 0x817fdeecu;
                    (void)tc_call(0x8023411cu, &a);
                } else {
                    wrf32d(0x817fdf88u, f31);
                    wrf32d(0x817fdf98u, f30);
                    wrf32d(0x817fdfa8u, f30);
                    wrf32d(0x817fdf8cu, f30);
                    wrf32d(0x817fdf9cu, f31);
                    wrf32d(0x817fdfacu, f30);
                    wrf32d(0x817fdf90u, f30);
                    wrf32d(0x817fdfa0u, f30);
                    wrf32d(0x817fdfb0u, f31);
                    wrf32d(0x817fdf94u, f30);
                    wrf32d(0x817fdfa4u, f30);
                    wrf32d(0x817fdfb4u, f30);
                    wrf32d(0x817fdf28u, f31);
                    wrf32d(0x817fdf38u, f30);
                    wrf32d(0x817fdf48u, f30);
                    wrf32d(0x817fdf2cu, f30);
                    wrf32d(0x817fdf3cu, f31);
                    wrf32d(0x817fdf4cu, f30);
                    wrf32d(0x817fdf30u, f30);
                    wrf32d(0x817fdf40u, f30);
                    wrf32d(0x817fdf50u, f31);
                    wrf32d(0x817fdf34u, f30);
                    wrf32d(0x817fdf44u, f30);
                    wrf32d(0x817fdf54u, f30);
                    wrf32d(0x817fdf34u, (f64)rdf32(r28 + 0x40u));
                    wrf32d(0x817fdf44u, (f64)rdf32(r28 + 0x44u));
                    wrf32d(0x817fdf54u, (f64)rdf32(r28 + 0x48u));
                    a.r[0] = 0x817fdf28u;
                    a.r[1] = 0x817fdf88u;
                    a.r[2] = 0x817fdf88u;
                    (void)tc_call(0x802337a0u, &a);
                    a.r[0] = rd32(rd32(r29 + 0x34u) + 0x50u);
                    a.r[1] = 0x817fdf88u;
                    a.r[2] = 0x817fdf88u;
                    (void)tc_call(0x802337a0u, &a);
                    a.r[0] = 0x817fdf88u;
                    a.r[1] = 0x817fdeecu;
                    a.r[2] = 0x817fdeecu;
                    (void)tc_call(0x8023411cu, &a);
                }
                r3 = rd32(0x817fdef0u);
                r0 = rd32(0x817fdef4u);
                wr32(0x817fdec8u, rd32(0x817fdeecu));
                wr32(0x817fdeccu, r3);
                wr32(0x817fded0u, r0);
                a.r[0] = rd32(r29 + 0x28u);
                a.r[1] = 0x817fdec8u;
                (void)tc_call(0x8015811cu, &a);
                a.r[0] = rd32(r27 + 8u);
                r3 = tc_call(0x800d91d8u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wrf32d(0x817fdee8u, f30);
                    wrf32d(0x817fdee4u, f30);
                    wrf32d(0x817fdee0u, f30);
                    wrf32d(0x817fdedcu, f30);
                    wrf32d(0x817fded8u, f30);
                    wrf32d(0x817fded4u, f30);
                    r3 = rd32(param_r3 + 4u);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdee0u;
                    a.r[2] = 0xc9u;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x34u), &a);
                    r3 = rd32(param_r3 + 4u);
                    a.r[0] = r3;
                    a.r[1] = 0x817fded4u;
                    a.r[2] = 0xc8u;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
                    wrf32d(r27 + 0x3cu, (f64)rdf32(0x817fdee0u));
                    wrf32d(r27 + 0x40u, (f64)rdf32(0x817fdee4u));
                    wrf32d(r27 + 0x44u, (f64)rdf32(0x817fdee8u));
                    wrf32d(r27 + 0x48u, (f64)rdf32(0x817fded4u));
                    wrf32d(r27 + 0x4cu, (f64)rdf32(0x817fded8u));
                    wrf32d(r27 + 0x50u, (f64)rdf32(0x817fdedcu));
                }
            }
        }
        r26 = r26 + 1u;
        r28 = r28 + 0xcu;
        r29 = r29 + 4u;
    } while ((s32)r26 < 3);
    return;
}
