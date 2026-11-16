#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x70u, sp_);
    r1 = sp_ - 0x70u;
    wr32(r1 + 0x74u, 0x817ff000u);
    r0 = param_2 + 0x40u;
    wr32(r1 + 0x6cu, 0u);
    wr32(r1 + 0x68u, 0u);
    if (r0 <= 0x48u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r5 = rd32(r0 - 0x7fc71610u);
        sw_ = r5;
        switch (sw_) {
        case 0x80258044u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cb50u;
            a.r[2] = 0xffffffecu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258238u:
            break;
        case 0x80258058u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cb7eu;
            a.r[2] = 0xfffffff0u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258070u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cba5u;
            a.r[2] = 0xfffffff6u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258088u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbbdu;
            a.r[2] = 0xfffffffbu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802580a0u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbcau;
            a.r[2] = 0xfffffffdu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802580b8u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbd1u;
            a.r[2] = 0xfffffffdu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802580d0u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbd7u;
            a.r[2] = 0xfffffffeu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802580e8u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbddu;
            a.r[2] = 0xfffffffeu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258100u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbe2u;
            a.r[2] = 0xfffffffeu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258118u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbe6u;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258130u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbeau;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258148u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbedu;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258160u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbefu;
            a.r[2] = 0u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258178u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbf1u;
            a.r[2] = 0u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258190u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbf3u;
            a.r[2] = 0u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802581a8u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbf5u;
            a.r[2] = 0u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802581c0u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbf7u;
            a.r[2] = 1u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802581d8u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbfau;
            a.r[2] = 1u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x802581f0u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cbfdu;
            a.r[2] = 1u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258208u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cc00u;
            a.r[2] = 2u;
            (void)tc_call(0x80257f18u, &a);
            return;
        case 0x80258220u:
            a.r[0] = param_1;
            a.r[1] = 0x8033cc04u;
            a.r[2] = 2u;
            (void)tc_call(0x80257f18u, &a);
            return;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
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
    px_rec(r1, r1 + 0x34u, (u32)((s32)(((param_2 >> 0x1fu) & 1u) + param_2) >> 1));
    r4 = r1 + 0x34u;
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x80257c90u, &a);
    if ((param_2 & 1u) != 0u) {
        r0 = (u32)rd16(param_1 + 2u);
        wr16(r1 + 8u, rd16(param_1));
        wr16(r1 + 0xau, (u16)r0);
        r0 = (u32)rd16(param_1 + 6u);
        wr16(r1 + 0xcu, rd16(param_1 + 4u));
        wr16(r1 + 0xeu, (u16)r0);
        r0 = (u32)rd16(param_1 + 0xau);
        wr16(r1 + 0x10u, rd16(param_1 + 8u));
        wr16(r1 + 0x12u, (u16)r0);
        r0 = (u32)rd16(param_1 + 0xeu);
        wr16(r1 + 0x14u, rd16(param_1 + 0xcu));
        wr16(r1 + 0x16u, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x12u);
        wr16(r1 + 0x18u, rd16(param_1 + 0x10u));
        wr16(r1 + 0x1au, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x16u);
        wr16(r1 + 0x1cu, rd16(param_1 + 0x14u));
        wr16(r1 + 0x1eu, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x1au);
        wr16(r1 + 0x20u, rd16(param_1 + 0x18u));
        wr16(r1 + 0x22u, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x1eu);
        wr16(r1 + 0x24u, rd16(param_1 + 0x1cu));
        wr16(r1 + 0x26u, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x22u);
        wr16(r1 + 0x28u, rd16(param_1 + 0x20u));
        wr16(r1 + 0x2au, (u16)r0);
        r0 = (u32)rd16(param_1 + 0x26u);
        wr16(r1 + 0x2cu, rd16(param_1 + 0x24u));
        wr16(r1 + 0x2eu, (u16)r0);
        wr16(r1 + 0x30u, rd16(param_1 + 0x28u));
        if ((s32)param_2 <= 0) {
            a.r[0] = r1 + 0x34u;
            a.r[1] = 0x8033cbedu;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x80257f18u, &a);
        } else {
            a.r[0] = r1 + 0x34u;
            a.r[1] = 0x8033cbf1u;
            a.r[2] = 0u;
            (void)tc_call(0x80257f18u, &a);
        }
        a.r[0] = param_1;
        a.r[1] = r1 + 8u;
        a.r[2] = r1 + 0x34u;
        (void)tc_call(0x80257c90u, &a);
    }
    return;
}

void fn_80258004(u32 param_1, u32 param_2)
{
    px_rec(0x817fe000u, param_1, param_2);
}
