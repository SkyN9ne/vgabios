#ifndef vbetables_h_included
#define vbetables_h_included

/* vbetables.h
   
   This file contains a static mode information list containing all
   bochs/plex86 "supported" VBE modi and their 'settings'.
   
*/

typedef struct ModeInfoListItem
{
        Bit16u                  mode;
        ModeInfoBlockCompact    info;
} ModeInfoListItem;


// FIXME: check all member variables to be correct for the different modi
// FIXME: add more modi
static ModeInfoListItem mode_info_list[]=
{
        {
                VBE_VESA_MODE_640X400X8,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          640,
// Mandatory information for VBE 1.2 and above   
   /*Bit16u XResolution*/               640,
   /*Bit16u YResolution*/               400,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              8,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_PACKED_PIXEL,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               0,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             0,
   /*Bit8u  GreenFieldPosition*/        0,
   /*Bit8u  BlueMaskSize*/              0,
   /*Bit8u  BlueFieldPosition*/         0,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above   
   /*Bit16u LinBytesPerScanLine*/       640,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            0,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          0,
   /*Bit8u  LinGreenFieldPosition*/     0,
   /*Bit8u  LinBlueMaskSize*/           0,
   /*Bit8u  LinBlueFieldPosition*/      0,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_VESA_MODE_640X480X8,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          640,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               640,
   /*Bit16u YResolution*/               480,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              8,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_PACKED_PIXEL,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               0,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             0,
   /*Bit8u  GreenFieldPosition*/        0,
   /*Bit8u  BlueMaskSize*/              0,
   /*Bit8u  BlueFieldPosition*/         0,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       640,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            0,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          0,
   /*Bit8u  LinGreenFieldPosition*/     0,
   /*Bit8u  LinBlueMaskSize*/           0,
   /*Bit8u  LinBlueFieldPosition*/      0,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_VESA_MODE_640X480X565,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          640*2,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               640,
   /*Bit16u YResolution*/               480,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              16,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               5,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             6,
   /*Bit8u  GreenFieldPosition*/        5,
   /*Bit8u  BlueMaskSize*/              5,
   /*Bit8u  BlueFieldPosition*/         11,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       640*2,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            5,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          6,
   /*Bit8u  LinGreenFieldPosition*/     5,
   /*Bit8u  LinBlueMaskSize*/           5,
   /*Bit8u  LinBlueFieldPosition*/      11,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_VESA_MODE_800X600X565,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          800*2,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               800,
   /*Bit16u YResolution*/               600,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              16,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               5,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             6,
   /*Bit8u  GreenFieldPosition*/        5,
   /*Bit8u  BlueMaskSize*/              5,
   /*Bit8u  BlueFieldPosition*/         11,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       800*2,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            5,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          6,
   /*Bit8u  LinGreenFieldPosition*/     5,
   /*Bit8u  LinBlueMaskSize*/           5,
   /*Bit8u  LinBlueFieldPosition*/      11,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_VESA_MODE_640X480X888,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          640*3,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               640,
   /*Bit16u YResolution*/               480,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              24,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               8,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             8,
   /*Bit8u  GreenFieldPosition*/        8,
   /*Bit8u  BlueMaskSize*/              8,
   /*Bit8u  BlueFieldPosition*/         16,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       640*3,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            8,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          8,
   /*Bit8u  LinGreenFieldPosition*/     8,
   /*Bit8u  LinBlueMaskSize*/           8,
   /*Bit8u  LinBlueFieldPosition*/      16,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_VESA_MODE_800X600X888,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          800*3,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               800,
   /*Bit16u YResolution*/               600,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              24,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               8,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             8,
   /*Bit8u  GreenFieldPosition*/        8,
   /*Bit8u  BlueMaskSize*/              8,
   /*Bit8u  BlueFieldPosition*/         16,
   /*Bit8u  RsvdMaskSize*/              0,
   /*Bit8u  RsvdFieldPosition*/         0,
   /*Bit8u  DirectColorModeInfo*/       0,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       800*3,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            8,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          8,
   /*Bit8u  LinGreenFieldPosition*/     8,
   /*Bit8u  LinBlueMaskSize*/           8,
   /*Bit8u  LinBlueFieldPosition*/      16,
   /*Bit8u  LinRsvdMaskSize*/           0,
   /*Bit8u  LinRsvdFieldPosition*/      0,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_OWN_MODE_800X600X8888,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          800*4,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               800,
   /*Bit16u YResolution*/               600,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              32,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               8,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             8,
   /*Bit8u  GreenFieldPosition*/        8,
   /*Bit8u  BlueMaskSize*/              8,
   /*Bit8u  BlueFieldPosition*/         16,
   /*Bit8u  RsvdMaskSize*/              8,
   /*Bit8u  RsvdFieldPosition*/         24,
   /*Bit8u  DirectColorModeInfo*/       VBE_DIRECTCOLOR_RESERVED_BITS_AVAILABLE,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       800*4,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            8,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          8,
   /*Bit8u  LinGreenFieldPosition*/     8,
   /*Bit8u  LinBlueMaskSize*/           8,
   /*Bit8u  LinBlueFieldPosition*/      16,
   /*Bit8u  LinRsvdMaskSize*/           8,
   /*Bit8u  LinRsvdFieldPosition*/      24,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

        {
                VBE_OWN_MODE_1024X768X8888,
                {
/*typedef struct ModeInfoBlock
{*/
// Mandatory information for all VBE revisions
   /*Bit16u ModeAttributes*/            VBE_MODE_ATTRIBUTE_SUPPORTED | VBE_MODE_ATTRIBUTE_GRAPHICS_MODE | VBE_MODE_ATTTRIBUTE_LFB_ONLY,
   /*Bit8u  WinAAttributes*/            0,
   /*Bit8u  WinBAttributes*/            0,
   /*Bit16u WinGranularity*/            0,
   /*Bit16u WinSize*/                   0,
   /*Bit16u WinASegment*/               0,
   /*Bit16u WinBSegment*/               0,
   /*Bit32u WinFuncPtr*/                0,
   /*Bit16u BytesPerScanLine*/          1024*4,
// Mandatory information for VBE 1.2 and above
   /*Bit16u XResolution*/               1024,
   /*Bit16u YResolution*/               800,
   /*Bit8u  XCharSize*/                 8,
   /*Bit8u  YCharSize*/                 16,
   /*Bit8u  NumberOfPlanes*/            1,
   /*Bit8u  BitsPerPixel*/              32,
   /*Bit8u  NumberOfBanks*/             1,
   /*Bit8u  MemoryModel*/               VBE_MEMORYMODEL_DIRECT_COLOR,
   /*Bit8u  BankSize*/                  0,
   /*Bit8u  NumberOfImagePages*/        0,
   /*Bit8u  Reserved_page*/             0,
// Direct Color fields (required for direct/6 and YUV/7 memory models)
   /*Bit8u  RedMaskSize*/               8,
   /*Bit8u  RedFieldPosition*/          0,
   /*Bit8u  GreenMaskSize*/             8,
   /*Bit8u  GreenFieldPosition*/        8,
   /*Bit8u  BlueMaskSize*/              8,
   /*Bit8u  BlueFieldPosition*/         16,
   /*Bit8u  RsvdMaskSize*/              8,
   /*Bit8u  RsvdFieldPosition*/         24,
   /*Bit8u  DirectColorModeInfo*/       VBE_DIRECTCOLOR_RESERVED_BITS_AVAILABLE,
// Mandatory information for VBE 2.0 and above
   /*Bit32u PhysBasePtr*/               VBE_PHYSICAL_BASE_ADDRESS,
   /*Bit32u OffScreenMemOffset*/        0,
   /*Bit16u OffScreenMemSize*/          0,
// Mandatory information for VBE 3.0 and above
   /*Bit16u LinBytesPerScanLine*/       1024*4,
   /*Bit8u  BnkNumberOfPages*/          0,
   /*Bit8u  LinNumberOfPages*/          0,
   /*Bit8u  LinRedMaskSize*/            8,
   /*Bit8u  LinRedFieldPosition*/       0,
   /*Bit8u  LinGreenMaskSize*/          8,
   /*Bit8u  LinGreenFieldPosition*/     8,
   /*Bit8u  LinBlueMaskSize*/           8,
   /*Bit8u  LinBlueFieldPosition*/      16,
   /*Bit8u  LinRsvdMaskSize*/           8,
   /*Bit8u  LinRsvdFieldPosition*/      24,
   /*Bit32u MaxPixelClock*/             0,
/*} ModeInfoBlock;*/
                }
        },

/** END OF THE LIST **/
        {
                VBE_VESA_MODE_END_OF_LIST,
                {
                        0,
                }
        }
};

#endif