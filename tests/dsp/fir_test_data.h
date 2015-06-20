/*
 * Test data for dsp:p_fir function
 * Generated using MATLAB filter(h,1,x).
 */

/* Integers: result should be exact. Two additional values are added to all
 * arrays to check for out-of-boundary array accesses. */
float x1[32] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
float h1[18] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
float ref1[32] = {1, 4, 10, 20, 35, 56, 84, 120, 165, 220, 286, 364, 455,
    560, 680, 816, 952, 1088, 1224, 1360, 1496, 1632, 1768, 1904, 2040,
    2176, 2312, 2448, 2584, 2720, 0, 0};
float r1[32];
int nx1 = 30;
int nh1 = 16;


/* Floats: error should be < 1e-4 (input is single precision ~1e-6 and there is
 * a gain of > 59 from intermediate computations). */
float x2[100] = {0.488893770311789, 1.03469300991786, 0.726885133383238,
                    -0.303440924786016, 0.293871467096658, -0.787282803758638,
                    0.888395631757642, -1.14707010696915, -1.06887045816803,
                    -0.809498694424876, -2.94428416199490, 1.43838029281510,
                    0.325190539456198, -0.754928319169703, 1.37029854009523,
                    -1.71151641885370, -0.102242446085491, -0.241447041607358,
                    0.319206739165502, 0.312858596637428, -0.864879917324457,
                    -0.0300512961962686, -0.164879019209038, 0.627707287528727,
                    1.09326566903948, 1.10927329761440, -0.863652821988714,
                    0.0773590911304249, -1.21411704361541, -1.11350074148676,
                    -0.00684932810334806, 1.53263030828475, -0.769665913753682,
                    0.371378812760058, -0.225584402271252, 1.11735613881447,
                    -1.08906429505224, 0.0325574641649735, 0.552527021112224,
                    1.10061021788087, 1.54421189550395, 0.0859311331754255,
                    -1.49159031063761, -0.742301837259857, -1.06158173331999,
                    2.35045722400204, -0.615601881466894, 0.748076783703985,
                    -0.192418510588264, 0.888610425420721, -0.764849236567874,
                    -1.40226896933876, -1.42237592509150, 0.488193909859941,
                    -0.177375156618825, -0.196053487807333, 1.41931015064255,
                    0.291584373984183, 0.197811053464361, 1.58769908997406,
                    -0.804465956349547, 0.696624415849607, 0.835088165072682,
                    -0.243715140377952, 0.215670086403744, -1.16584393148205,
                    -1.14795277889859, 0.104874716016494, 0.722254032225002,
                    2.58549125261624, -0.666890670701386, 0.187331024578940,
                    -0.0824944253709554, -1.93302291785099, -0.438966153934773,
                    -1.79467884145512, 0.840375529753905, -0.888032082329010,
                    0.100092833139322, -0.544528929990548, 0.303520794649354,
                    -0.600326562133734, 0.489965321173948, 0.739363123604474,
                    1.71188778298155, -0.194123535758265, -2.13835526943994,
                    -0.839588747336614, 1.35459432800464, -1.07215528838425,
                    0.960953869740567, 0.124049800003193, 1.43669662271894,
                    -1.96089999936503, -0.197698225974150, -1.20784548525980,
                    2.90800803072936, 0.825218894228491, 1.37897197791661,
                    -1.05818025798736};
float h2[24] = {8.96196055032497, 9.96371130783181, 1.39685497922857,
                10.0471344175292, 6.95595170847951, 1.07294445499350,
                3.06348040753753, 6.01569671125482, 10.5325751897773,
                10.6137738871920, 1.73374389845303, 10.6765205993668,
                10.5288364306724, 5.33913213595125, 8.80308515777680,
                1.56074972489937, 4.63937410888903, 10.0730907770797,
                8.71428062515510, 10.5544166903219, 7.21314769072246,
                0.392828464316085, 9.34042236455655, 10.2739257253331};
float ref2[100] = {4.38144668283389, 14.1440743241650, 17.5066120304252,
                    10.8803455347910, 14.4220410477185, 10.4735331750688,
                    5.14335459333896, 5.20455214577267, -12.3581379942700,
                    3.78805933604945, -23.5746205116505, -24.4523191435555,
                    11.6490512254190, -20.4794566776442, 3.89303020937694,
                    8.14158434136703, -52.2662385617696, -20.9200152056978,
                    -26.8964789453568, -28.8021421895547, 3.74129460903346,
                    -48.4228540875274, -26.9048951626906, -1.62188437848414,
                    -29.3012311072962, 15.6138110044446, -30.4553103418182,
                    -61.7326728701339, -25.8767557726614, -69.0001622082354,
                    -38.0373054463597, 1.18083533487212, -41.2393995684227,
                    -20.0756215242485, 21.2547637015502, -4.18534418726141,
                    9.10879322867097, -22.2155319560167, -6.69790111565424,
                    8.29926992873398, 3.11552235460419, 29.3561816200623,
                    25.2312421853411, 10.2826079991493, 3.53624491403252,
                    -8.22812396323694, 11.3153216708296, 20.8263852669967,
                    33.2539757251591, 24.5787517105350, -1.32253147982360,
                    -23.2087480894685, -9.11723833470803, 14.2588486434917,
                    7.77599820912536, -41.6761715263702, 26.5322920149295,
                    59.2325054728447, 20.1049008873763, 18.3242907853753,
                    -5.04181532485617, -7.09937268570435, 34.8923891671505,
                    7.37687409391624, 1.18941598357724, 6.18162924923411,
                    -28.2713035368162, 27.7875757520245, 26.4142659645616,
                    2.32945559269692, 36.9993763381585, 7.04962423098104,
                    30.9438791667144, -2.50541682646372, -53.8595022021612,
                    0.179887289987949, 17.0256554469907, -2.55802111978462,
                    10.3572582021471, 9.78131710085250, 16.1051712169320,
                    11.6790883654813, -27.7615753507540, -15.2691287803306,
                    -20.9308394002330, -6.01331557061655, -31.1885445500618,
                    -25.9346441688327, -4.54559221044078, -44.4801414096818,
                    -35.8143995654214, 30.0461501681512, 6.99283571572283,
                    -36.5748602082542, -46.2396999089475, -34.7570636394604,
                    -5.58620865976614, -10.8373377634534, -18.1170404789648,
                    36.2520278025143};
float r2[100];
int nx2 = 24;
int nh2 = 100;
