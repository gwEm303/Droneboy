const unsigned char fadertile[] =
{
  0x00,0x7E,0x7E,0x81,0x7E,0x81,0x7E,0xFF,
  0x00,0xFF,0x7E,0x81,0x7E,0x81,0x00,0x7E,
  0xFF,0xFF,0x81,0xFF,0xFD,0x83,0xFD,0x83,
  0xFD,0x83,0xFD,0x83,0xFD,0x83,0xFD,0x83,
  0xFD,0x83,0xFD,0x83,0xFD,0x83,0xFD,0x83,
  0xFD,0x83,0xFD,0x83,0xFD,0x83,0xFD,0x83,
  0xFD,0x83,0xFD,0x83,0xFD,0x83,0xFD,0x83,
  0xFD,0x83,0xFD,0x83,0xFD,0x83,0xFF,0xFF
};

const unsigned char frequencytiles[] =
{
  0x40,0x3C,0x84,0x42,0x84,0x42,0x84,0x42,
  0x84,0x42,0x84,0x42,0x84,0x42,0x40,0x3C,
  0x20,0x18,0x40,0x38,0x20,0x18,0x20,0x18,
  0x20,0x18,0x20,0x18,0x20,0x18,0x40,0x3C,
  0x20,0x1C,0x10,0x26,0x24,0x42,0x08,0x44,
  0x10,0x08,0x20,0x10,0x04,0x62,0x00,0xFE,
  0x20,0x1C,0x48,0x36,0x08,0x46,0x0A,0x04,
  0x20,0x1C,0x08,0x06,0x08,0x66,0x02,0x3C,
  0x10,0x0C,0x28,0x14,0x48,0x24,0x88,0x44,
  0x80,0x7E,0x08,0x04,0x08,0x04,0x08,0x04,
  0x80,0x7C,0xB0,0x40,0x80,0x40,0x80,0x7C,
  0x08,0x04,0x08,0x04,0x90,0x4C,0x80,0x78,
  0x10,0x0C,0x24,0x12,0x40,0x20,0x80,0x7C,
  0x44,0x82,0x04,0x82,0x88,0x44,0x40,0x38,
  0x40,0x3F,0x04,0x03,0x08,0x06,0x10,0x0C,
  0x20,0x18,0x40,0x30,0x40,0x30,0x40,0x30,
  0x20,0x1C,0x44,0x22,0x44,0x22,0x20,0x1C,
  0x44,0x22,0x44,0x22,0x44,0x22,0x40,0x3E,
  0x20,0x1E,0x42,0x21,0x42,0x21,0x20,0x1F, // 9
  0x04,0x03,0x08,0x06,0x18,0x04,0x20,0x18,
  0x00,0x00,0x00,0x00,0x10,0x10,0x38,0x38, //record marker
  0x38,0x38,0x10,0x10,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,
  0xF0,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x00,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,
  0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x10,0x0F,0x1F,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
  0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char splash[] =
{
  0x00,0xFF,0x00,0xFF,0x00,0xE1,0x00,0xE1,
  0x00,0xE1,0x00,0xE1,0x00,0xE1,0x00,0xE1,
  0x00,0xE1,0x00,0xE1,0x00,0xE1,0x00,0xE1,
  0x00,0xE1,0x00,0xE1,0x00,0xFF,0x00,0xFF,
  0x00,0x80,0x00,0x80,0x00,0xE0,0x00,0xE0,
  0x00,0xE0,0x00,0xE0,0x00,0xEF,0x00,0xEF,
  0x00,0xEF,0x00,0xEF,0x00,0xEF,0x00,0xEF,
  0x00,0xEF,0x00,0xEF,0x00,0x8F,0x00,0x8F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,
  0x00,0xC3,0x00,0xC3,0x00,0x03,0x00,0x03,
  0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0xFE,
  0x00,0xC7,0x00,0xC7,0x00,0xC7,0x00,0xC7,
  0x00,0xC7,0x00,0xC7,0x00,0xFE,0x00,0xFE,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,
  0x00,0xBF,0x00,0xBF,0x00,0xBC,0x00,0xBC,
  0x00,0xBC,0x00,0xBC,0x00,0x3C,0x00,0x3C,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xF0,
  0x00,0x3D,0x00,0x3D,0x00,0x3D,0x00,0x3D,
  0x00,0x3D,0x00,0x3D,0x00,0x3C,0x00,0x3C,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x7F,
  0x00,0xE1,0x00,0xE1,0x00,0xFF,0x00,0xFF,
  0x00,0xE0,0x00,0xE0,0x00,0x7F,0x00,0x7F,
  0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0x0F,
  0x00,0x0F,0x00,0x0F,0x00,0x8F,0x00,0x8F,
  0x00,0xEF,0x00,0xEF,0x00,0xEF,0x00,0xEF,
  0x00,0x0F,0x00,0x0F,0x00,0xEF,0x00,0xEF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0xFC,
  0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0x0F,
  0x00,0x0F,0x00,0x0F,0x00,0xFC,0x00,0xFC,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x1F,
  0x00,0x78,0x00,0x78,0x00,0x78,0x00,0x78,
  0x00,0x78,0x00,0x78,0x00,0x1F,0x00,0x1F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xE3,0x00,0xE3,
  0x00,0x7B,0x00,0x7B,0x00,0x7B,0x00,0x7B,
  0x00,0x7B,0x00,0x7B,0x00,0xE0,0x00,0xE0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xC3,0x00,0xC3,
  0x00,0xC3,0x00,0xC3,0x00,0xC3,0x00,0xC3,
  0x00,0xC3,0x00,0xC3,0x00,0xFF,0x00,0xFF,
  0x00,0x07,0x00,0x08,0x00,0x17,0x00,0x14,
  0x00,0x17,0x00,0x14,0x00,0xC8,0x00,0xC7,
  0x00,0x03,0x00,0x03,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
  0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
  0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x80,0x00,0x40,0x00,0x20,0x00,0xA0,
  0x00,0x20,0x00,0xA0,0x00,0x40,0x00,0x80,
  0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,
  0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};


const unsigned char pageheadertext[] =
{
  0x41,0xC1,0x41,0x63,0x22,0x22,0x22,0x22,
  0x14,0x36,0x14,0x14,0x18,0x1C,0x08,0x18,
  0x3C,0x3C,0x42,0x42,0x42,0x42,0x22,0x22,
  0x42,0x42,0x44,0x44,0x42,0x42,0x3C,0x3C,
  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
  0x40,0x40,0x40,0x40,0x40,0x40,0x7E,0x7E,
  0x42,0x42,0x42,0x42,0x62,0x62,0x23,0x23,
  0x43,0x43,0x62,0x62,0x22,0x22,0x3E,0x3E,
  0x62,0x73,0x57,0x57,0x9D,0xDD,0x89,0x99,
  0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,
  0x7E,0x7E,0x20,0x60,0x30,0x30,0x10,0x18,
  0x78,0x78,0x40,0x40,0x40,0x40,0x7F,0x7F,
  0x3E,0x7E,0x40,0x40,0x40,0x40,0x38,0x78,
  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
  0x7E,0x3E,0x42,0x42,0x7E,0x7E,0x70,0x60,
  0x58,0x58,0x4C,0x4C,0x46,0x44,0x43,0x43,
  0x3C,0x3C,0x66,0x66,0x42,0x42,0x42,0x42,
  0x42,0x42,0x4A,0x4A,0x64,0x66,0x3B,0x3F,
  0x21,0x61,0x71,0x71,0x51,0x59,0x49,0x49,
  0x49,0x49,0x4D,0x4D,0x45,0x47,0x43,0x43,
  0x18,0x3C,0x66,0x66,0x42,0xC2,0x80,0xC0,
  0x80,0x80,0x82,0xC2,0x66,0x66,0x18,0x3C,
  0x81,0x81,0x81,0xC3,0x42,0x42,0x66,0x66,
  0x38,0x3C,0x10,0x18,0x10,0x10,0x10,0x10,
  0x7C,0x7C,0x44,0x44,0x46,0x46,0x62,0x62,
  0x23,0x23,0x61,0x61,0x43,0x43,0x7E,0x7E,
  0x7F,0x7F,0x10,0x10,0x10,0x10,0x10,0x10,
  0x10,0x10,0x20,0x30,0x10,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x18,0x18,0x1C,0x1C,0x14,0x14,0x34,0x34,
  0x22,0x22,0x7E,0x7E,0xC3,0xC3,0x81,0x81,
  0x78,0x7C,0x44,0x46,0x22,0x22,0x44,0x44,
  0x7E,0x7E,0x42,0x43,0x81,0x81,0x7E,0x7F,
  0x3C,0x3E,0x42,0x42,0x41,0xC1,0x20,0x60,
  0x5E,0xDF,0x51,0xD1,0x41,0x41,0x3E,0x3F
};

const unsigned char notetext[] =
{
  0x18,0x18,0x1C,0x1C,0x14,0x14,0x34,0x34,
  0x22,0x22,0x7E,0x7E,0xC3,0xC3,0x81,0x81,
  0x78,0x7C,0x44,0x46,0x22,0x22,0x44,0x44,
  0x7E,0x7E,0x42,0x43,0x81,0x81,0x7E,0x7F,
  0x18,0x3C,0x66,0x66,0x42,0xC2,0x80,0xC0,
  0x80,0x80,0x82,0xC2,0x66,0x66,0x18,0x3C,
  0x7C,0x7C,0x44,0x44,0x46,0x46,0x62,0x62,
  0x23,0x23,0x61,0x61,0x43,0x43,0x7E,0x7E,
  0x7E,0x7E,0x20,0x60,0x30,0x30,0x10,0x18,
  0x78,0x78,0x40,0x40,0x40,0x40,0x7F,0x7F,
  0x3E,0x7E,0x40,0x40,0x40,0x40,0x38,0x78,
  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
  0x3C,0x3E,0x42,0x42,0x41,0xC1,0x20,0x60,
  0x5E,0xDF,0x51,0xD1,0x41,0x41,0x3E,0x3F,
  0x22,0x22,0x22,0x22,0xFF,0xFF,0x22,0x22,
  0x44,0x44,0xFF,0xFF,0x44,0x44,0x44,0x44
};

const unsigned char icons[] =
{
  0x00,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08,
  0x10,0x08,0x04,0x18,0x3C,0x1C,0x00,0x3E,
  0x00,0x3E,0x40,0x3E,0x2A,0x55,0x2A,0x55,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x81,0xFF,0x81,0xFF,0x81,0xFF,
  0x81,0xFF,0x81,0xFF,0x81,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xC0,
  0x80,0x40,0x80,0x40,0x80,0x60,0xC0,0x20,
  0x40,0xB0,0x60,0x90,0x70,0x88,0x90,0x6C,
  0xC8,0x36,0xEC,0x13,0x24,0xDB,0x9E,0x61,
  0x89,0x48,0x24,0x00,0xAA,0x22,0x00,0x10,
  0x22,0x00,0x01,0x89,0x20,0x02,0xC8,0x88,
  0x15,0x01,0x00,0x40,0x90,0x02,0x20,0x25,
  0x40,0x10,0x85,0x80,0x40,0x50,0x09,0x83
};

const unsigned char macroMarker[] =
{
  0x3C,0x00,0x66,0x18,0xC3,0x3C,0x91,0x7E,
  0x81,0x7E,0xC3,0x3C,0x66,0x18,0x3C,0x00,
  0x00,0x3C,0x18,0x66,0x3C,0xC3,0x6E,0x81,
  0x7E,0x81,0x3C,0xC3,0x18,0x66,0x00,0x3C
};

const unsigned char creditPageText[] =
{
  0x18,0x18,0x1C,0x1C,0x14,0x14,0x34,0x34,
  0x22,0x22,0x7E,0x7E,0xC3,0xC3,0x81,0x81,
  0x78,0x7C,0x44,0x46,0x22,0x22,0x44,0x44,
  0x7E,0x7E,0x42,0x43,0x81,0x81,0x7E,0x7F,
  0x3C,0x3E,0x42,0x42,0x41,0xC1,0x20,0x60,
  0x5E,0xDF,0x51,0xD1,0x41,0x41,0x3E,0x3F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,
  0x7E,0x7E,0xC1,0xC1,0xC0,0xC0,0x7C,0x7C,
  0x02,0x02,0xC1,0xC1,0x41,0x41,0x3E,0x3E,
  0x30,0x30,0x10,0x10,0x10,0x10,0x10,0x10,
  0x10,0x18,0x10,0x10,0x10,0x10,0x18,0x18,
  0x42,0x42,0x44,0x44,0xCC,0xCC,0x58,0x58,
  0x70,0x70,0x78,0x78,0x4E,0x4E,0x43,0x43,
  0x42,0x42,0xC2,0xC2,0x42,0x42,0x52,0x52,
  0x7E,0x7E,0x62,0x62,0x42,0x42,0x43,0x43,
  0x80,0x80,0x81,0x81,0x81,0x81,0xC1,0xC1,
  0x49,0x49,0x5C,0x5E,0x76,0x76,0x22,0x22,
  0x37,0x37,0x75,0x75,0x5D,0x5D,0x59,0x59,
  0x81,0x81,0x81,0x81,0x83,0x83,0x81,0x81,
  0x7C,0x7C,0x47,0x47,0x61,0x61,0x46,0x46,
  0x7C,0x7C,0x40,0x40,0x40,0x40,0x60,0x60,
  0x04,0x04,0x0C,0x0C,0x08,0x08,0x18,0x18,
  0x30,0x30,0x20,0x20,0x60,0x60,0x40,0x40
};

const unsigned char noiseCounterStepFlip[] =
{
  0x3F,0x3F,0x3F,0x20,0x31,0x20,0x31,0x20,
  0x31,0x20,0x31,0x20,0x3F,0x20,0x3F,0x3F,
  0x3F,0x3F,0x3F,0x20,0x31,0x2E,0x35,0x2E,
  0x35,0x2E,0x31,0x2E,0x3F,0x20,0x3F,0x3F,
  0xFC,0xFC,0xFC,0x04,0x8C,0x04,0x8C,0x04,
  0x8C,0x04,0x8C,0x04,0xFC,0x04,0xFC,0xFC,
  0xFC,0xFC,0xFC,0x04,0x8C,0x74,0xAC,0x74,
  0xAC,0x74,0x8C,0x74,0xFC,0x04,0xFC,0xFC

};

const unsigned char waveforms[] =
{
  0xF0,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,
  0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x1F,
  0x80,0x80,0xC0,0xC0,0xA0,0xA0,0x90,0x90,
  0x88,0x88,0x84,0x84,0x82,0x82,0x81,0x81,
  0x10,0x10,0x28,0x28,0x28,0x28,0x44,0x44,
  0x44,0x44,0x82,0x82,0x82,0x82,0x00,0x00,
  0x60,0x60,0x90,0x90,0x90,0x90,0x90,0x90,
  0x89,0x89,0x09,0x09,0x09,0x09,0x06,0x06,
  0x01,0x01,0x03,0x03,0x05,0x05,0x09,0x09,
  0x11,0x11,0x21,0x21,0x41,0x41,0x81,0x81,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xB6,0xB6,0xC9,0xC9,0x89,0x89,0x89,0x89,
  0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,
  0x7C,0x7C,0x10,0x10,0x10,0x10,0x00,0x00,
  0x40,0x40,0xA0,0xA0,0x40,0x40,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x4B,0x4B,0xAD,0xAD,0xA9,0xA9,0x49,0x49,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0x40,0xA0,0xA0,0xAC,0xAC,0x50,0x50,
  0x1B,0x1B,0x14,0x14,0x06,0x06,0x04,0x04,
  0x22,0x22,0x22,0x22,0xFF,0xFF,0x22,0x22,
  0x44,0x44,0xFF,0xFF,0x44,0x44,0x44,0x44,
  0x40,0x40,0xE0,0xE0,0x40,0x40,0x00,0x00,
  0xB6,0xB6,0xC9,0xC9,0x89,0x89,0x89,0x89,
  0x40,0x40,0xA0,0xA0,0x40,0x40,0x00,0x00,
  0xB6,0xB6,0xC9,0xC9,0x89,0x89,0x89,0x89,
  0x00,0x00,0x00,0x00,0x10,0x10,0x38,0x38,
  0x38,0x38,0x10,0x10,0x00,0x00,0x00,0x00,
  0x00,0x00,0x20,0x20,0x30,0x30,0x38,0x38,
  0x3C,0x3C,0x38,0x38,0x30,0x30,0x20,0x20,
  0x00,0x00,0x00,0x00,0x6C,0x6C,0x6C,0x6C,
  0x6C,0x6C,0x6C,0x6C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3C,0x3C,0x3C,0x3C,
  0x3C,0x3C,0x3C,0x3C,0x00,0x00,0x00,0x00
};

/////////// Backgrounds


const unsigned char splashbackground[] =
{
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1D,0x00,0x02,0x04,0x06,0x08,0x0A,
  0x0C,0x0E,0x10,0x12,0x14,0x16,0x18,0x1C,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1D,0x01,0x03,0x05,0x07,0x09,0x0B,
  0x0D,0x0F,0x11,0x13,0x15,0x17,0x1A,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1E,0x19,0x1B,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F
};

const unsigned char volumefaderbackground[] =
{
  0x05,0x06,0x07,0x08,0x09,0x0A,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x16,0x1A,0x13,0x01,0x04,0x16,0x1A,0x13,0x01,0x04,0x16,0x1A,
  0x13,0x01,0x04,0x16,0x1A,0x13,0x01,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x1D,0x13,0x02,0x04,0x04,0x1D,0x13,0x02,0x04,0x04,0x1D,
  0x13,0x02,0x04,0x04,0x1D,0x13,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x15,0x14,0x03,0x04,0x04,0x15,0x14,0x03,0x04,0x04,0x15,
  0x14,0x03,0x04,0x04,0x15,0x14,0x03,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04
};


const unsigned char dutyfaderbackground[] =
{
  0x11,0x08,0x12,0x10,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x19,0x13,0x01,0x04,0x04,0x19,0x13,0x01,0x04,
  0x04,0x19,0x13,0x01,0x04,0x04,0x1C,0x13,0x01,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x18,0x13,0x02,0x04,0x04,0x18,0x13,0x02,0x04,
  0x04,0x18,0x13,0x02,0x04,0x04,0x1A,0x13,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x17,0x13,0x02,0x04,0x04,0x17,0x13,0x02,0x04,
  0x04,0x17,0x13,0x02,0x04,0x04,0x17,0x13,0x02,0x04,
  
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,

  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  0x04,0x04,0x04,0x02,0x04,0x04,0x04,0x04,0x02,0x04,
  
  0x04,0x16,0x13,0x03,0x04,0x04,0x16,0x13,0x03,0x04,
  0x04,0x16,0x13,0x03,0x04,0x04,0x15,0x13,0x03,0x04,


  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x39,0x04,0x04,0x04,0x36,0x37,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
};

const unsigned char frequencybackground[] =
{
  0x0B,0x0C,0x0A,0x0D,0x08,0x0A,0x0E,0x0F,0x10,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x1F,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x21,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x20,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x22,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x23,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x25,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x24,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x26,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04
};

const unsigned char noteFreqText[] =
{
  0x0E,0x06,0x12,0x0A,0x04,0x04,0x04,0x04,0x04
};

const unsigned char freqFreqText[] =
{
  0x0B,0x0C,0x0A,0x0D,0x08,0x0A,0x0E,0x0F,0x10
};

const unsigned char iconMacroMarkerBkg[] =
{
  0x28
};

const unsigned char iconInvertedMacroMarkerBkg[] =
{
  0x27
};

const unsigned char blankTileBkg[] =
{
  0x04
};

// intro credit page
const unsigned char creditPageBackground[] =
{
  //CREDITS
  0x0F,0x0C,0x0A,0x11,0x2E,0x12,0x2D,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  //DRONEBOY V1.07
  0x11,0x0C,0x06,0x0E,0x0A,0x2A,0x06,0x10,0x04,0x05,
  0x16,0x2C,0x15,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  //MADE BY PUREFUNKTION
  0x32,0x29,0x11,0x0A,0x04,0x2A,0x10,0x04,0x33,0x08,
  0x0C,0x0A,0x0B,0x08,0x0E,0x2F,0x12,0x2E,0x06,0x0E,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  //WWW
  0x31,0x31,0x31,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  //GITHUB.COM/PUREFUNKT
  0x2B,0x2E,0x12,0x30,0x08,0x2A,0x2C,0x0F,0x06,0x32,
  0x34,0x33,0x08,0x0C,0x0A,0x0B,0x08,0x0E,0x2F,0x12,
  //ION/DRONEBOY
  0x2E,0x06,0x0E,0x34,0x11,0x0C,0x06,0x0E,0x0A,0x2A,
  0x06,0x10,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04
};

// le chords
const unsigned char chordbackground[] =
{    
  // CHORD
  0x0F,0x30,0x06,0x0C,0x11,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x0F,0x30,0x06,0x0C,0x11,0x04,0x2D,0x12,0x0A,0x33,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  
  0x04,0x0F,0x04,0x0F,0x04,0x0F,0x04,0x0F,0x04,0x0F,
  0x04,0x0F,0x04,0x0F,0x04,0x0F,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,

  0x04,0x1A,0x04,0x1A,0x04,0x1A,0x04,0x1A,0x04,0x1A,
  0x04,0x1A,0x04,0x1A,0x04,0x1A,0x04,0x04,0x04,0x04,
  
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04
};