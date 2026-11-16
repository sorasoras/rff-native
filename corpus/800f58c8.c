#include "tc_rt.h"

s32 fn_800f58c8(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((s32)rd32(0x8046d87cu) >= 110) {
        r3 = 0u;
    } else {
        wr32(0x817fdf28u, rd32(param_1));
        wr8(0x817fdf2cu, rd8(param_1 + 4u));
        wr8(0x817fdf2du, rd8(param_1 + 5u));
        wr8(0x817fdf2eu, rd8(param_1 + 6u));
        a.r[0] = 0x817fdf2fu;
        a.r[1] = param_1 + 7u;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        r5 = 0x817fdf28u;
        r6 = 0u;
        r4 = 0u;
        wr32(0x817fdf38u, rd32(rd32(param_1 + 0x10u)));
        wrf32d(0x817fdf3cu, (f64)rdf32(rd32(param_1 + 0x10u) + 4u));
        wrf32d(0x817fdf40u, (f64)rdf32(rd32(param_1 + 0x10u) + 8u));
        wrf32d(0x817fdf44u, (f64)rdf32(rd32(param_1 + 0x10u) + 0xcu));
        wrf32d(0x817fdf48u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x10u));
        wr32(0x817fdf4cu, rd32(rd32(param_1 + 0x10u) + 0x14u));
        wrf32d(0x817fdf50u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x18u));
        wrf32d(0x817fdf54u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x1cu));
        wrf32d(0x817fdf58u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x20u));
        wrf32d(0x817fdf5cu, (f64)rdf32(rd32(param_1 + 0x10u) + 0x24u));
        wr32(0x817fdf60u, rd32(rd32(param_1 + 0x10u) + 0x28u));
        wrf32d(0x817fdf64u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x2cu));
        wrf32d(0x817fdf68u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x30u));
        wrf32d(0x817fdf6cu, (f64)rdf32(rd32(param_1 + 0x10u) + 0x34u));
        wrf32d(0x817fdf70u, (f64)rdf32(rd32(param_1 + 0x10u) + 0x38u));
        ctr = 2u;
        do {
            r6 = r6 + 1u;
            r3 = rd32(rd32(param_1 + 0x14u) + r4);
            r4 = r4 + 4u;
            wr8(r5 + 0x4cu, rd8(r3));
            wr8(r5 + 0x4du, rd8(r3 + 1u));
            wr8(r5 + 0x4eu, rd8(r3 + 2u));
            wr8(r5 + 0x4fu, rd8(r3 + 3u));
            wr8(r5 + 0x50u, rd8(r3 + 4u));
            wr8(r5 + 0x51u, rd8(r3 + 5u));
            wr8(r5 + 0x52u, rd8(r3 + 6u));
            wr8(r5 + 0x53u, rd8(r3 + 7u));
            wr8(r5 + 0x54u, rd8(r3 + 8u));
            wr8(r5 + 0x55u, rd8(r3 + 9u));
            wr8(r5 + 0x56u, rd8(r3 + 0xau));
            wr8(r5 + 0x57u, rd8(r3 + 0xbu));
            wr8(r5 + 0x58u, rd8(r3 + 0xcu));
            wr8(r5 + 0x59u, rd8(r3 + 0xdu));
            wr8(r5 + 0x5au, rd8(r3 + 0xeu));
            wr8(r5 + 0x5bu, rd8(r3 + 0xfu));
            r3 = rd32(rd32(param_1 + 0x14u) + r4);
            r4 = r4 + 4u;
            wr8(r5 + 0x5cu, rd8(r3));
            wr8(r5 + 0x5du, rd8(r3 + 1u));
            wr8(r5 + 0x5eu, rd8(r3 + 2u));
            wr8(r5 + 0x5fu, rd8(r3 + 3u));
            wr8(r5 + 0x60u, rd8(r3 + 4u));
            wr8(r5 + 0x61u, rd8(r3 + 5u));
            wr8(r5 + 0x62u, rd8(r3 + 6u));
            wr8(r5 + 0x63u, rd8(r3 + 7u));
            wr8(r5 + 0x64u, rd8(r3 + 8u));
            wr8(r5 + 0x65u, rd8(r3 + 9u));
            wr8(r5 + 0x66u, rd8(r3 + 0xau));
            wr8(r5 + 0x67u, rd8(r3 + 0xbu));
            wr8(r5 + 0x68u, rd8(r3 + 0xcu));
            wr8(r5 + 0x69u, rd8(r3 + 0xdu));
            wr8(r5 + 0x6au, rd8(r3 + 0xeu));
            wr8(r5 + 0x6bu, rd8(r3 + 0xfu));
            r5 = r5 + 0x20u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        wrf32d(0x817fdfb4u, (f64)rdf32(rd32(param_1 + 0x18u)));
        wrf32d(0x817fdfb8u, (f64)rdf32(rd32(param_1 + 0x18u) + 4u));
        wrf32d(0x817fdfbcu, (f64)rdf32(rd32(param_1 + 0x18u) + 8u));
        wrf32d(0x817fdfc0u, (f64)rdf32(rd32(param_1 + 0x18u) + 0xcu));
        wrf32d(0x817fdfc4u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x10u));
        wrf32d(0x817fdfc8u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x14u));
        wrf32d(0x817fdfccu, (f64)rdf32(rd32(param_1 + 0x18u) + 0x18u));
        wrf32d(0x817fdfd0u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x1cu));
        wrf32d(0x817fdfd4u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x20u));
        wrf32d(0x817fdfd8u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x24u));
        wrf32d(0x817fdfdcu, (f64)rdf32(rd32(param_1 + 0x18u) + 0x28u));
        wrf32d(0x817fdfe0u, (f64)rdf32(rd32(param_1 + 0x18u) + 0x2cu));
        wr16(0x817fdfe4u, rd16(param_1 + 0x1cu));
        wr16(0x817fdfe6u, (u16)((u32)rd16(param_1 + 0x1eu) * 0x1eu));
        wr16(0x817fdfe8u, rd16(param_1 + 0x20u));
        wr16(0x817fdfeau, rd16(param_1 + 0x22u));
        wrf32d(0x817fdfecu, (f64)rdf32(param_1 + 0x24u));
        wrf32d(0x817fdff0u, (f64)rdf32(param_1 + 0x28u));
        wrf32d(0x817fdff4u, (f64)rdf32(param_1 + 0x2cu));
        r3 = tc_call(0x8006bb94u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x118u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r30 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x118u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x118u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
            r30 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x80094f08u, &a);
        }
        a.r[0] = r30;
        a.r[1] = 0x817fdf28u;
        (void)tc_call(0x80095014u, &a);
        wr32(r30 + 0xd4u, rd32(r30 + 0xd4u) & 0x7fffffffu);
        a.r[0] = 0x8046d874u;
        a.r[1] = r30;
        r3 = tc_call(0x8007b03cu, &a);
        wr32(r30 + 0x108u, r3);
        r3 = (u32)(s8)rd8(0x817fdf2fu);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = (u32)(s8)rd8(0x817fdf30u);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = (u32)(s8)rd8(0x817fdf31u);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = (u32)(s8)rd8(0x817fdf32u);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = (u32)(s8)rd8(0x817fdf33u);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = (u32)(s8)rd8(0x817fdf34u);
        if (r3 != 0xffffffffu) {
            r3 = (u32)param_2 + r3;
            wr8(r3 + 4u, 1u);
        }
        r3 = r30;
    }
    return (s32)r3;
}
