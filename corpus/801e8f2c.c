#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f32 px_w2f(u32 x){union{f32 f;u32 w;}v;v.w=x;return v.f;}

static f64 px_lo(f64 x){return(f64)px_w2f((u32)px_f2b(x));}

static f64 px_pq(f64 x){u64 b=px_f2b(x);if((b&0x7ff0000000000000ull)==0x7ff0000000000000ull&&(b&0x000fffffffffffffull)!=0)
return px_b2f(b|0x0008000000000000ull);return x;}

static f64 px_psub(f64 a,f64 b){f64 r=a-b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pmul(f64 a,f64 c){f64 r=a*c;if(r!=r){if(a!=a)return px_pq(a);if(c!=c)return px_pq(c);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pfnm(f64 x){return x!=x?x:-x;}

static f64 px_sfma(f64 a,f64 c,f64 b){f64 s=a*c+b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}return s;}

static f64 px_sfms(f64 a,f64 c,f64 b){f64 s=a*c-b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}return s;}

void fn_801e8f2c(u32 param_r3){
u32 fl_=0,lr=0,r0=0,r1=0,r3=0,r4=tc_argr(1u),r5=tc_argr(2u),r6=tc_argr(3u),r7=tc_argr(4u),r8=tc_argr(5u),r9=tc_argr(6u),r10=tc_argr(7u);
u32 r11=0,r12=0,r22=0,r23=0,r24=0,r25=0,r26=0,r27=0,r28=0,r29=0,r30=0,r31=0;u32 t38=0,t41=0,t44=0,t47=0,t50=0,t53=0,t56=0,t59=0,t62=0,t65=0,t68=0,t71=0;
f64 f0=0.0,f1=tc_argf(0u),f2=tc_argf(1u),f3=tc_argf(2u),f4=tc_argf(3u),f5=tc_argf(4u),f6=tc_argf(5u),f7=tc_argf(6u),f20=0.0,f21=0.0,f22=0.0,f23=0.0;
f64 f24=0.0,f25=0.0,f26=0.0,f27=0.0,f28=0.0,f29=0.0,f30=0.0,f31=0.0,t39=0.0,t40=0.0,t42=0.0,t43=0.0;
f64 t45=0.0,t46=0.0,t48=0.0,t49=0.0,t51=0.0,t52=0.0,t54=0.0,t55=0.0,t57=0.0,t58=0.0,t60=0.0,t61=0.0;
f64 t63=0.0,t64=0.0,t66=0.0,t67=0.0,t69=0.0,t70=0.0,t72=0.0,t73=0.0;TcArgs a={0};TcArgs za={0};r1=0x817fe000u;lr=0x817ff000u;r3=param_r3;for(;;){
wr32(r1-0x100u,r1);r1=r1-0x100u;wr32(r1+0x104u,lr);wrf64(r1+0xf0u,f31);wrf32d(r1+0xf8u,px_lo(f31));wrf64(r1+0xe0u,f30);wrf32d(r1+0xe8u,px_lo(f30));
wrf64(r1+0xd0u,f29);wrf32d(r1+0xd8u,px_lo(f29));wrf64(r1+0xc0u,f28);wrf32d(r1+0xc8u,px_lo(f28));wrf64(r1+0xb0u,f27);wrf32d(r1+0xb8u,px_lo(f27));
wrf64(r1+0xa0u,f26);wrf32d(r1+0xa8u,px_lo(f26));wrf64(r1+0x90u,f25);wrf32d(r1+0x98u,px_lo(f25));wrf64(r1+0x80u,f24);wrf32d(r1+0x88u,px_lo(f24));
wrf64(r1+0x70u,f23);wrf32d(r1+0x78u,px_lo(f23));wrf64(r1+0x60u,f22);wrf32d(r1+0x68u,px_lo(f22));wrf64(r1+0x50u,f21);wrf32d(r1+0x58u,px_lo(f21));
wrf64(r1+0x40u,f20);wrf32d(r1+0x48u,px_lo(f20));r11=r1+0x40u;wr32(r11-0x28u,r22);wr32(r11-0x24u,r23);wr32(r11-0x20u,r24);wr32(r11-0x1cu,r25);
wr32(r11-0x18u,r26);wr32(r11-0x14u,r27);wr32(r11-0x10u,r28);wr32(r11-0xcu,r29);wr32(r11-8u,r30);wr32(r11-4u,r31);wr8(r3+0x1578u,0u);r30=r3;wr8(r3+0x1579u,0u);
wr8(r3+0x157au,0u);wr8(r3+0x157bu,0u);wr8(r3+0x157cu,0u);wr8(r3+0x157du,0u);wr8(r3+0x157eu,0u);wr8(r3+0x157fu,0u);wr8(r3+0x1580u,0u);wr8(r3+0x1581u,0u);
wr8(r3+0x1582u,0u);wr8(r3+0x1583u,0u);wr8(r3+0x1584u,0u);wr8(r3+0x1585u,0u);wr8(r3+0x1586u,0u);wr8(r3+0x1587u,0u);wr8(r3+0x1588u,0u);wr8(r3+0x1589u,0u);
wr8(r3+0x158au,0u);wr8(r3+0x158bu,0u);wr8(r3+0x158cu,0u);wr8(r3+0x158du,0u);wr8(r3+0x158eu,0u);wr8(r3+0x158fu,0u);wr8(r3+0x1590u,0u);wr8(r3+0x1591u,0u);
wr8(r3+0x1592u,0u);wr8(r3+0x1593u,0u);wr8(r3+0x1594u,0u);wr8(r3+0x1595u,0u);wr8(r3+0x1596u,0u);wr8(r3+0x1597u,0u);wr8(r3+0x1598u,0u);wr8(r3+0x1599u,0u);
wr8(r3+0x159au,0u);wr32(r1+8u,0x43300000u);wr32(r1+0x10u,0x43300000u);wr8(r3+0x159bu,0u);a=za;a.r[0]=r3;r3=tc_call(0x801eae2cu,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f4=(f64)rdf32(0x8057634cu);r3=r30+0x254u;
f3=(f64)rdf32(0x80576350u);f2=(f64)rdf32(0x80576348u);f1=(f64)rdf32(0x80576354u);f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x2d8u,f4);wrf32d(r30+0x2dcu,f3);
wrf32d(r30+0x2ccu,f2);wrf32d(r30+0x2d0u,f1);wrf32d(r30+0x2d4u,f0);r12=rd32(r30+0x254u);r12=rd32(r12+0xcu);lr=0x801e9084u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;
a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x254u);r3=r30+0x254u;f1=(f64)rdf32(r30+0x2ccu);
r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x2d0u);f3=(f64)rdf32(r30+0x2d8u);f4=(f64)rdf32(r30+0x2dcu);lr=0x801e90a8u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r26=1u;
wr32(r30+0x2b0u,1u);wr8(r30+0x250u,0x58u);wr8(r30+0x251u,0x28u);wr8(r30+0x252u,0xcu);wr8(r30+0x253u,0x80u);wr8(r30+0x2a0u,0x58u);wr8(r30+0x2a1u,0x28u);
wr8(r30+0x2a2u,0xcu);wr8(r30+0x2a3u,0x80u);wr8(r30+0x2a4u,0x58u);wr8(r30+0x2a5u,0x28u);wr8(r30+0x2a6u,0xcu);wr8(r30+0x2a7u,0x80u);wr8(r30+0x2a8u,0x58u);
wr8(r30+0x2a9u,0x28u);wr8(r30+0x2aau,0xcu);wr8(r30+0x2abu,0x80u);wr8(r30+0x2acu,0x58u);wr8(r30+0x2adu,0x28u);wr8(r30+0x2aeu,0xcu);wr8(r30+0x2afu,0x80u);
wr32(r30+0x26cu,0xffffffffu);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x567u;a.r[2]=1u;a.r[4]=0xffffffffu;
r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r23=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();f4=(f64)rdf32(0x8057635cu);f1=(f64)rdf32(0x8057634cu);
f0=(f64)rdf32(0x80576364u);f2=(f64)(f32)px_psub(f1,f4);f3=(f64)rdf32(0x80576360u);f1=(f64)(f32)px_psub(f0,f4);f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x244u,f4);
f2=(f64)(f32)px_pmul(f2,f3);f1=(f64)(f32)px_pmul(f1,f3);wrf32d(r30+0x240u,f4);wrf32d(r30+0x234u,f2);wrf32d(r30+0x238u,f1);wrf32d(r30+0x23cu,f0);a=za;a.r[0]=r3;
r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
wr32(r30+0x230u,r3);r3=r30+0x1bcu;r12=rd32(r30+0x1bcu);r12=rd32(r12+0xcu);lr=0x801e9190u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;
a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x1bcu);r3=r30+0x1bcu;f1=(f64)rdf32(r30+0x234u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x238u);
f3=(f64)rdf32(r30+0x240u);f4=(f64)rdf32(r30+0x244u);lr=0x801e91b4u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x230u);wr32(r30+0x1d4u,r3);if(r3!=0u){a=za;a.r[0]=r3;
r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>1){wr32(r30+0x1d8u,1u);}}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){
if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{
r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r23;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;
a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x56eu;a.r[2]=1u;
a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r23=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();f4=(f64)rdf32(0x80576368u);
f3=(f64)rdf32(0x8057636cu);f2=(f64)rdf32(0x80576370u);f1=(f64)rdf32(0x80576374u);f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x118u,f4);wrf32d(r30+0x11cu,f3);
wrf32d(r30+0x10cu,f2);wrf32d(r30+0x110u,f1);wrf32d(r30+0x114u,f0);a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x108u,r3);r3=r30+0x94u;r12=rd32(r30+0x94u);r12=rd32(r12+0xcu);
lr=0x801e9298u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x94u);
r3=r30+0x94u;f1=(f64)rdf32(r30+0x10cu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x110u);f3=(f64)rdf32(r30+0x118u);f4=(f64)rdf32(r30+0x11cu);lr=0x801e92bcu;
if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
f1=(f64)rdf32(0x80576348u);r3=r30;r0=rd32(r30+0x108u);f3=(f64)rdf32(0x8057634cu);f2=(f64)rdf32(0x80576364u);f0=(f64)rdf32(0x80576358u);wr32(r30+0xacu,r0);
wrf32d(r30+0x84u,f3);wrf32d(r30+0x88u,f2);wrf32d(r30+0x78u,f1);wrf32d(r30+0x7cu,f1);wrf32d(r30+0x80u,f0);r12=rd32(r30);r12=rd32(r12+0xcu);lr=0x801e92fcu;
if(r12!=0x801e8f2cu){a=za;a.r[0]=r30;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30);r3=r30;
f1=(f64)rdf32(r30+0x78u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x7cu);f3=(f64)rdf32(r30+0x84u);f4=(f64)rdf32(r30+0x88u);lr=0x801e9320u;if(r12!=0x801e8f2cu){
a=za;a.r[0]=r30;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
r3=rd32(r30+0x108u);r26=1u;wr32(r30+0x5cu,1u);wr32(r30+0x18u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>1){
wr32(r30+0x1cu,1u);}}f3=(f64)rdf32(r30+0x88u);f2=(f64)rdf32(0x80576378u);f1=(f64)rdf32(r30+0x84u);f0=(f64)rdf32(0x80576348u);f3=(f64)(f32)px_pmul(f3,f2);
f1=(f64)(f32)px_pmul(f1,f2);wr32(r30+0x34u,1u);wr32(r30+0x38u,1u);wrf32d(r30+0x3cu,f0);wrf32d(r30+0x40u,f0);wrf32d(r30+0x44u,f1);wrf32d(r30+0x48u,f3);a=za;
r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;
a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r23;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{
r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;
r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x56fu;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();
wr32(r30+0x2e8u,r3);a=za;a.r[0]=r23;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();wr32(r30+0x2ecu,r3);a=za;a.r[0]=r30;r3=tc_call(0x801eb04cu,&a);f1=tc_lastf();
f4=(f64)rdf32(0x8057637cu);f3=(f64)rdf32(0x80576380u);f2=(f64)rdf32(0x80576384u);f1=(f64)rdf32(0x80576388u);f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x1acu,f4);
r3=rd32(r30+0x2ecu);wrf32d(r30+0x1b0u,f3);wrf32d(r30+0x1a0u,f2);wrf32d(r30+0x1a4u,f1);wrf32d(r30+0x1a8u,f0);a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x19cu,r3);
r3=r30+0x128u;r12=rd32(r30+0x128u);r12=rd32(r12+0xcu);lr=0x801e9454u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r12=rd32(r30+0x128u);r3=r30+0x128u;f1=(f64)rdf32(r30+0x1a0u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x1a4u);f3=(f64)rdf32(r30+0x1acu);
f4=(f64)rdf32(r30+0x1b0u);lr=0x801e9478u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();wr32(r30+0x140u,rd32(r30+0x19cu));a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;
a.r[0]=r3;a.r[1]=0x572u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r31=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();
a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);wr32(r30+0x418u,r3);r25=r30;f27=(f64)rdf32(0x8057638cu);r24=r30+0x41cu;f26=rdf64(0x805763e8u);r23=r30+0x544u;f25=(f64)rdf32(0x80576390u);
r22=0u;f24=(f64)rdf32(0x8057636cu);r27=0u;f23=(f64)rdf32(0x80576394u);r26=1u;f22=(f64)rdf32(0x80576358u);r28=2u;f21=(f64)rdf32(0x80576398u);r29=0x80470000u;
f20=(f64)rdf32(0x8057639cu);for(;;){wrf32d(r25+0x4a4u,f27);r3=r24;wr32(r1+0xcu,r22^0x80000000u);f0=rdf64(r1+8u);wrf32d(r25+0x4a0u,f27);
f0=(f64)(f32)px_psub(f0,f26);f0=(f64)(f32)px_sfma(f25,f0,f24);wrf32d(r25+0x494u,f0);wrf32d(r25+0x498u,f23);wrf32d(r25+0x49cu,f22);r12=rd32(r24);
r12=rd32(r12+0xcu);lr=0x801e9528u;if(r12==0x801e8f2cu){fl_=1u;break;}a=za;a.r[0]=r24;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;
a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r24);r3=r24;f1=(f64)rdf32(r25+0x494u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r25+0x498u);f3=(f64)rdf32(r25+0x4a0u);f4=(f64)rdf32(r25+0x4a4u);lr=0x801e954cu;
if(r12==0x801e8f2cu){fl_=1u;break;}a=za;a.r[0]=r24;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;f1=tc_callf(r12,&a);r3=tc_lastr();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
wr32(r25+0x478u,1u);r3=rd32(r30+0x418u);wr32(r25+0x434u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);if((s32)r3>0){wr32(r25+0x438u,0u);}}wrf32d(r25+0x5c8u,f25);r3=r23;
wr32(r1+0x14u,r22^0x80000000u);f0=rdf64(r1+0x10u);wrf32d(r25+0x5ccu,f27);f0=(f64)(f32)px_psub(f0,f26);f0=(f64)(f32)px_sfma(f25,f0,f21);wrf32d(r25+0x5bcu,f0);
wrf32d(r25+0x5c0u,f20);wrf32d(r25+0x5c4u,f22);r12=rd32(r23);r12=rd32(r12+0xcu);lr=0x801e95acu;if(r12==0x801e8f2cu){fl_=2u;break;}a=za;a.r[0]=r23;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r23);r3=r23;f1=(f64)rdf32(r25+0x5bcu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r25+0x5c0u);
f3=(f64)rdf32(r25+0x5c8u);f4=(f64)rdf32(r25+0x5ccu);lr=0x801e95d0u;if(r12==0x801e8f2cu){fl_=3u;break;}a=za;a.r[0]=r23;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;
a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x418u);wr32(r25+0x55cu,r3);if(r3!=0u){a=za;
a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>2){wr32(r25+0x560u,2u);}}a=za;a.r[0]=r30;r3=tc_call(0x801eacf8u,&a);f1=tc_lastf();a=za;
a.r[0]=0x80475e24u;a.r[1]=(u32)(s8)r3;r3=tc_call(0x8017c25cu,&a);f1=tc_lastf();a=za;a.r[0]=r30;a.r[1]=r24;a.r[2]=r22&0xffu;a.r[3]=r3;
f1=tc_callf(0x801eb340u,&a);r3=tc_lastr();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r22=r22+1u;r24=r24+0x378u;r23=r23+0x378u;r25=r25+0x378u;if((s32)r22>=4){fl_=4u;break;}}if(fl_!=4u){if(fl_!=3u){if(fl_==2u){fl_=0u;}else if(fl_==1u){fl_=0u;
continue;}continue;}fl_=0u;continue;}fl_=0u;f3=(f64)rdf32(0x8057635cu);r3=r30+0x2f0u;f2=(f64)rdf32(0x805763a0u);f1=(f64)rdf32(0x8057636cu);
f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x378u,f3);wrf32d(r30+0x374u,f3);wrf32d(r30+0x368u,f2);wrf32d(r30+0x36cu,f1);wrf32d(r30+0x370u,f0);r12=rd32(r30+0x2f0u);
r12=rd32(r12+0xcu);lr=0x801e9668u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r12=rd32(r30+0x2f0u);r3=r30+0x2f0u;f1=(f64)rdf32(r30+0x368u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x36cu);f3=(f64)rdf32(r30+0x374u);
f4=(f64)rdf32(r30+0x378u);lr=0x801e968cu;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r3=rd32(r30+0x418u);r29=1u;wr32(r30+0x34cu,1u);wr32(r30+0x308u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);if((s32)r3>1){wr32(r30+0x30cu,1u);}}
f7=(f64)rdf32(0x80576348u);r3=r30+0x384u;f6=(f64)rdf32(0x805763a4u);f5=(f64)rdf32(0x805763a8u);f4=(f64)rdf32(0x805763acu);f3=(f64)rdf32(0x805763b0u);
f2=(f64)rdf32(0x805763b4u);f1=(f64)rdf32(0x805763b8u);f0=(f64)rdf32(0x80576358u);wrf32d(r30+0x32cu,f7);wrf32d(r30+0x330u,f7);wrf32d(r30+0x334u,f6);
wrf32d(r30+0x338u,f5);wrf32d(r30+0x408u,f4);wrf32d(r30+0x40cu,f3);wrf32d(r30+0x3fcu,f2);wrf32d(r30+0x400u,f1);wrf32d(r30+0x404u,f0);r12=rd32(r30+0x384u);
r12=rd32(r12+0xcu);lr=0x801e970cu;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x384u);r3=r30+0x384u;f1=(f64)rdf32(r30+0x3fcu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x400u);
f3=(f64)rdf32(r30+0x408u);f4=(f64)rdf32(r30+0x40cu);lr=0x801e9730u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x418u);wr32(r30+0x3e0u,1u);wr32(r30+0x39cu,r3);
if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>3){wr32(r30+0x3a0u,3u);}}f3=(f64)rdf32(r30+0x40cu);f2=(f64)rdf32(0x805763bcu);
f1=(f64)rdf32(r30+0x408u);f0=(f64)rdf32(0x80576348u);f3=(f64)(f32)px_pmul(f3,f2);f1=(f64)(f32)px_pmul(f1,f2);wr32(r30+0x3b8u,1u);wr32(r30+0x3bcu,1u);
wrf32d(r30+0x3c0u,f0);wrf32d(r30+0x3c4u,f0);wrf32d(r30+0x3c8u,f1);wrf32d(r30+0x3ccu,f3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r31;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);
f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r31;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;
a.r[0]=r3;a.r[1]=r31;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;
a.r[1]=0x570u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r23=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;
a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r30+0x11fcu,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){
if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{
r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r23;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;
a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x571u;a.r[2]=1u;
a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r23=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;
r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
f4=(f64)rdf32(0x805763c0u);f3=(f64)rdf32(0x80576360u);f0=(f64)rdf32(0x805763c4u);f1=(f64)rdf32(0x805763c8u);f2=px_pfnm((f64)(f32)px_sfms(f4,f3,f0));
f0=(f64)rdf32(0x80576358u);f1=px_pfnm((f64)(f32)px_sfms(f4,f3,f1));wr32(r30+0x1308u,r3);r3=r30+0x1200u;wrf32d(r30+0x1288u,f4);wrf32d(r30+0x1284u,f4);
wrf32d(r30+0x1278u,f2);wrf32d(r30+0x127cu,f1);wrf32d(r30+0x1280u,f0);r12=rd32(r30+0x1200u);r12=rd32(r12+0xcu);lr=0x801e98e4u;if(r12!=0x801e8f2cu){a=za;
a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x1200u);r3=r30+0x1200u;
f1=(f64)rdf32(r30+0x1278u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r30+0x127cu);f3=(f64)rdf32(r30+0x1284u);f4=(f64)rdf32(r30+0x1288u);lr=0x801e9908u;
if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r3=rd32(r30+0x11fcu);wr32(r30+0x1218u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);if((s32)r3>0){wr32(r30+0x121cu,0u);}}f23=(f64)rdf32(0x80576370u);r26=r30;
f2=(f64)rdf32(0x80576360u);r27=r30+0x1294u;f1=(f64)rdf32(0x805763c4u);r22=0u;f0=(f64)rdf32(0x805763c8u);r29=0u;f22=px_pfnm((f64)(f32)px_sfms(f23,f2,f1));
f20=(f64)rdf32(0x80576358u);f21=px_pfnm((f64)(f32)px_sfms(f23,f2,f0));r31=1u;for(;;){wrf32d(r26+0x131cu,f23);r3=r27;wrf32d(r26+0x1318u,f23);
wrf32d(r26+0x130cu,f22);wrf32d(r26+0x1310u,f21);wrf32d(r26+0x1314u,f20);r12=rd32(r27);r12=rd32(r12+0xcu);lr=0x801e9984u;if(r12==0x801e8f2cu){fl_=5u;break;}a=za;
a.r[0]=r27;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r27);r3=r27;f1=(f64)rdf32(r26+0x130cu);
r12=rd32(r12+0x1cu);f2=(f64)rdf32(r26+0x1310u);f3=(f64)rdf32(r26+0x1318u);f4=(f64)rdf32(r26+0x131cu);lr=0x801e99a8u;if(r12==0x801e8f2cu){fl_=6u;break;}a=za;
a.r[0]=r27;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;f1=tc_callf(r12,&a);r3=tc_lastr();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=0.0;wr32(r26+0x12f0u,1u);
r3=rd32(r30+0x1308u);wr32(r26+0x12acu,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=0.0;if((s32)r3>0){wr32(r26+0x12b0u,0u);}}wr32(r26+0x12f4u,1u);r22=r22+1u;r27=r27+0x94u;
wr32(r26+0x12fcu,1u);r26=r26+0x94u;if((s32)r22>=4){fl_=7u;break;}}if(fl_!=7u){if(fl_==6u){fl_=0u;}else if(fl_==5u){fl_=0u;continue;}continue;}fl_=0u;
f4=(f64)rdf32(0x805763c4u);r3=r30+0x14e4u;f3=(f64)rdf32(0x80576360u);f1=(f64)rdf32(0x805763c8u);f2=px_pfnm((f64)(f32)px_sfms(f4,f3,f4));
f0=(f64)rdf32(0x80576358u);f1=px_pfnm((f64)(f32)px_sfms(f4,f3,f1));wrf32d(r30+0x156cu,f4);wrf32d(r30+0x1568u,f4);wrf32d(r30+0x155cu,f2);wrf32d(r30+0x1560u,f1);
wrf32d(r30+0x1564u,f0);r12=rd32(r30+0x14e4u);r12=rd32(r12+0xcu);lr=0x801e9a28u;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;
a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r30+0x14e4u);r3=r30+0x14e4u;f1=(f64)rdf32(r30+0x155cu);r12=rd32(r12+0x1cu);
f2=(f64)rdf32(r30+0x1560u);f3=(f64)rdf32(r30+0x1568u);f4=(f64)rdf32(r30+0x156cu);lr=0x801e9a4cu;if(r12!=0x801e8f2cu){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;
a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r3=rd32(r30+0x1308u);
wr32(r30+0x14fcu,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>1){wr32(r30+0x1500u,1u);}}wr8(r30+0x1510u,0x80u);
wr32(r30+0x1504u,1u);wr32(r30+0x1544u,1u);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);
r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r23;
r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}wr8(r30+0x12e0u,0xaau);wr8(r30+0x12e1u,0xd2u);wr8(r30+0x12e2u,0xffu);wr8(r30+0x12e3u,0xffu);wr8(r30+0x12e4u,0xaau);
wr8(r30+0x12e5u,0xd2u);wr8(r30+0x12e6u,0xffu);wr8(r30+0x12e7u,0xffu);wr8(r30+0x12e8u,0xaau);wr8(r30+0x12e9u,0xd2u);wr8(r30+0x12eau,0xffu);
wr8(r30+0x12ebu,0xffu);wr8(r30+0x12ecu,0xaau);wr8(r30+0x12edu,0xd2u);wr8(r30+0x12eeu,0xffu);wr8(r30+0x12efu,0xffu);wr8(r30+0x1374u,0xc8u);
wr8(r30+0x1375u,0x8cu);wr8(r30+0x1376u,0xffu);wr8(r30+0x1377u,0xffu);wr8(r30+0x1378u,0xc8u);wr8(r30+0x1379u,0x8cu);wr8(r30+0x137au,0xffu);
wr8(r30+0x137bu,0xffu);wr8(r30+0x137cu,0xc8u);wr8(r30+0x137du,0x8cu);wr8(r30+0x137eu,0xffu);wr8(r30+0x137fu,0xffu);wr8(r30+0x1380u,0xc8u);
wr8(r30+0x1381u,0x8cu);wr8(r30+0x1382u,0xffu);wr8(r30+0x1383u,0xffu);wr8(r30+0x1408u,0xffu);wr8(r30+0x1409u,0xd2u);wr8(r30+0x140au,0x78u);
wr8(r30+0x140bu,0xffu);wr8(r30+0x140cu,0xffu);wr8(r30+0x140du,0xd2u);wr8(r30+0x140eu,0x78u);wr8(r30+0x140fu,0xffu);wr8(r30+0x1410u,0xffu);
wr8(r30+0x1411u,0xd2u);wr8(r30+0x1412u,0x78u);wr8(r30+0x1413u,0xffu);wr8(r30+0x1414u,0xffu);wr8(r30+0x1415u,0xd2u);wr8(r30+0x1416u,0x78u);
wr8(r30+0x1417u,0xffu);wr8(r30+0x149cu,0xaau);wr8(r30+0x149du,0xffu);wr8(r30+0x149eu,0x82u);wr8(r30+0x149fu,0xffu);wr8(r30+0x14a0u,0xaau);
wr8(r30+0x14a1u,0xffu);wr8(r30+0x14a2u,0x82u);wr8(r30+0x14a3u,0xffu);wr8(r30+0x14a4u,0xaau);wr8(r30+0x14a5u,0xffu);wr8(r30+0x14a6u,0x82u);
wr8(r30+0x14a7u,0xffu);wr8(r30+0x14a8u,0xaau);wr8(r30+0x14a9u,0xffu);wr8(r30+0x14aau,0x82u);wr8(r30+0x14abu,0xffu);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x66cu;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r23=r3;a=za;a.r[0]=r3;
r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r30+0x15a8u,r3);r26=r30;f24=rdf64(0x805763e8u);r27=r30+0x5d8u;f25=(f64)rdf32(0x805763d8u);r22=0u;
f22=(f64)rdf32(0x805763d4u);r29=1u;f23=(f64)rdf32(0x80576374u);f26=(f64)rdf32(0x805763dcu);f27=(f64)rdf32(0x80576358u);f28=(f64)rdf32(0x805763e0u);
f29=(f64)rdf32(0x80576348u);f30=(f64)rdf32(0x805763e4u);f31=(f64)rdf32(0x805763a8u);f20=(f64)rdf32(0x805763d0u);f21=(f64)rdf32(0x805763ccu);for(;;){r28=r26;
wr32(r1+0xcu,r22^0x80000000u);r31=r27;r24=0u;wrf32d(r26+0x650u,(f64)(f32)px_sfma(f20,(f64)(f32)px_psub(rdf64(r1+8u),f24),f21));for(;;){wrf32d(r28+0x65cu,f22);
wrf32d(r28+0x660u,f23);if((s32)r24>0){f0=(f64)rdf32(r26+0x650u);wr32(r1+0x14u,r24^0x80000000u);f1=(f64)(f32)px_psub(rdf64(r1+0x10u),f24);
f0=(f64)(f32)px_sfma(f25,f1,f0);wrf32d(r28+0x650u,f0);}wrf32d(r28+0x654u,f26);r3=r31;wrf32d(r28+0x658u,f27);r12=rd32(r31);r12=rd32(r12+0xcu);lr=0x801e9cd4u;
if(r12==0x801e8f2cu){fl_=8u;break;}a=za;a.r[0]=r31;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r31);r3=r31;
f1=(f64)rdf32(r28+0x650u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r28+0x654u);f3=(f64)rdf32(r28+0x65cu);f4=(f64)rdf32(r28+0x660u);lr=0x801e9cf8u;if(r12==0x801e8f2cu){
fl_=9u;break;}a=za;a.r[0]=r31;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
f1=tc_callf(r12,&a);r3=tc_lastr();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
wr32(r28+0x634u,1u);r24=r24+1u;r31=r31+0x94u;wr32(r28+0x5f0u,rd32(r30+0x15a8u));wrf32d(r28+0x5e4u,f28);wrf32d(r28+0x614u,f29);wrf32d(r28+0x618u,f29);
wrf32d(r28+0x61cu,f30);wrf32d(r28+0x620u,f31);r28=r28+0x94u;if((s32)r24>=3){fl_=10u;break;}}if(fl_==10u){fl_=0u;}else{if(fl_==9u){fl_=0u;fl_=11u;break;}
if(fl_==8u){fl_=0u;fl_=12u;break;}}r22=r22+1u;r27=r27+0x378u;r26=r26+0x378u;if((s32)r22>=4){a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);
f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r23;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;
a.r[0]=r3;a.r[1]=r23;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}wr8(r30+0x15a4u,1u);wr32(r30+0x15a0u,0u);a=za;a.r[0]=r30;
r3=tc_call(0x801eacf8u,&a);f1=tc_lastf();wr8(r30+0x159cu,(u8)r3);a=za;a.r[0]=r30;r3=tc_call(0x801eaed4u,&a);f1=tc_lastf();a=za;a.r[0]=r30;
r3=tc_call(0x801eb160u,&a);f1=tc_lastf();wr8(r30+0x15a6u,0u);wr8(r30+0x15a5u,1u);a=za;a.r[0]=0x15u;r3=tc_call(0x80141170u,&a);f1=tc_lastf();t38=r1+0xf8u;
t39=(f64)rdf32(t38);t40=(f64)rdf32(t38);f31=rdf64(r1+0xf0u);t41=r1+0xe8u;t42=(f64)rdf32(t41);t43=(f64)rdf32(t41);f30=rdf64(r1+0xe0u);t44=r1+0xd8u;
t45=(f64)rdf32(t44);t46=(f64)rdf32(t44);f29=rdf64(r1+0xd0u);t47=r1+0xc8u;t48=(f64)rdf32(t47);t49=(f64)rdf32(t47);f28=rdf64(r1+0xc0u);t50=r1+0xb8u;
t51=(f64)rdf32(t50);t52=(f64)rdf32(t50);f27=rdf64(r1+0xb0u);t53=r1+0xa8u;t54=(f64)rdf32(t53);t55=(f64)rdf32(t53);f26=rdf64(r1+0xa0u);t56=r1+0x98u;
t57=(f64)rdf32(t56);t58=(f64)rdf32(t56);f25=rdf64(r1+0x90u);t59=r1+0x88u;t60=(f64)rdf32(t59);t61=(f64)rdf32(t59);f24=rdf64(r1+0x80u);t62=r1+0x78u;
t63=(f64)rdf32(t62);t64=(f64)rdf32(t62);f23=rdf64(r1+0x70u);t65=r1+0x68u;t66=(f64)rdf32(t65);t67=(f64)rdf32(t65);f22=rdf64(r1+0x60u);t68=r1+0x58u;
t69=(f64)rdf32(t68);t70=(f64)rdf32(t68);f21=rdf64(r1+0x50u);t71=r1+0x48u;t72=(f64)rdf32(t71);t73=(f64)rdf32(t71);r11=r1+0x40u;f20=rdf64(r1+0x40u);
r22=rd32(r11-0x28u);r23=rd32(r11-0x24u);r24=rd32(r11-0x20u);r25=rd32(r11-0x1cu);r26=rd32(r11-0x18u);r27=rd32(r11-0x14u);r28=rd32(r11-0x10u);r29=rd32(r11-0xcu);
r30=rd32(r11-8u);r31=rd32(r11-4u);r0=rd32(r1+0x104u);return;}}do{if(fl_==12u){fl_=0u;}else if(fl_==11u){fl_=0u;break;}fl_=13u;break;}while(0);if(fl_==13u){
fl_=0u;}}}}}}}}}}}}}}}}}}}}}
