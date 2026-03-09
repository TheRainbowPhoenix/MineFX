#include <sdk/os/lcd.h>
#define MAKE_COLOR(r,g,b) RGB_TO_RGB565((r) >> 3, (g) >> 2, (b) >> 3)

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