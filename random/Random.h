#include <math.h>

namespace Random {
    namespace {
        unsigned char index = 0U;
        const unsigned char nums[256] = {
        0U,   8U, 109U, 220U, 222U, 241U, 149U, 107U,  75U, 248U, 254U, 140U,  16U,  66U,
        74U,  21U, 211U,  47U,  80U, 242U, 154U,  27U, 205U, 128U, 161U,  89U,  77U,  36U,
        95U, 110U,  85U,  48U, 212U, 140U, 211U, 249U,  22U,  79U, 200U,  50U,  28U, 188U,
        52U, 140U, 202U, 120U,  68U, 145U,  62U,  70U, 184U, 190U,  91U, 197U, 152U, 224U,
        149U, 104U,  25U, 178U, 252U, 182U, 202U, 182U, 141U, 197U,   4U,  81U, 181U, 242U,
        145U,  42U,  39U, 227U, 156U, 198U, 225U, 193U, 219U,  93U, 122U, 175U, 249U,   0U,
        175U, 143U,  70U, 239U,  46U, 246U, 163U,  53U, 163U, 109U, 168U, 135U,   2U, 235U,
        25U,  92U,  20U, 145U, 138U,  77U,  69U, 166U,  78U, 176U, 173U, 212U, 166U, 113U,
        94U, 161U,  41U,  50U, 239U,  49U, 111U, 164U,  70U,  60U,   2U,  37U, 171U,  75U,
        136U, 156U,  11U,  56U,  42U, 146U, 138U, 229U,  73U, 146U,  77U,  61U,  98U, 196U,
        135U, 106U,  63U, 197U, 195U,  86U,  96U, 203U, 113U, 101U, 170U, 247U, 181U, 113U,
        80U, 250U, 108U,   7U, 255U, 237U, 129U, 226U,  79U, 107U, 112U, 166U, 103U, 241U,
        24U, 223U, 239U, 120U, 198U,  58U,  60U,  82U, 128U,   3U, 184U,  66U, 143U, 224U,
        145U, 224U,  81U, 206U, 163U,  45U,  63U,  90U, 168U, 114U,  59U,  33U, 159U,  95U,
        28U, 139U, 123U,  98U, 125U, 196U,  15U,  70U, 194U, 253U,  54U,  14U, 109U, 226U,
        71U,  17U, 161U,  93U, 186U,  87U, 244U, 138U,  20U,  52U, 123U, 251U,  26U,  36U,
        17U,  46U,  52U, 231U, 232U,  76U,  31U, 221U,  84U,  37U, 216U, 165U, 212U, 106U,
        197U, 242U,  98U,  43U,  39U, 175U, 254U, 145U, 190U,  84U, 118U, 222U, 187U, 136U,
        120U, 163U, 236U, 249};
    }

    int getRandom() {
        return nums[(int)++index];
    }

    float getRandomFloat() {
        return (float)getRandom()/255;
    }

    int getRandomInt(int min, int max) {
        return roundf(getRandomFloat()*(max-min)+min);
    }
};