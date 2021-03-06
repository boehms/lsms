/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_q2d.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_q2d_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t10, t13, t14, t16, t18, t21, t24, t25;
  double t26, t28, t31, t32, t33, t37, t38, t39;
  double t40, t41, t42, t46, t47, t51, t55, t58;
  double t60, t61, t62, t63, t64, t68, t69, t70;
  double t77, t84, t88, t89, t94, t96, t100, t101;
  double t102, t103, t104, t106, t109, t112, t118, t142;
  double t153, t163;


  t1 = M_CBRT6;
  t2 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t3 = cbrt(t2);
  t4 = t3 * t3;
  t5 = 0.1e1 / t4;
  t6 = t1 * t5;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t10 = 0.8040e0 + 0.5e1 / 0.972e3 * t8;
  t13 = 0.18040e1 - 0.64641600e0 / t10;
  t14 = t1 * t1;
  t16 = 0.1e1 / t3 / t2;
  t18 = t7 * t7;
  t21 = 0.100e3 - t14 * t16 * t18 / 0.576e3;
  t24 = t14 / t3;
  t25 = t24 * r->x;
  t26 = pow(t25, 0.35e1);
  t28 = 0.1e1 + t8 / 0.24e2;
  t31 = t13 * t21 + 0.87153829697982569831e-4 * t26 * t28;
  t32 = t2 * t2;
  t33 = 0.1e1 / t32;
  t37 = 0.100e3 + t33 * t18 * t7 / 0.2304e4;
  t38 = 0.1e1 / t37;
  r->f = t31 * t38;

  if(r->order < 1) return;

  t39 = t10 * t10;
  t40 = 0.1e1 / t39;
  t41 = t40 * t1;
  t42 = t5 * r->x;
  t46 = t13 * t14;
  t47 = t7 * r->x;
  t51 = pow(t25, 0.25e1);
  t55 = t26 * t1;
  t58 = 0.66503703703703703704e-2 * t41 * t42 * t21 - t46 * t16 * t47 / 0.144e3 + 0.30503840394293899441e-3 * t51 * t28 * t24 + 0.72628191414985474859e-5 * t55 * t42;
  t60 = t37 * t37;
  t61 = 0.1e1 / t60;
  t62 = t31 * t61;
  t63 = t18 * r->x;
  t64 = t33 * t63;
  r->dfdx = t58 * t38 - t62 * t64 / 0.384e3;

  if(r->order < 2) return;

  t68 = 0.1e1 / t39 / t10;
  t69 = t68 * t14;
  t70 = t16 * t7;
  t77 = t40 * t33;
  t84 = pow(t25, 0.15e1);
  t88 = 0.1e1 / t2;
  t89 = t51 * t88;
  t94 = -0.13683889650967840268e-3 * t69 * t70 * t21 + 0.66503703703703703704e-2 * t41 * t5 * t21 - 0.27709876543209876543e-3 * t77 * t18 - 0.28446910087208630038e-5 * t40 * t18 - t46 * t70 / 0.48e2 + 0.45755760591440849162e-2 * t84 * t28 * t6 + 0.30503840394293899440e-3 * t89 * r->x + 0.72628191414985474859e-5 * t55 * t5;
  t96 = t58 * t61;
  t100 = 0.1e1 / t60 / t37;
  t101 = t31 * t100;
  t102 = t32 * t32;
  t103 = 0.1e1 / t102;
  t104 = t18 * t18;
  t106 = t103 * t104 * t7;
  t109 = t33 * t18;
  r->d2fdx2 = t94 * t38 - t96 * t64 / 0.192e3 + t101 * t106 / 0.73728e5 - 0.5e1 / 0.384e3 * t62 * t109;

  if(r->order < 3) return;

  t112 = t39 * t39;
  t118 = t16 * r->x;
  t142 = sqrt(t25);
  t153 = 0.25340536390681185681e-4 / t112 * t33 * t47 * t21 - 0.41051668952903520804e-3 * t69 * t118 * t21 + 0.57016206879032667783e-5 * t68 * t1 / t4 / t32 * t63 - 0.13854938271604938271e-2 * t77 * t47 + 0.57016206879032667784e-5 * t68 * t33 * t63 * t1 * t5 + 0.58532736804956028885e-7 * t68 * t63 * t6 - 0.19912837061046041026e-4 * t40 * t47 - t46 * t118 / 0.24e2 + 0.41180184532296764246e-1 * t142 * t28 * t88 + 0.38129800492867374302e-3 * t84 * t14 * t118 + 0.76259600985734748600e-3 * t84 * t88 * t25 + 0.45755760591440849160e-3 * t89;
  t163 = t60 * t60;
  r->d3fdx3 = t153 * t38 - t94 * t61 * t64 / 0.128e3 + t58 * t100 * t106 / 0.24576e5 - 0.5e1 / 0.128e3 * t96 * t109 - t31 / t163 / t102 / t32 * t104 * t18 * t47 / 0.9437184e7 + 0.5e1 / 0.24576e5 * t101 * t103 * t104 * r->x - 0.5e1 / 0.96e2 * t62 * t33 * t47;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_q2d_enhance
