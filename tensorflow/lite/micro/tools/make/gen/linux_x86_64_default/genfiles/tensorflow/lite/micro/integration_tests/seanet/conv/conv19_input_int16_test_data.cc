#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv19_input_int16_test_data.h"

const unsigned int g_conv19_input_int16_test_data_size = 5184;alignas(16) const int16_t g_conv19_input_int16_test_data[] = {-6695,13279,-18729,22288,17378,29018,8486,-32121,-12439,29685,-31592,-16846,29787,16218,-15822,-12173,4687,18451,31230,2206,25997,2366,-989,-19354,-21801,-12035,29901,-32286,-29377,29906,-31155,20381,15719,32088,26299,-4507,-11467,-12122,31196,-5447,7021,-25046,-5518,21311,28347,-27236,13806,-28030,-31723,-24372,-24078,4151,-9173,13444,14099,-9094,3582,-10994,3316,5430,31140,-28947,-16449,13884,-66,8282,-23730,-28241,-7798,9712,4318,6917,16785,15384,-20682,6454,-6529,-32028,13671,-8584,5909,-6097,3731,19672,29527,25540,-4193,16178,-25636,13065,4787,6038,15585,9296,28902,16861,-1593,-25629,17146,-4546,-27470,28183,-19652,22615,11940,23079,26788,-27430,-19559,25803,-2954,-30789,-7390,13649,13807,-23431,-9332,24342,-3238,29130,-7344,-12649,6942,-31789,4300,4067,8114,20235,13416,29899,5267,-13710,4782,19121,-30616,-26048,-3801,-32157,30369,1335,21198,17143,29982,9718,-30218,15389,5780,-18986,-8496,21650,27728,-28765,-28717,-12598,3173,-16872,17681,-27055,-23345,-12139,24613,-4198,-14556,-21398,22258,28652,-19810,19335,-26838,24689,-7012,24864,-24208,-18168,24405,-828,-9378,31544,15064,-2479,-5832,32415,-9095,-28352,29051,20048,9165,4960,32010,-3266,17174,3218,-25819,5326,2739,-4611,17777,21849,-4084,-15949,30674,-25183,-28813,-14156,22564,2989,9370,-4505,15733,-18778,8300,-1296,30798,-17706,2050,11197,-6548,-18420,-6448,-14698,-1573,-30262,-21999,26968,1430,-29897,-18838,-22065,-14419,22883,7959,-2343,31163,-13915,-30887,-13801,-393,4935,23114,24305,10315,5642,-4035,-14424,22445,-30920,-6336,27234,30254,-29546,-18042,-9749,-17361,-7498,26731,-1378,32062,27681,7460,23242,-1054,-3864,17567,-11506,-12724,13952,21932,23661,-13266,-18848,-16794,5206,-13797,-27298,-19073,2057,-30514,-442,-23597,9349,2730,11748,-16934,6521,-25444,30702,-32312,4091,-16428,8290,-3177,-14388,15036,-18636,17945,12462,15271,-9082,18569,6611,13805,9397,24814,-17722,-18887,8437,29655,-30226,8995,24063,-20718,-14747,18433,-604,-30887,27405,-18839,-32144,1761,13093,6023,-32635,24813,27982,23948,18383,22888,-26454,-18811,-26392,26987,-13384,-5056,30154,-7905,10153,-1070,23368,8932,13273,13754,-4740,-1211,-8979,13307,11023,27202,6,-24922,22193,-500,28586,10466,28062,23117,-19951,-26439,-30907,-24329,8371,-3813,8264,-2232,-8992,19063,21596,19556,29961,31648,30203,29010,-15537,24553,18788,-13566,29519,-28538,-31304,23564,29926,-7378,4779,21410,29497,-16447,2261,8031,30986,-9151,8743,-25393,22021,-4672,-506,29361,29063,18512,-27036,16584,14501,-7823,-12252,21231,-540,-6919,-29906,27118,-24679,22058,17623,16307,27609,-22563,-25298,-986,31537,-13077,16982,11009,23630,-22421,-8260,-22785,-4072,-9922,2082,228,17138,7901,-16009,6437,12732,16675,-4175,31494,-14757,-29159,-29101,-20500,18958,-13051,-30678,-22179,-4743,-8174,23601,8632,1605,21347,18111,-31241,-12464,12346,28924,12210,14287,-18057,-17821,13909,-26749,-22323,1337,-11624,19392,6389,-67,-6260,3731,19657,-13502,3632,-11363,2088,-7732,11051,24180,-25766,32735,-15771,4083,-12335,-9677,-17705,45,-16427,-15625,-26227,10674,-25613,31655,12213,-11132,-28091,29304,-10575,-27114,8562,-24251,28451,-12868,-6290,8562,-27322,-24170,-21998,19504,-30312,-4513,-24980,24302,8731,-26558,10056,-11221,-6109,19525,-29473,28311,-26801,21018,5704,20161,-20673,14224,-26563,27934,22356,24835,30924,3840,15865,-24282,15383,10108,22073,-4461,-10462,-14629,13653,21396,27784,11667,30030,-30134,11941,-25378,-16674,-13702,4342,-20068,26658,-13385,26163,-441,32355,-14941,11885,32386,1812,19083,4488,-12239,16741,-19860,13277,-17278,4069,3118,25679,-12487,-14203,-23533,-5417,15220,25994,-4951,-13433,29371,30595,17103,-14567,2807,17430,25142,13789,27875,-26419,-930,17863,-11106,26119,16175,-17371,-24973,-18560,11096,21809,-19788,14879,-27050,-20893,-27822,-20767,-15017,-26160,15715,26201,3848,12821,30989,30069,21469,-12685,-13018,16198,-1572,-28207,4290,-31145,3981,-21307,-29861,19974,-19926,-23665,-5600,30017,10929,2838,-17247,-19655,8174,-2951,-30729,21775,-30853,-14577,29014,-1009,-11682,-23467,12418,21561,-11814,28662,9639,-32523,-25234,-560,-6227,6522,16499,-27655,20405,-26270,-3199,-32187,7299,-2252,-5486,586,26062,-28453,-13903,-12043,-23506,23163,6242,30358,-11654,-14782,-1595,-18736,-12837,-31797,-18561,-29241,-18926,5384,-30313,21401,-11346,2377,18036,-31737,-20273,25595,-14296,26443,9866,895,-12107,-28158,-8159,-23639,-4289,-28204,12024,-357,24003,14500,-28968,23103,-23354,23637,-5211,-19896,21771,-3051,-5780,-10703,18142,23167,11241,-10166,-14557,14420,7863,27165,9132,-7283,9857,-8450,-13979,-2710,414,28293,-789,7055,26105,-24368,18794,-16584,-4144,3879,-1101,-10147,27322,20551,-8462,8012,535,-14397,12530,-11252,18606,-21122,-19043,23825,-32136,-17875,24436,-7460,7533,-19817,-15344,8848,-3803,-11813,16159,-20285,1023,-10658,23758,27632,-12323,7114,-12689,16488,24398,26151,-13548,-29418,23793,21927,2037,-32319,22099,20140,-14890,-32389,10149,22629,-29923,8216,7886,16839,-14602,-5536,-12132,-26013,-4369,-11032,9392,9535,-19505,22015,-21370,-11543,20395,20358,-8367,-758,-11403,-27188,-5160,-7055,593,20145,24635,-11732,-26038,-19793,-23767,-3208,14787,-24739,-24489,18506,-17300,5737,-13890,15575,4744,-32745,31699,11915,6729,-24772,-23893,-4037,14487,-12233,2047,17789,24733,-24498,6387,17422,7312,-21455,1084,22418,-6943,7321,-14177,-4530,-31373,-21370,-27936,-21418,22574,-6283,1583,4490,-11166,-12012,-29530,-19464,29556,-7993,-8870,10284,12200,-24953,-2370,-11361,-25215,-20189,-21271,4374,-16507,19780,14933,-6683,25172,-7624,-24039,-2275,10299,16074,18985,12637,-22370,-3220,-224,-15808,29722,29171,10221,-17579,-11355,-11991,8168,-28451,-20097,31062,13469,1579,32551,15579,-12794,28194,-24068,-11142,32056,-26113,-11738,-8420,3109,-1948,9150,-11188,8506,20971,-18928,29053,12946,-31845,20177,13120,15568,32267,-423,-13307,-9306,-856,-23078,-4951,-16575,17259,-16689,6291,23879,32001,-12559,-13607,30038,12270,29933,4598,-19495,-17932,10517,-9771,16328,18939,-20250,3606,2455,7532,-28682,-32421,19319,-4627,23506,-6990,-23585,-27700,-9903,23406,-8648,-16758,-4875,16601,-14460,-29631,7091,-31217,20011,13470,-15034,24405,-1112,10884,-1783,29241,3200,1153,-16506,21526,-17332,6518,26930,10980,-1539,14292,14286,-21165,17615,12911,-28879,-3015,-8798,4846,24807,-14673,-9197,-20027,-18682,-27674,-16187,2363,-29616,-13290,-21408,-4740,11813,-15360,-6911,-32004,13409,-30970,-748,-22033,18805,-13081,-26741,20664,15490,-4524,6948,-2170,10415,-24336,-6327,-11675,29823,-20792,24589,11928,32588,3291,32498,1825,-4024,-1507,-28035,30603,12916,-21945,-2825,29874,5238,25231,2715,32008,2874,-22968,-26357,4429,2161,16873,-14119,27979,12657,-8266,-4976,6987,12292,31927,-19308,-15085,25139,-20020,-11920,-29129,9366,12711,7449,-20316,-10877,-12840,3126,-30102,32171,-16815,5914,-31409,-12012,-23399,-7931,10033,-3700,-15024,14646,1157,2225,-21602,-30094,-31655,-14095,-27564,-18158,-14565,6024,12464,23910,-10731,-3018,31306,-16952,10034,32080,-27786,-29110,-22079,32531,-13877,28098,-26951,-21956,-11963,-9884,10723,31975,9815,-65,16402,16326,8877,15658,22717,9192,-17986,-6387,29803,-31448,16364,25376,-15209,24900,28784,23884,1481,-25960,-20077,-23960,-10830,13427,22185,-24744,-24745,17517,26464,-31708,-34,4224,-26970,29391,31841,30663,20240,-5847,-16238,22134,-20900,31553,12043,31393,8960,-21319,2699,9277,-30669,7106,-7352,8101,-10940,-1610,-24893,26451,8909,3729,-8074,-21599,15262,14378,-28399,24473,9629,2640,-10583,-295,26374,-27254,24860,11868,-14325,-32753,-25128,640,29949,25734,2887,9550,-31241,27014,-29170,25120,23609,16450,-30129,22746,17252,18284,22636,23824,-29967,9776,-20184,-7369,18469,13708,-29116,-2705,6620,-29908,-25973,-21084,-26360,28715,7125,-10168,12620,8304,17300,-17788,-26954,-8795,24674,31890,28723,591,12637,-18343,24450,-14544,-7573,460,-11562,13660,8731,14978,3914,9307,5872,-26484,-26387,-31612,-25471,-26829,28104,-2271,-27783,-8314,26699,-11908,-32123,1254,-31118,21798,31942,32597,15002,-29948,20983,14057,16816,30643,-2026,-2676,-3291,-10081,6082,11271,13057,-20063,-2199,4939,-25016,257,-12541,30829,31944,-16449,26973,-5698,5765,-3550,-29870,-18630,30337,-3536,-23639,1041,-23408,21527,28056,-4979,-31893,-2817,2486,22399,25571,20908,-10672,-2911,8726,3696,-26079,-20701,-30059,10413,8247,-5038,7536,21696,4916,24442,-27727,31948,-31036,30970,-25144,-4822,475,20786,-7892,12091,1391,23343,2381,-10247,-13193,-1824,9727,-15688,4147,31122,-11816,-129,16783,-1468,-26301,7189,15493,16436,31911,-21564,-18646,-26571,-3228,-18917,-25107,31881,24860,-19694,27454,27335,32267,17684,-6408,-3548,-32273,31681,18505,-14908,1086,25012,12636,13657,-25787,20589,-27953,-1445,510,-30063,14026,29342,11391,24147,-8983,-230,4597,-5558,-13233,14800,-14440,10871,26537,-908,1988,-32124,19447,-1993,6399,-15798,10870,32160,26649,21418,564,-6095,18811,2395,21267,-7177,-3256,-28872,8109,16788,-104,-13608,-31958,-10425,-21873,-11958,-13092,-12591,13001,20607,11845,-7932,28502,-2600,-332,-14830,-10476,19260,-388,-30098,7592,16395,21047,8770,21056,-18545,5189,26965,-18293,-4823,21683,-7166,-22835,32120,-13459,9889,-24216,-26779,-15929,9737,-14566,-15272,10133,-3692,-31068,19113,29352,-25272,13373,27642,-1116,11340,15323,-25040,-13307,1867,-21709,-23160,-17473,-15749,4804,-30364,-6271,-65,-1373,27996,12604,-23075,-16376,-26794,-6491,2002,30848,24548,-12816,30186,25312,-3103,17535,28950,-6930,16756,21700,13003,22066,24747,-32630,7343,-15629,-30613,16712,-16538,-5436,29276,9553,17801,11433,-15805,25270,28270,8292,31728,15163,-24631,25529,26713,-473,13380,-30623,-19696,20279,7911,2768,-9289,16240,-31977,-18907,27323,-6741,-8900,-14988,-2381,-3937,23173,-4782,11756,5743,-16625,-18600,29831,-7943,30946,22650,4231,22566,29018,27065,-3173,-16594,23319,-14242,-13760,25246,-2299,-19549,20736,-32646,3240,16688,13795,5594,20552,-27409,-32237,-31300,22248,-11384,-16112,3654,9504,-30284,-20226,-870,18092,-25118,-28232,199,-14421,8583,25428,23233,28054,5436,10702,13293,27633,-23234,-18503,-14357,11486,-22679,-22374,18820,-7459,14599,-6714,28467,-30878,382,1680,32186,-29585,13709,18407,-2767,26520,7647,-14715,-21783,-2219,-20697,-16804,-13023,20353,18282,-31587,20266,14817,-10872,12065,20519,31437,-26898,12429,30,-9230,-30907,-10095,10271,-4896,23167,-4034,28921,9076,-1040,2567,-24918,926,-20505,22545,-7387,-2521,-20588,8791,9408,-16768,-7731,-10388,-25090,-2107,-26981,-30399,-6057,-14140,7000,-11505,-26469,-21863,1737,5495,-24079,1228,-6765,-25602,4636,-22943,32412,26586,-25382,2685,12414,25574,-29522,-4459,16349,24830,14437,-23700,26522,15032,22738,-1489,1440,13894,3009,-2919,-31963,-26947,-18596,-9099,16251,-11042,-16085,11797,7222,19826,-30601,-3967,-2425,-9005,-16638,18115,13386,26231,20314,14408,26653,-14367,-1622,-30002,3239,-27585,7827,20150,17249,-18877,19921,-23138,-7271,9499,11673,-406,-6043,13142,7854,2313,-30618,-19666,-14325,25432,-28729,-2254,32130,-10722,-25634,-13776,28977,-30995,9186,20776,19084,9829,865,32328,4291,-14497,-14082,12296,9956,11487,-864,2931,-8028,32623,28165,678,-32515,-1199,14164,-2859,-16312,-25601,-9170,-20082,9716,11993,5299,26870,25951,-32629,31133,27347,22711,-18456,20787,-22174,-22073,-10620,23756,-397,27286,6395,-7060,14694,18181,-12250,-12751,-13760,-14602,-9570,11198,-28891,17294,-13536,28228,-23853,-6650,-6813,-17074,6671,17715,11020,-4615,31538,-21432,4229,17632,8295,-1025,-32445,8504,-765,-14742,19088,11220,17557,20220,-26436,-24242,15514,3251,23030,17820,3357,24099,10943,11423,-17399,-8014,30571,21779,8269,-16750,259,25610,19214,-14324,-13347,-21282,-10437,-12223,21034,-29890,-6630,15950,1730,25030,-12612,-22791,-10429,5325,8056,19558,-9764,-18980,13975,-11047,-23935,28221,-7123,16676,6510,13477,18424,-28255,-6084,3623,-18612,-16290,-28927,-16426,-29435,-5221,2890,13351,25355,-17534,-13950,-8904,-6748,-30362,-27071,2558,16496,12711,5597,6931,16718,-28212,9089,21635,-15597,-10276,32292,-13196,-19504,10482,4527,-11860,-28282,-26048,-32470,-19020,-17178,12030,-3682,-26847,297,-10201,30041,-9021,27140,-22668,-18456,-28872,-22401,-3571,21540,24003,18555,26056,2246,-13893,-27498,6261,24391,32204,26117,24835,10164,1156,-7715,29479,-3554,22721,-32028,3069,-11999,-24838,31273,18200,29399,-29618,-24315,-11291,-1666,-30197,-17202,24567,11235,20700,20962,-1617,-122,1064,-7192,-5551,-16090,-3954,1010,30924,-30719,-11515,-29078,-17054,16051,-30438,-5888,-126,25224,-20420,-29325,-23669,32127,20387,-17502,1026,28006,-18479,-16122,-30860,6426,1491,-2802,-25444,-1371,-27775,30211,13066,27365,23675,4938,-19194,-15904,24844,-15887,20196,-27689,2612,27958,25118,-23408,-4150,-23144,-27664,-6747,14803,-16917,-28819,-32750,-27620,-13898,-18401,22543,-19211,-30187,3574,-20447,-32484,-21511,29453,-340,12855,14933,6934,14674,6584,-15008,18162,-31608,-31243,21683,12391,8025,-17955,12885,22146,6333,17016,28442,-9934,11317,-1277,-13476,26231,20036,-16548,-17136,25586,-23964,2089,-23836,-10095,-17584,27991,-12121,-31652,4456,1065,6635,14143,22193,-32571,71,-10901,22882,-21435,4090,-39,30870,25548,24172,-13881,-19946,8737,19918,21469,2002,28691,-6571,-6593,30395,7494,-8752,-3366,11248,27852,14801,11721,-1633,30714,27385,-19915,18726,-15447,-27217,-13831,-27334,22576,-10651,6986,31021,11048,-15629,2041,26575,10427,24542,21819,-13104,15947,-4316,22385,-7294,-22073,15326,-28584,-28841,30571,-1699,-7781,30905,24421,11686,1597,-18609,19223,-24157,3233,-12219,-24993,-10707,-16851,-5004,-31179,27338,-14715,-11951,18943,4675,-24727,-5304,511,-26820,-2175,-20828,-32141,15054,-16606,30318,14549,3010,31560,-31034,-31796,6124,-3466,-11865,10615,-221,-31448,-13151,22515,-2825,20172,-11912,20605,-2544,32523,5683,11260,150,206,-24649,13731,-32236,-18572,-30800,-13719,-19858,-7520,29484,-11373,10420,7028,-24580,-24335,-19024,-21146,23453,27198,-23722,-14316,21781,8537,-23280,-9808,-3070,-20296,13479,-20055,-25093,-3121,-7357,-21929,10605,-15466,-9489,28390,-27816,-11303,-27972,-1223,-21655,2075,-7414,-6509,-4345,16078,-18277,-4278,-7931,-29093,3965,-24272,28233,25591,11933,22782,-24249,1471,-24305,-14907,-15722,-10895,-22749,28029,24484,-29951,-7526,3544,17841,13912,12553,14264,-1355,-3935,-7708,-5257,27429,28341,16196,-25754,11530,24175,-22384,-8916,19426,-22964,-5930,-16589,-10207,-4990,-19580,-1677,19761,-6421,1003,-13058,-30597,-19783,-15011,496,-12044,1057,-26072,18191,-31075,-26688,-8846,23781,22466,-14360,18990,31727,-11667,27347,-32386,17033,-23180,-12936,-22653,7560,20598,28840,26158,-1485,-30796,-27472,-18409,-24344,-31737,-31930,27945,-4439,-11543,19452,32429,-7497,-20453,-25167,-9466,-26580,28841,32436,15745,-8886,15819,24246,-16799,-31784,-2631,-25879,-14901,15575,10417,3828,-4235,27694,16407,17986,21202,-27131,-26281,13582,-20952,-8871,25576,12197,-9947,-1211,-1054,14543,21659,-23289,-30124,-17763,-25105,-12703,32332,30490,-28128,9370,-14836,22115,-5396,10879,3286,-8776,-15567,13935,18272,-13222,-26520,457,14277,-5134,-23939,-14900,25459,13598,22031,25535,-25662,-30345,-12144,-4069,24400,-11293,-14875,-15953,12732,3980,-24591,6473,-15596,-5810,-31965,-8875,-5055,25099,14086,-5086,9542,-16181,32440,411,28389,-30244,-892,11755,-31145,-4702,-7437,20778,30018,-26176,-6122,8331,28643,21371,-29236,-28788,-14165,-29224,-31363,-17661,-26491,14914,24844,26270,-17121,24401,-9431,-28676,-669,-24606,-9021,8206,-23074,16536,-5862,-12836,-5116,10229,-15157,8268,11466,12472,20280,-9531,-17857,-9729,32539,-3485,-30882,29610,1924,-3963,141,-16718,-1542,-28249,-6748,25998,-9921,-14460,-30673,32167,-4665,2144,-9718,3864,5415,17066,-9365,-16667,8040,-18918,-7413,15477,22852,28958,16206,-26706,-15991,-6452,26874,29832,28571,-22005,-31724,-26322,15085,-15664,-18905,-23691,11329,-23299,2890,7913,19383,4288,-11677,3476,-30409,15209,10996,-31350,3492,-13066,-24687,5279,-29526,-18805,-10180,27371,26526,9607,20563,-30975,29856,3890,-13286,-32679,-7707,26401,22480,-7914,-6348,9355,-19696,-196,-17840,13700,11897,-13779,6827,24977,22375,21644,-12559,10813,8183,14613,-14836,16716,-797,20358,-295,-18515,25215,-6958,901,-10770,-30207,-32340,19380,438,-6170,-9670,27107,20717,29701,-16014,21276,24209,-18865,-5198,22147,25419,24732,1367,9909,-8351,-6737,-23998,-7778,26865,-6876,-17852,23307,-761,-22742,-25052,4136,-31150,17180,13078,126,-28725,23636,16517,27515,-721,5574,-24011,13353,-3734,-10212,-29311,25681,-1889,14411,-21116,-20332,-20427,20435,23919,1921,-20898,-32311,-13019,20299,-7456,-4436,20725,11730,-19968,27844,-15457,-27533,32437,2959,30748,615,-28032,-5754,12066,-13740,-293,6204,11842,-23857,-20941,17277,-32538,-5268,-16373,-4003,-16704,-10732,-1751,30017,28697,10630,14611,15448,29522,13236,6158,-2383,-23418,16416,-13461,-17982,-4501,-26180,23648,30601,-25177,-16219,20840,-32307,-19653,2083,-16747,10868,-171,30389,-7366,28901,-29812,-10206,7242,30558,-16431,-12094,-28720,27969,20546,-28921,22939,-17031,-13302,-3383,9787,22442,-6241,-22853,4431,11551,-20393,20419,-11214,-7749,4293,27606,-29940,-271,-9851,3277,-4526,23187,-26181,438,-4225,-22357,5621,-2975,20771,2545,-11280,-28467,1945,-14989,29893,20686,5919,8959,12945,31160,31868,16529,-16860,32281,31567,-29268,-29655,23458,-26511,-29080,-13552,29040,8894,3804,27969,15761,-2938,25187,26381,25984,24767,-4932,-183,20000,14188,18303,-21134,3831,26889,5890,-31258,-10613,-22079,-32623,23755,-9893,29401,4172,-12632,-25701,-23835,-745,27381,-4596,7581,-4528,8820,-9969,-8330,-18214,21277,-19461,-23477,4263,-27991,22662,-30863,22509,-17409,-18352,6960,-6327,21291,-7527,3960,-3524,-21491,-11866,8223,31115,-7425,-5109,-15669,-23289,-24105,-17764,-1656,-18555,17929,-7314,18860,10650,-9978,22300,-16108,-27313,7635,16569,-15082,3847,-27811,7196,-30804,-14229,1971,-14024,11342,-25430,-10785,-16004,17626,-20473,15252,14481,27414,22632,24133,25237,-18163,24218,-16401,22912,3908,-8253,-26927,31767,26041,-28909,-25716,9993,20529,19215,2271,19683,21580,28015,-22256,4886,22490,6842,-30790,14634,-10225,6533,7449,15851,-1400,-16775,-6542,27337,-28156,-22466,8432,-17049,-2562,29409,3544,-4305,-18861,19174,25069,-20488,5783,29657,-29072,-11435,-9911,-19833,-7750,15780,8264,-24637,25933,29470,10627,-894,-4466,-4894,16891,-6330,7805,-6774,31517,751,17956,-25924,-997,9328,-6136,28223,-8985,21836,24812,-10876,-29884,2628,-290,10087,11355,8530,-21725,-21941,819,-9004,-24063,-5958,-9073,-13626,-25440,659,-25861,-14011,31143,-3656,26327,-23529,22085,28902,-31747,1743,-10819,-17688,-2663,-29256,29936,8290,5631,31883,11390,2303,15080,-29654,5281,-194,-15495,17193,22813,-21938,-22444,15378,-4609,-31288,15545,26549,26704,-13725,-30528,-12085,-28,-4233,9602,6991,25966,3047,-30808,29479,17623,10263,-20354,-7895,-18958,31694,-9506,-27579,32512,-5161,-21504,27106,-31246,16711,-6065,-4598,-1043,12054,8711,15502,23981,-9259,21375,27234,-29031,-30639,-21931,-4126,-19982,9184,29748,-1938,2986,-27530,-21026,8039,15148,6366,21797,3235,-1567,9958,-12722,19812,22370,29891,-10320,-16596,794,-11120,8937,-4659,-30157,-17855,18931,20924,15009,28139,-30413,12404,-6094,22394,29389,-23726,-16788,-2886,-8093,-20463,-8320,16706,27295,-18805,-18308,6590,2048,29796,30207,-28672,-22139,26774,-11530,20015,23862,-2620,16350,19058,-26910,11874,-4219,19395,12661,-31457,3223,19595,-22726,17956,21855,-17005,-5124,-29189,10851,-18918,30000,-21759,14405,-11693,13302,31779,-7306,-26056,-16633,-32579,-19361,19143,-31892,10581,11300,-30445,-20795,23251,645,7682,-15995,627,20114,3277,-29536,10384,-8139,-25692,-18937,-3672,-5395,-4231,-2667,30813,-4778,-7040,-19011,-3608,29311,11669,18978,-13975,-12851,30927,10342,-12338,25985,27543,-27914,22179,-3431,-21735,-12415,17934,-14942,-20833,-5038,31824,-18037,-6418,-32498,595,-10643,-17806,-30799,-9138,10267,-15951,717,3380,-2003,-10672,-10306,28862,12615,-20925,-26878,-14276,-8673,-13146,13301,-6634,-23366,7487,-29763,-21833,14638,25683,-28469,21614,-29981,19176,13469,-22222,-22031,-11943,-6075,-3937,-9005,11875,-18451,-3808,25437,31228,-19177,-4838,-18671,-14607,-29054,-19523,16191,12803,-29079,18974,-11616,-11535,14209,-13872,6159,-25767,16108,-19499,-29931,-15517,-10765,-24936,-7145,11332,-19882,-24476,-31735,-2375,568,-9077,-568,10522,-7640,9467,-32608,-20597,-15516,6502,-24710,6102,822,10785,20225,31516,-26204,-16301,32702,-12185,26922,-32573,-19021,-17010,17613,-16547,-13875,7728,28718,-14808,18211,-20937,8470,23024,32697,1288,101,3712,22237,28900,14057,26421,-25525,-22337,-28122,-196,29557,2597,-462,719,-16129,607,-21230,-30250,-32304,-18117,15941,-2450,-23927,18988,8566,-21669,-20156,8604,19864,-12340,-15314,-25732,-32504,-12490,17036,-30856,-669,-15507,10190,17178,12533,-9354,-32439,-29514,-11343,-3680,32409,19021,7486,-7563,27096,3828,-16813,-7766,-23236,18780,-17151,-1981,7191,32207,-22855,-22539,24999,-2292,-19969,154,-29227,4725,-10647,-4284,-6523,-30172,20769,-9008,13656,-28141,9369,-2368,31178,4386,-31617,-17679,-30536,-3428,28291,20020,1144,-24425,1552,20387,19842,-10486,20469,-3903,-25969,-1842,-29491,-30638,13590,14783,8759,18576,2360,-6111,8363,-7930,2759,24527,-29108,31685,32036,28401,12132,9500,7988,21381,16788,29215,-24288,15477,4593,-22531,28480,-7103,-2581,28971,30300,16979,28990,24094,-318,-4076,15597,-1970,-14683,-10925,474,-28414,-27179,10929,8635,32210,3283,-22276,11163,-23739,-32060,-10644,8607,-22071,29218,-17391,25938,6372,19996,-19840,17173,-8790,-25685,25717,18839,-19580,3089,-3074,-19866,-13564,16834,-1250,22357,-21747,18872,14144,29601,24264,-13978,-10166,8556,-12501,-31084,-17641,17291,-26936,10867,-18870,-28352,-15970,-31455,-11396,28737,32404,-20373,-14607,17929,17340,28187,-13927,-17473,-14444,-2291,-13098,-27267,-12245,28207,13882,-528,16829,17256,18713,3358,30141,17948,30054,-2157,-161,-25045,15444,8563,16404,-5475,28128,10068,32039,7776,28811,10696,26904,-30736,-28674,3163,-16184,-6754,-23945,21942,-367,4857,-12273,-23716,-13557,19434,25065,3564,15089,-1255,15037,-12246,8861,26794,6583,15958,7082,-19225,10434,-19911,10994,14370,-8874,-10106,-26086,-2775,19883,16422,13429,3478,16371,12675,-26772,30586,7340,-7770,-32642,-28431,29286,31814,14972,-25114,27102,-8966,-11799,24436,18026,-31520,-29298,20372,16164,-29321,14187,1739,19465,-3963,20620,-15584,-31545,-25354,17004,-24978,32108,-25776,25539,18779,4996,-24562,-6821,14015,-28206,-21536,-16471,4270,20561,1579,25151,-29305,27172,-869,-10151,-2105,-10475,-31822,8010,11,-29450,-23269,-7032,-490,-4795,28020,15153,7738,8269,28376,-14499,-18590,-557,15924,10189,-1830,32581,-18704,27591,30384,10661,13359,27804,2090,-19644,6847,-7828,23459,29618,-21379,16862,-15044,-3074,25816,2998,-28333,-465,27323,3025,21215,-12699,16556,17947,-1058,-22934,-1919,-25035,21532,26708,27464,756,19665,6418,-30030,-18764,-21748,-5145,-21100,27896,-8043,-27560,-25574,-11657,13290,-2477,6504,6996,27246,27919,-26445,-32130,-17296,-15078,-963,999,13311,-9229,-22571,18077,-2250,-19230,15919,47,5729,-9911,-2222,29475,-19964,-13828,-24094,13610,-31407,-23049,-28432,-7149,19713,2940,-29908,-27946,-8908,-29113,-4606,-12503,-26878,23204,-15512,-7647,-25872,-4106,3111,-20585,-16244,-18041,-14155,31681,-29349,-24884,-5889,23878,3246,-16059,-8928,-13613,-1249,-15011,-21843,1328,-25750,-25106,4190,-28547,4277,26567,26461,6451,4730,9730,18584,31005,-17089,-23814,-12039,-19935,-1922,1334,-6378,26904,-19260,31615,-440,32027,-23777,26239,6961,29756,-6663,5248,19753,-4350,27440,23940,25381,-4679,30988,-28582,20837,7688,2856,27141,8254,15865,-31798,-16047,14395,-23952,-15738,3194,-14499,14623,18314,-23434,30569,17025,-2059,1768,7178,31056,-32615,-20002,-27762,-25925,-21402,-20407,31376,-955,-27576,-25702,20346,25278,-27331,17043,-18437,-8027,12302,-6412,-292,18778,5631,-21846,7324,-8111,-23163,-21507,-6938,30162,7750,30619,26434,-17689,7194,5071,31916,151,-8759,3825,4164,11067,26493,-4267,-12504,17685,-5861,-28244,19209,1774,-642,-674,14360,-5658,-13490,25335,31441,-3626,21103,-15468,-12392,22180,-32145,13195,31089,7475,-10206,11038,-6250,-1850,23721,25533,386,-23479,2412,1225,-25566,16479,-13638,15897,-15099,-12736,-15112,7759,28411,-5339,15991,-15570,23097,4729,27,-31879,2102,7291,-11697,-18801,-17133,23456,2559,-4363,-30867,-16302,-15543,-396,9337,12826,8346,-20823,-9247,1823,24587,1618,14878,-32518,15179,-26645,-17,-30396,15031,11537,24420,-26061,-4086,-23005,-31047,15380,14311,11916,20092,11455,-24625,-15810,6835,14631,-18266,943,-27571,-248,1912,11918,25329,22727,-7477,31885,2109,-15736,6440,13368,24322,-708,-582,-9666,-26499,12840,-20723,-2518,-24679,-16153,17562,19096,-17341,7476,-18337,-11188,31782,10621,-19042,8854,-8805,30138,-10638,-15222,17455,14690,10985,3519,-8488,21588,-10255,-21123,-29732,11708,-11822,1537,-19474,-4012,-24007,29489,-2652,-30303,1298,28584,21111,-3482,-16373,17199,27415,25128,23942,3447,-6226,391,2864,22454,26005,-16960,29142,30900,-28597,32143,21780,10802,-850,-28728,-31349,30449,19440,22309,-5532,-27943,-12062,1476,3969,32518,9489,-20006,-5209,-28408,28438,29569,15653,-5132,-22586,-56,-3307,-26059,-28309,-4809,-1004,-7718,-15452,-3399,12930,30082,-15456,21391,-31602,31643,-29153,-31951,-21403,-16457,-23618,-24758,2028,-32211,-24195,-3179,3503,12227,29573,4630,-28059,3127,-25269,-356,25836,22899,13742,-12659,-8231,-32112,-13699,-18784,-11515,30035,-32382,-32150,-14705,1222,29686,29623,-16622,-15293,32339,14482,29182,-28613,15373,-15251,12288,11471,-4640,25987,-14881,21782,17757,-9321,17634,-2377,27578,12833,3760,-285,2952,-20543,-16911,1611,-27522,6470,-7402,-30851,-29158,2726,24119,-25021,30883,-8162,-21469,-32204,19467,17539,26385,26581,-8917,14457,-28126,1458,-27082,-32621,-20323,-8592,3812,31374,-15622,7788,-3411,20283,-18406,-12137,20151,-30290,-13020,-21668,-16405,-14018,-30638,-26047,29675,-18600,24604,25832,-23572,5362,-622,-12597,-8138,8919,-5153,-11740,18083,11770,-22195,-21523,8860,-26195,-31848,787,20460,-17546,3627,-25854,-16835,5208,-11395,18850,1649,-28685,12430,-16938,24572,-11250,-12843,28853,28725,-3849,32446,-1229,2042,-8960,-26863,-21422,-29085,19905,-15444,13153,29445,-4023,16910,-25258,17137,-21311,8192,10570,-12608,-2844,-12660,21251,-26739,-6615,-26480,-27348,11809,30020,-23417,-6080,-25518,-415,20839,-17777,-30357,6385,14465,20608,-27739,-6947,5092,29253,28263,-15800,-4995,-8836,3907,-5730,3655,13625,-19576,-4947,1839,15184,11644,30589,2121,13861,-9797,-6104,-12707,-29480,-31540,-29547,-20214,-28823,-10295,-22778,22145,3549,-24406,-4855,12827,16964,-26878,15725,10979,9033,13787,25765,-2154,22189,-10927,-29142,17483,-18012,-2220,-3015,-19506,19550,-30708,8000,-19,-27384,-7732,20756,5099,-24528,13801,-15289,11081,10323,11464,20692,-22677,1252,19922,-30675,3533,-5679,-8069,-4266,21446,9682,-25360,30230,-4025,-12883,-31654,13218,20717,-29671,1033,-23559,31751,-10575,-27820,25324,31874,-23866,19619,-29156,18490,-25621,-31500,16955,-23975,23529,11014,-15774,2744,-6248,20835,24935,9285,-26437,29415,-10864,29158,11736,-19714,-15662,-3368,-23450,-27728,11958,14129,-30714,10320,-29328,6011,-25987,-13145,22994,1617,25804,2953,-31248,-1426,29649,-3490,25263,20027,-27675,2583,7760,11424,-30596,16015,25359,8600,-3964,-14179,24516,-18555,-20788,11236,17045,-12225,-22339,6537,2188,17911,-8494,-26245,-1493,18641,15740,16094,-21084,750,-4604,-25424,-1517,-11420,30568,-14408,-18527,-17264,29298,29638,-15623,-11635,13414,-14763,1360,19527,499,3613,17862,-23231,-30981,-28239,-28105,-4769,8048,7830,-10309,18269,12734,28416,-26418,22260,-8163,-1122,-27271,2193,14638,24173,-15543,-20555,15400,-21286,3195,26635,15026,14907,16145,29988,1897,-3767,17550,-22198,6531,27179,-11114,12650,3260,31307,30910,-5079,-26600,11289,-11831,-7492,-24904,-5678,9580,18835,-14155,-13372,9868,-17238,-13537,28502,26086,-6845,12812,-17588,26567,19503,13384,21353,28982,-7258,31930,7231,26144,18032,30944,7729,-24190,2751,-32063,-20407,-15410,14845,-25391,-31863,312,-25460,-29380,-27284,-12593,25862,22349,14288,-23944,7837,29551,-13088,-368,8566,-935,-4589,18914,31180,-17721,-28523,3359,16091,-11541,-29922,-12834,19868,-16321,15457,-5797,1108,-19928,-20512,-30657,11847,-10285,-28590,-1245,6143,-20083,30320,-11144,16599,23615,-10127,-734,3897,15538,-10391,24284,-32243,-31179,29939,-11109,-19476,6045,-9445,-24450,8573,-19676,-21248,15393,-21264,3757,28696,-13632,-3928,9140,12597,9015,-7731,-22532,23559,16843,-19815,-22674,26022,-4567,-30997,-15700,-11646,25387,-10711,-14322,14273,-22305,-12389,13837,24405,-4567,31527,-1863,-28122,12938,-1347,-26506,-18003,-31329,2568,-14049,-17703,-26710,-24033,21239,15850,30776,-31028,-7202,7378,26457,-31531,2160,-30482,29090,27532,20355,-5667,27536,-29259,21673,-14675,14274,-11846,-20709,1850,14075,16805,-9524,-4197,3887,6904,17855,-11928,-22042,-13200,-23448,-31217,11336,-439,11108,-6964,-9594,20430,15022,6126,-27050,28528,-6879,-21809,29046,15404,-4896,-8899,-29073,24762,-392,-3558,3666,-26416,18347,5894,-17810,-15424,-5992,17894,25633,262,14617,-25249,-734,-2509,-31320,19637,-13296,29809,30469,-29193,-23887,19375,-24388,-20271,-8785,7956,22260,18889,4329,-10198,21490,20122,18420,-5592,9731,976,15874,20945,8479,-4661,1291,3530,13922,-32494,-32485,24058,-3381,17778,-8110,773,7234,16908,-22860,15501,21871,-22038,-11017,18790,-24185,23637,14231,-27942,10274,-5068,15439,-11806,-9755,23304,241,5907,7872,-23321,-7101,-9463,5733,26677,-7429,439,9086,16953,16816,-30435,-15766,-25602,-17258,29870,3000,-10559,3485,-19538,-30207,-11923,28290,24694,2324,-12881,-11045,-6261,-8612,-3066,-1989,15087,-22397,-28392,31593,17753,29467,-30169,12836,-4075,27179,-23602,-31907,6045,-12502,26541,-27811,-19782,-17203,-6143,-953,-7538,-25379,-28145,26644,28808,6566,23308,-19488,-4436,-29995,19179,-25459,-19298,20626,-21506,-10331,6713,-22907,-31282,-21152,1264,29868,10236,-8681,8976,13170,19881,21327,-2576,23440,-12526,14816,-17914,-17308,-16335,-22323,-13669,-4232,28785,7415,-28479,5145,13838,-10686,-18129,8957,22966,-10188,23438,25275,31395,31060,-17379,26605,-26988,27560,20182,-6578,-30596,14829,-30761,28395,2920,7652,32153,10782,32346,15289,-3073,-9412,-3644,6973,24808,-2919,5219,-18209,-16168,-19715,146,-29056,25878,15928,17125,17118,20760,-22731,31504,-26874,-24713,-22155,-16548,-5315,24534,-19641,-11918,-19679,-10230,24700,24401,3058,-25223,26725,15044,19603,22147,-27208,-31092,-1112,14360,-5996,-8650,-31429,-19206,-27327,-13010,8900,11165,-10065,-30458,7027,30187,9096,-10207,-10805,32032,-15690,-28765,-20018,-7289,13731,-15318,23686,-13440,15991,-21586,-21987,18208,-28758,-23434,10444,-30157,-30412,5273,-19581,-12104,28666,-13703,-12502,-729,8169,14217,29342,-9036,26230,-382,7877,-19238,-10549,-1833,31371,-4706,-25370,9194,22388,9736,-15227,15425,-15783,12170,29494,-26342,-2788,-15597,9737,-20740,2512,8114,12082,-19423,-8810,-26561,-18708,-31127,27029,-7870,-761,11976,461,-3779,-20297,-29124,32041,1284,596,-21135,-19287,-1622,-22574,-29651,-32389,21525,-30112,12357,22285,-12385,29025,17738,12618,-8983,-9029,20291,-452,13770,17610,-3854,-29362,-5093,-3665,-26479,29658,-2842,4467,-19598,22798,32603,-8719,21683,8395,-17454,413,5788,-27435,-25678,-6948,2165,-27917,19483,754,8937,2543,-7195,-13098,-29210,-10263,-27755,5682,-20236,12554,-16809,19607,-1836,28284,14119,-8622,-23910,-31784,-24782,-26310,-20230,15074,-7543,-12695,-992,4310,4017,10100,-14093,30139,15601,-10412,9861,22955,1164,25201,24610,12934,-26260,-29588,-7763,-10733,-29606,28776,-20826,10731,-30622,29187,30091,26611,24971,-8585,16336,32573,-32387,22069,28675,29706,-4937,9472,12429,29174,-14886,-20257,32369,17912,3875,-15361,16298,15197,8034,6366,4065,-31016,5737,6608,-21344,-11610,18392,-2525,-26527,29891,754,12048,9977,-24631,17753,14393,2878,15583,18345,-538,-8356,-473,22081,-21124,-17139,-19060,18084,22821,-13130,5248,13932,-15549,-32179,26116,-24240,18558,-26110,14417,-18204,5166,29132,-7877,-5696,-6623,-28507,16923,-20549,29698,-1479,-15105,14033,21702,7858,-18453,-18757,19070,14758,19948,-4110,21740,9229,7959,11969,-11412,9705,-30912,4897,-18556,-27083,-31185,-11316,-29829,6732,19143,12831,-18167,-6706,2285,11083,-4694,5390,-7326,13695,5204,28676,25153,-28717,-6256,13156,8094,-5048,-14933,-26597,29188,14711,-15920,6518,28318,14630,16846,-27744,17036,13906,-9060,1972,-3224,-31364,2126,-1317,-14348,27475,-16659,11087,-18921,6135,7529,-27687,-25480,25358,7495,-24569,-29151,26275,-24045,18387,16155,-23297,-19944,29735,-11025,-29013,-13710,-18409,-28070,16209,-27621,22386,-11761,-26635,4047,-704,2640,-13789,-16345,-27758,-31220,14157,-29739,-10040,11690,2414,26865,-31776,30111,17692,-11977,11488,-31794,-14704,20201,19264,-339,-21192,28678,28284,21358,-30117,18032,18577,-5678,25765,17734,7044,19701,5691,-27174,5459,31919
};
