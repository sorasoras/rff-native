#include "tc_rt.h"

void fn_801966e4(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    f28 = (f64)rdf32(0x80575428u);
    f12 = (f64)rdf32(0x805754dcu);
    f10 = (f64)rdf32(0x805754e0u);
    f27 = (f64)rdf32(0x805754c8u);
    f29 = (f64)rdf32(0x805754ccu);
    f30 = (f64)rdf32(0x805754d0u);
    f31 = (f64)rdf32(0x805754d4u);
    f13 = (f64)rdf32(0x805754d8u);
    f11 = (f64)rdf32(0x80575460u);
    f9 = (f64)rdf32(0x805754e4u);
    f8 = (f64)rdf32(0x805754e8u);
    f7 = (f64)rdf32(0x805754ecu);
    f6 = (f64)rdf32(0x805754f0u);
    f5 = (f64)rdf32(0x805754f4u);
    f4 = (f64)rdf32(0x805754f8u);
    f3 = (f64)rdf32(0x805754fcu);
    f2 = (f64)rdf32(0x80575500u);
    f1 = (f64)rdf32(0x80575414u);
    f0 = (f64)rdf32(0x80575504u);
    wrf32d(0x817fdf28u, (f64)rdf32(0x805754c4u));
    wrf32d(0x817fdf2cu, f27);
    wrf32d(0x817fdf30u, f28);
    wrf32d(0x817fdf34u, f29);
    wrf32d(0x817fdf38u, f30);
    wrf32d(0x817fdf3cu, f28);
    wrf32d(0x817fdf40u, f31);
    wrf32d(0x817fdf44u, f13);
    wrf32d(0x817fdf48u, f28);
    wrf32d(0x817fdf4cu, f12);
    wrf32d(0x817fdf50u, f11);
    wrf32d(0x817fdf54u, f28);
    wrf32d(0x817fdf58u, f12);
    wrf32d(0x817fdf5cu, f10);
    wrf32d(0x817fdf60u, f28);
    wrf32d(0x817fdf64u, f9);
    wrf32d(0x817fdf68u, f8);
    wrf32d(0x817fdf6cu, f28);
    wrf32d(0x817fdf70u, f7);
    wrf32d(0x817fdf74u, f6);
    wrf32d(0x817fdf78u, f28);
    wrf32d(0x817fdf7cu, f12);
    wrf32d(0x817fdf80u, f5);
    wrf32d(0x817fdf84u, f28);
    wrf32d(0x817fdf88u, f4);
    wrf32d(0x817fdf8cu, f3);
    wrf32d(0x817fdf90u, f28);
    wrf32d(0x817fdf10u, f2);
    wrf32d(0x817fdf14u, f1);
    wrf32d(0x817fdf18u, f28);
    wrf32d(0x817fdf1cu, f10);
    wrf32d(0x817fdf20u, f0);
    wrf32d(0x817fdf24u, f28);
    if ((u32)param_4 == 0u) {
        r6 = rd32(0x805706e8u);
        if ((s32)r6 < 9) {
            r0 = (u32)(s8)param_3 * 0xcu;
            f1 = (f64)rdf32(r0 - 0x7e8020d4u);
            f0 = (f64)rdf32(r0 - 0x7e8020d0u);
            wrf32d(param_2, (f64)rdf32(r0 - 0x7e8020d8u));
            wrf32d(param_2 + 4u, f1);
            wrf32d(param_2 + 8u, f0);
            return;
        }
        if ((r6 - 0x35u) <= 2u) {
            f0 = (f64)rdf32(0x8057542cu);
            wrf32d(0x817fdf04u, f1);
            wrf32d(0x817fdf08u, f0);
            wrf32d(0x817fdf0cu, f28);
            wrf32d(param_2, f1);
            wrf32d(param_2 + 4u, f0);
            wrf32d(param_2 + 8u, f28);
            return;
        }
        if ((s32)r6 <= 63) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = (u32)(s8)param_3;
            (void)tc_call(0x80196aacu, &a);
            return;
        }
        f0 = (f64)rdf32(0x8057542cu);
        wrf32d(0x817fdef8u, f1);
        wrf32d(0x817fdefcu, f0);
        wrf32d(0x817fdf00u, f28);
        wrf32d(param_2, f1);
        wrf32d(param_2 + 4u, f0);
        wrf32d(param_2 + 8u, f28);
    } else {
        r0 = rd32(0x805706e8u);
        if (r0 == 0u) {
            wrf32d(param_2, f2);
            wrf32d(param_2 + 4u, f1);
            wrf32d(param_2 + 8u, f28);
        } else {
            if (r0 == 2u) {
                wrf32d(param_2, f10);
                wrf32d(param_2 + 4u, f0);
                wrf32d(param_2 + 8u, f28);
            }
        }
    }
    return;
}
