

#include <stdlib.h>
#include "Relooper.h"

int main() {
  Debugging::On = 0;

  char *buffer = (char*)malloc(10*1024*1024);
  Relooper::SetOutputBuffer(buffer);

  Block *b0 = new Block("print('entry'); var label; var state; var decisions = [759, 1223, 618, 1805, 277, 512, 204, 1545, 606, 734, 585, 447, 1670, 1031, 665, 1728, 353, 634, 1033, 13, 658, 589, 474, 854, 405, 1111, 1640, 697, 1156, 1357, 317, 618, 990, 1401, 405, 564, 497, 829, 653, 1194, 25, 322, 1178, 198, 1565, 1419, 1608, 486, 368, 606, 813, 22, 148, 141, 261, 375, 472, 964, 1106, 694, 205, 771, 44, 675, 545, 1027, 1528, 240, 1289, 564, 792, 744, 366, 668, 823, 210, 428, 1009, 1662, 1317, 1183, 681, 14, 1334, 712, 506, 224, 695, 401, 1035, 384, 486, 1519, 122, 1186, 1487, 1819, 1702, 463, 1706, 660, 1642, 847, 991, 976, 940, 867, 46, 23, 1449, 56, 1711, 634, 404, 1558, 168, 710, 1581, 1302, 870, 997, 1295, 1739, 769, 1005, 291, 1638, 1771, 842, 659, 1695, 713, 935, 802, 1173, 1572, 850, 607, 996, 55, 1576, 321, 1815, 662, 1044, 1612, 1680, 1050, 844, 553, 278, 1447, 1662, 1094, 1797, 774, 1013, 1204, 907, 340, 1172, 1460, 869, 1264, 111, 1176, 484, 845, 258, 417, 1246, 1017, 745, 189, 333, 1658, 1395, 1764, 1786, 165, 404, 847, 1429, 1574, 403, 718, 1118, 1756, 94, 56, 1498, 1696, 1355, 840, 50, 82, 371, 1087, 875, 1337, 267, 958, 1209, 1167, 1025, 1684, 184, 962, 1496, 201, 127, 372, 1, 1005, 402, 1387, 213, 1143, 1271, 167, 10, 12, 1060, 1390, 1366, 893, 747, 1005, 481, 876, 227, 514, 589, 250, 273, 1188, 1052, 719, 219, 1006, 38, 120, 1454, 489, 672, 149, 534, 1081, 1721, 586, 330, 25, 356, 1743, 1607, 336, 981, 419, 1036, 1293, 1026, 1300, 1453, 792, 22, 45, 420, 409, 1027, 1437, 1421, 795, 136, 1276, 1610, 1593]; var index = 0; function check() { if (index == decisions.length) throw 'HALT'; return decisions[index++] }");
  Block *b1 = new Block("print(1); state = check();// ...........................................................................");
  Block *b2 = new Block("print(2); state = check();// .........");
  Block *b3 = new Block("print(3); state = check();// ..................................");
  Block *b4 = new Block("print(4); state = check();// ...........................................................................................................................");
  Block *b5 = new Block("print(5); state = check();// ..........................................................................................................................................");
  Block *b6 = new Block("print(6); state = check();// .........");
  Block *b7 = new Block("print(7); state = check();// .............................................................................................................................................................................................");
  Block *b8 = new Block("print(8); state = check();// ....................................................................................................................................................................................................................................................");
  Block *b9 = new Block("print(9); state = check();// ...................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b10 = new Block("print(10); state = check();// ...................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b11 = new Block("print(11); state = check();// ........................................................");
  Block *b12 = new Block("print(12); state = check();// ................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b13 = new Block("print(13); state = check();// ...................");
  Block *b14 = new Block("print(14); state = check();// .............................");
  Block *b15 = new Block("print(15); state = check();// ..................................................");
  Block *b16 = new Block("print(16); state = check();// ................................................................................................................................................................................................................................................................................................................................................................");
  Block *b17 = new Block("print(17); state = check();// ................................................................");
  Block *b18 = new Block("print(18); state = check();// ..............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b19 = new Block("print(19); state = check();// ......................................................................................................................................................................................................................");
  Block *b20 = new Block("print(20); state = check();// ..................................................................................................................................................................");
  Block *b21 = new Block("print(21); state = check();// ...........................");
  Block *b22 = new Block("print(22); state = check();// .........................................................................................................");
  Block *b23 = new Block("print(23); state = check();// .................................................................................................................................................................................................................");
  Block *b24 = new Block("print(24); state = check();// ...........................");
  Block *b25 = new Block("print(25); state = check();// ......................................................................................................................................................");
  Block *b26 = new Block("print(26); state = check();// .........................................................................................................................................................................................................................................................................");
  Block *b27 = new Block("print(27); state = check();// .............................................................................................................................................................................");
  Block *b28 = new Block("print(28); state = check();// ..............................................................................................................");
  Block *b29 = new Block("print(29); state = check();// ...............");
  Block *b30 = new Block("print(30); state = check();// .................................................................................................................................................................................................................");
  Block *b31 = new Block("print(31); state = check();// ..........................................................................................................................................................................................................");
  Block *b32 = new Block("print(32); state = check();// ......................................................................................................");
  Block *b33 = new Block("print(33); state = check();// ....");
  Block *b34 = new Block("print(34); state = check();// ..........................................................................................................................................");
  Block *b35 = new Block("print(35); state = check();// .................................");
  Block *b36 = new Block("print(36); state = check();// .........................");
  Block *b37 = new Block("print(37); state = check();// ................................................................................................................................");
  Block *b38 = new Block("print(38); state = check();// ............................................................................................................................................................................................................................................................................................................................................");
  Block *b39 = new Block("print(39); state = check();// ................");
  Block *b40 = new Block("print(40); state = check();// ................................................................................................................................................");
  Block *b41 = new Block("print(41); state = check();// ...................................................................................................................................");
  Block *b42 = new Block("print(42); state = check();// .....................................................");
  Block *b43 = new Block("print(43); state = check();// .........");
  Block *b44 = new Block("print(44); state = check();// .....................................................................................................................................................");
  Block *b45 = new Block("print(45); state = check();// ............................");
  Block *b46 = new Block("print(46); state = check();// .............................................................................");
  Block *b47 = new Block("print(47); state = check();// ....................................................................................................................................");
  Block *b48 = new Block("print(48); state = check();// ............");
  Block *b49 = new Block("print(49); state = check();// ............................................................................................................................................................................................................................................................................................");
  Block *b50 = new Block("print(50); state = check();// ........................................");
  Block *b51 = new Block("print(51); state = check();// .............................................................................................");
  Block *b52 = new Block("print(52); state = check();// ..............................................................................");
  Block *b53 = new Block("print(53); state = check();// ..............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b54 = new Block("print(54); state = check();// .....................................");
  Block *b55 = new Block("print(55); state = check();// ...........................................................................................................................................................................................................");
  Block *b56 = new Block("print(56); state = check();// ....................................................................................................................................................................................................................");
  Block *b57 = new Block("print(57); state = check();// ...........................................................................................................................................................................................................................................................................................................................");
  Block *b58 = new Block("print(58); state = check();// ......................................................................................");
  Block *b59 = new Block("print(59); state = check();// ...................................");
  Block *b60 = new Block("print(60); state = check();// ......................................................................................................................................................................................................................................");
  Block *b61 = new Block("print(61); state = check();// .........................................................................................................................................................");
  Block *b62 = new Block("print(62); state = check();// .......................................................................................");
  Block *b63 = new Block("print(63); state = check();// .....................................................................................................................................................................");
  Block *b64 = new Block("print(64); state = check();// .......................................................................................................................................................................................................................................................................");
  Block *b65 = new Block("print(65); state = check();// .........................................................");
  Block *b66 = new Block("print(66); state = check();// ...............................................................................................................");
  Block *b67 = new Block("print(67); state = check();// .....................................................................................................................................................................................................................");
  Block *b68 = new Block("print(68); state = check();// ......................................................................................................................................................................................................................................................................................................................");
  Block *b69 = new Block("print(69); state = check();// ......................................................................................................................................................");
  Block *b70 = new Block("print(70); state = check();// ..........................................................................................................................");
  Block *b71 = new Block("print(71); state = check();// ...........................................................................................................................................................................................................");
  Block *b72 = new Block("print(72); state = check();// ..........................................................................................................");
  Block *b73 = new Block("print(73); state = check();// .");
  Block *b74 = new Block("print(74); state = check();// ..............................................");
  Block *b75 = new Block("print(75); state = check();// .............................................");
  Block *b76 = new Block("print(76); state = check();// ..............................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b77 = new Block("print(77); state = check();// ...........................................................................................................................................................................................................................................................................................");
  Block *b78 = new Block("print(78); state = check();// ..........................................................................................");
  Block *b79 = new Block("print(79); state = check();// ...................................................................................................................................................................................................................................................");
  Block *b80 = new Block("print(80); state = check();// ....................................");
  Block *b81 = new Block("print(81); state = check();// ................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b82 = new Block("print(82); state = check();// ....................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b83 = new Block("print(83); state = check();// ........................................................................................");
  Block *b84 = new Block("print(84); state = check();// ...................");
  Block *b85 = new Block("print(85); state = check();// .........................................................................................................................................................................................................................................................................................................................................................");
  Block *b86 = new Block("print(86); state = check();// .................................................................................................................................................................................................................................................");
  Block *b87 = new Block("print(87); state = check();// ......");
  Block *b88 = new Block("print(88); state = check();// ....................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................");
  Block *b89 = new Block("print(89); state = check();// ......................................................................................................................................................................................................................................................................................................................................................");
  Block *b90 = new Block("print(90); state = check();// ...........................................................................................................................................................................................................................");
  Block *b91 = new Block("print(91); state = check();// ..............................................");
  b0->AddBranchTo(b30, NULL);
  b1->AddBranchTo(b66, NULL);
  b2->AddBranchTo(b51, NULL);
  b3->AddBranchTo(b57, NULL);
  b4->AddBranchTo(b31, NULL);
  b5->AddBranchTo(b21, NULL);
  b6->AddBranchTo(b88, NULL);
  b7->AddBranchTo(b75, "state % 2 == 0");
  b7->AddBranchTo(b89, NULL);
  b8->AddBranchTo(b47, "state % 2 == 0");
  b8->AddBranchTo(b19, NULL);
  b9->AddBranchTo(b66, NULL);
  b10->AddBranchTo(b52, NULL);
  b11->AddBranchTo(b40, NULL);
  b12->AddBranchTo(b87, NULL);
  b13->AddBranchTo(b72, "state % 3 == 0");
  b13->AddBranchTo(b6, "state % 3 == 1");
  b13->AddBranchTo(b55, NULL);
  b14->AddBranchTo(b2, "state % 2 == 0");
  b14->AddBranchTo(b52, NULL);
  b15->AddBranchTo(b11, NULL);
  b16->AddBranchTo(b57, NULL);
  b17->AddBranchTo(b1, "state % 2 == 0");
  b17->AddBranchTo(b24, NULL);
  b18->AddBranchTo(b67, NULL);
  b19->AddBranchTo(b56, NULL);
  b20->AddBranchTo(b34, NULL);
  b21->AddBranchTo(b25, NULL);
  b22->AddBranchTo(b72, NULL);
  b23->AddBranchTo(b64, NULL);
  b24->AddBranchTo(b36, NULL);
  b25->AddBranchTo(b88, NULL);
  b26->AddBranchTo(b56, NULL);
  b27->AddBranchTo(b3, NULL);
  b28->AddBranchTo(b75, NULL);
  b29->AddBranchTo(b8, NULL);
  b30->AddBranchTo(b58, "state % 3 == 0");
  b30->AddBranchTo(b66, "state % 3 == 1");
  b30->AddBranchTo(b6, NULL);
  b31->AddBranchTo(b60, NULL);
  b32->AddBranchTo(b83, NULL);
  b33->AddBranchTo(b60, NULL);
  b34->AddBranchTo(b73, NULL);
  b35->AddBranchTo(b7, NULL);
  b36->AddBranchTo(b60, "state % 2 == 0");
  b36->AddBranchTo(b16, NULL);
  b37->AddBranchTo(b82, NULL);
  b38->AddBranchTo(b45, NULL);
  b39->AddBranchTo(b72, "state % 3 == 0");
  b39->AddBranchTo(b73, "state % 3 == 1");
  b39->AddBranchTo(b31, NULL);
  b40->AddBranchTo(b89, NULL);
  b41->AddBranchTo(b64, "state % 2 == 0");
  b41->AddBranchTo(b90, NULL);
  b42->AddBranchTo(b12, NULL);
  b43->AddBranchTo(b32, NULL);
  b44->AddBranchTo(b28, NULL);
  b45->AddBranchTo(b63, "state % 2 == 0");
  b45->AddBranchTo(b47, NULL);
  b46->AddBranchTo(b70, "state % 2 == 0");
  b46->AddBranchTo(b42, NULL);
  b47->AddBranchTo(b28, NULL);
  b48->AddBranchTo(b20, "state % 2 == 0");
  b48->AddBranchTo(b91, NULL);
  b49->AddBranchTo(b6, NULL);
  b50->AddBranchTo(b29, NULL);
  b51->AddBranchTo(b36, NULL);
  b52->AddBranchTo(b61, "state % 2 == 0");
  b52->AddBranchTo(b2, NULL);
  b53->AddBranchTo(b75, "state % 2 == 0");
  b53->AddBranchTo(b46, NULL);
  b54->AddBranchTo(b30, NULL);
  b55->AddBranchTo(b59, NULL);
  b56->AddBranchTo(b34, NULL);
  b57->AddBranchTo(b39, NULL);
  b58->AddBranchTo(b30, NULL);
  b59->AddBranchTo(b47, NULL);
  b60->AddBranchTo(b10, NULL);
  b61->AddBranchTo(b88, NULL);
  b62->AddBranchTo(b36, NULL);
  b63->AddBranchTo(b54, NULL);
  b64->AddBranchTo(b79, NULL);
  b65->AddBranchTo(b65, NULL);
  b66->AddBranchTo(b6, NULL);
  b67->AddBranchTo(b78, NULL);
  b68->AddBranchTo(b51, NULL);
  b69->AddBranchTo(b32, NULL);
  b70->AddBranchTo(b47, NULL);
  b71->AddBranchTo(b38, NULL);
  b72->AddBranchTo(b91, "state % 2 == 0");
  b72->AddBranchTo(b80, NULL);
  b73->AddBranchTo(b62, "state % 3 == 0");
  b73->AddBranchTo(b31, "state % 3 == 1");
  b73->AddBranchTo(b43, NULL);
  b74->AddBranchTo(b77, NULL);
  b75->AddBranchTo(b7, NULL);
  b76->AddBranchTo(b22, NULL);
  b77->AddBranchTo(b76, NULL);
  b78->AddBranchTo(b14, "state % 2 == 0");
  b78->AddBranchTo(b62, NULL);
  b79->AddBranchTo(b81, NULL);
  b80->AddBranchTo(b51, "state % 2 == 0");
  b80->AddBranchTo(b50, NULL);
  b81->AddBranchTo(b40, NULL);
  b82->AddBranchTo(b60, "state % 2 == 0");
  b82->AddBranchTo(b43, NULL);
  b83->AddBranchTo(b77, NULL);
  b84->AddBranchTo(b60, "state % 2 == 0");
  b84->AddBranchTo(b77, NULL);
  b85->AddBranchTo(b42, NULL);
  b86->AddBranchTo(b85, "state % 2 == 0");
  b86->AddBranchTo(b88, NULL);
  b87->AddBranchTo(b88, NULL);
  b88->AddBranchTo(b70, NULL);
  b89->AddBranchTo(b68, NULL);
  b90->AddBranchTo(b33, NULL);
  b91->AddBranchTo(b33, NULL);

  Relooper r;
  r.AddBlock(b0);
  r.AddBlock(b1);
  r.AddBlock(b2);
  r.AddBlock(b3);
  r.AddBlock(b4);
  r.AddBlock(b5);
  r.AddBlock(b6);
  r.AddBlock(b7);
  r.AddBlock(b8);
  r.AddBlock(b9);
  r.AddBlock(b10);
  r.AddBlock(b11);
  r.AddBlock(b12);
  r.AddBlock(b13);
  r.AddBlock(b14);
  r.AddBlock(b15);
  r.AddBlock(b16);
  r.AddBlock(b17);
  r.AddBlock(b18);
  r.AddBlock(b19);
  r.AddBlock(b20);
  r.AddBlock(b21);
  r.AddBlock(b22);
  r.AddBlock(b23);
  r.AddBlock(b24);
  r.AddBlock(b25);
  r.AddBlock(b26);
  r.AddBlock(b27);
  r.AddBlock(b28);
  r.AddBlock(b29);
  r.AddBlock(b30);
  r.AddBlock(b31);
  r.AddBlock(b32);
  r.AddBlock(b33);
  r.AddBlock(b34);
  r.AddBlock(b35);
  r.AddBlock(b36);
  r.AddBlock(b37);
  r.AddBlock(b38);
  r.AddBlock(b39);
  r.AddBlock(b40);
  r.AddBlock(b41);
  r.AddBlock(b42);
  r.AddBlock(b43);
  r.AddBlock(b44);
  r.AddBlock(b45);
  r.AddBlock(b46);
  r.AddBlock(b47);
  r.AddBlock(b48);
  r.AddBlock(b49);
  r.AddBlock(b50);
  r.AddBlock(b51);
  r.AddBlock(b52);
  r.AddBlock(b53);
  r.AddBlock(b54);
  r.AddBlock(b55);
  r.AddBlock(b56);
  r.AddBlock(b57);
  r.AddBlock(b58);
  r.AddBlock(b59);
  r.AddBlock(b60);
  r.AddBlock(b61);
  r.AddBlock(b62);
  r.AddBlock(b63);
  r.AddBlock(b64);
  r.AddBlock(b65);
  r.AddBlock(b66);
  r.AddBlock(b67);
  r.AddBlock(b68);
  r.AddBlock(b69);
  r.AddBlock(b70);
  r.AddBlock(b71);
  r.AddBlock(b72);
  r.AddBlock(b73);
  r.AddBlock(b74);
  r.AddBlock(b75);
  r.AddBlock(b76);
  r.AddBlock(b77);
  r.AddBlock(b78);
  r.AddBlock(b79);
  r.AddBlock(b80);
  r.AddBlock(b81);
  r.AddBlock(b82);
  r.AddBlock(b83);
  r.AddBlock(b84);
  r.AddBlock(b85);
  r.AddBlock(b86);
  r.AddBlock(b87);
  r.AddBlock(b88);
  r.AddBlock(b89);
  r.AddBlock(b90);
  r.AddBlock(b91);

  r.Calculate(b0);
  printf("\n\n");
  r.Render();

  puts(buffer);

  return 1;
}
