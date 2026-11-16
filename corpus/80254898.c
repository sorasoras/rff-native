#include "tc_rt.h"

void fn_80254898(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r5 = rd32(0x80576c88u);
    r0 = rd32(r5 + 0x5ecu);
    c0lt = (s32)r0 < 34;
    do {
        if (r0 != 0x22u) {
            if (!c0lt) break;
            if ((s32)r0 >= 11) {
                if ((s32)r0 >= 27) {
                    r6 = 0xcc010000u;
                    wr8(0xcc008000u, 0x61u);
                    wr32(0xcc008000u, 0x24000000u);
                    break;
                }
                r6 = 0xcc010000u;
                wr8(0xcc008000u, 0x61u);
                wr32(0xcc008000u, 0x23000000u);
                break;
            }
            if ((s32)r0 < 0) break;
        }
        r7 = 0xcc010000u;
        wr8(0xcc008000u, 0x10u);
        r6 = 0x1006u;
        wr32(0xcc008000u, 0x1006u);
        wr32(0xcc008000u, 0u);
    } while (0);
    r0 = rd32(r5 + 0x5f0u);
    c0lt = (s32)r0 < 21;
    if (r0 == 0x15u) {
        r6 = 0xcc010000u;
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, 0x67000000u);
    } else if (c0lt) {
        if ((s32)r0 >= 9) {
            if ((s32)r0 >= 17) {
                r6 = rd32(0x80571954u);
                wr16(r6 + 6u, 0u);
            } else {
                r6 = 0xcc010000u;
                r7 = 8u;
                r8 = rd32(r5 + 0x5f4u) & 0xffffff0fu;
                wr32(r5 + 0x5f4u, r8);
                wr8(0xcc008000u, 8u);
                wr8(0xcc008000u, 0x20u);
                wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            }
        } else if ((s32)r0 >= 0) {
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000000u);
        }
    }
    wr32(r5 + 0x5ecu, param_1);
    if (param_1 <= 0x23u) {
        r6 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc718b4u);
        sw_ = r6;
        switch (sw_) {
        case 0x802549c4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x273u);
            break;
        case 0x802549e4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x14au);
            break;
        case 0x80254a04u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x16bu);
            break;
        case 0x80254a24u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x84u);
            break;
        case 0x80254a44u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0xc6u);
            break;
        case 0x80254a64u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x210u);
            break;
        case 0x80254a84u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x252u);
            break;
        case 0x80254aa4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x231u);
            break;
        case 0x80254ac4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x1adu);
            break;
        case 0x80254ae4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x1ceu);
            break;
        case 0x80254b24u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x153u);
            break;
        case 0x80254b44u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ae7fu);
            break;
        case 0x80254b60u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x23008e7fu);
            break;
        case 0x80254b7cu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x23009e7fu);
            break;
        case 0x80254b98u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x23001e7fu);
            break;
        case 0x80254bb4u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ac3fu);
            break;
        case 0x80254bd0u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ac7fu);
            break;
        case 0x80254becu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300acbfu);
            break;
        case 0x80254c08u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300acffu);
            break;
        case 0x80254c24u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ad3fu);
            break;
        case 0x80254c40u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ad7fu);
            break;
        case 0x80254c5cu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300adbfu);
            break;
        case 0x80254c78u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300adffu);
            break;
        case 0x80254c94u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300ae3fu);
            break;
        case 0x80254cb0u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300a27fu);
            break;
        case 0x80254cccu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300a67fu);
            break;
        case 0x80254ce8u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2300aa7fu);
            break;
        case 0x80254d04u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c0c6u);
            break;
        case 0x80254d20u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c16bu);
            break;
        case 0x80254d3cu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c0e7u);
            break;
        case 0x80254d58u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c108u);
            break;
        case 0x80254d74u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c129u);
            break;
        case 0x80254d90u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c14au);
            break;
        case 0x80254dacu:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x2402c1adu);
            break;
        case 0x80254b04u:
            r6 = 0xcc010000u;
            wr8(0xcc008000u, 0x10u);
            wr32(0xcc008000u, 0x1006u);
            wr32(0xcc008000u, 0x21u);
            break;
        case 0x80254dc4u:
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    wr32(r5 + 0x5f0u, param_2);
    if (param_2 <= 0x16u) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc71910u);
        sw_ = r3;
        switch (sw_) {
        case 0x80254de8u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000042u);
            break;
        case 0x80254e04u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000084u);
            break;
        case 0x80254e20u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000063u);
            break;
        case 0x80254e3cu:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000129u);
            break;
        case 0x80254e90u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x6700014bu);
            break;
        case 0x80254eacu:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x6700018du);
            break;
        case 0x80254ec8u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x670001cfu);
            break;
        case 0x80254ee4u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000211u);
            break;
        case 0x80254e58u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000252u);
            break;
        case 0x80254f00u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x20u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80254f30u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x30u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80254f60u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x40u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80254f90u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x50u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80254fc0u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x60u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80254ff0u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x70u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80255020u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x90u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x80255050u:
            wr32(r5 + 0x5f4u, (rd32(r5 + 0x5f4u) & 0xffffff0fu) | 0x80u);
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, 0x20u);
            wr32(0xcc008000u, rd32(r5 + 0x5f4u));
            break;
        case 0x8025507cu:
            wr16(rd32(0x80571954u) + 6u, 2u);
            break;
        case 0x8025508cu:
            wr16(rd32(0x80571954u) + 6u, 3u);
            break;
        case 0x8025509cu:
            wr16(rd32(0x80571954u) + 6u, 4u);
            break;
        case 0x802550acu:
            wr16(rd32(0x80571954u) + 6u, 5u);
            break;
        case 0x80254e74u:
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, 0x67000021u);
            break;
        case 0x802550b8u:
            break;
        default:
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    wr16(r5 + 2u, 0u);
    return;
}
