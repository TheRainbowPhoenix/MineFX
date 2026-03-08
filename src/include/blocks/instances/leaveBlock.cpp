#include "../baseBlock.cpp"

class LeaveBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x04; }

    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(2);
        keyColorMap.add(KeyColorPair('A', LCD_MakeColor(22, 80, 1)));
        keyColorMap.add(KeyColorPair('B', LCD_MakeColor(25, 91, 1)));

        return keyColorMap;
    }
};

class LeaveBlock : public BaseBlock
{
public:
    LeaveBlock() : BaseBlock(new LeaveBlockType()) {}
};