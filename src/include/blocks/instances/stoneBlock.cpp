#include <sdk/os/lcd.h>
#include "../baseBlock.cpp"

class StoneBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x07; }

    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(2);
        keyColorMap.add(KeyColorPair('A', LCD_MakeColor(49, 49, 49)));
        keyColorMap.add(KeyColorPair('B', LCD_MakeColor(56, 57, 56)));

        return keyColorMap;
    }
};

class StoneBlock : public BaseBlock
{
public:
    StoneBlock() : BaseBlock(new StoneBlockType()) {}
};