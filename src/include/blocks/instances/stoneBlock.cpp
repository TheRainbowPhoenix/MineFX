#include <sdk/os/lcd.h>
#ifndef MAKE_COLOR
#define MAKE_COLOR(r,g,b) ((((r) >> 3) & 0x1F) << 11 | (((g) >> 2) & 0x3F) << 5 | (((b) >> 3) & 0x1F))
#endif

#include "../baseBlock.cpp"

class StoneBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x07; }

    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(2);
        keyColorMap.add(KeyColorPair('A', MAKE_COLOR(49, 49, 49)));
        keyColorMap.add(KeyColorPair('B', MAKE_COLOR(56, 57, 56)));

        return keyColorMap;
    }
};

class StoneBlock : public BaseBlock
{
public:
    StoneBlock() : BaseBlock(new StoneBlockType()) {}
};