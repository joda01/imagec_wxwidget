#ifndef ICONS8-OCTAGON-20_PNG_H
#define ICONS8-OCTAGON-20_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char icons8-octagon-20_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x14, 
	0x00, 0x00, 0x00, 0x14, 0x08, 0x06, 0x00, 0x00, 0x00, 0x8D, 
	0x89, 0x1D, 0x0D, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 
	0x73, 0x00, 0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 0x01, 
	0x00, 0x9A, 0x9C, 0x18, 0x00, 0x00, 0x00, 0xB6, 0x49, 0x44, 
	0x41, 0x54, 0x78, 0x9C, 0xDD, 0x95, 0xBD, 0x0D, 0x83, 0x30, 
	0x10, 0x46, 0x5F, 0x83, 0xCD, 0x02, 0x6E, 0xC2, 0x7E, 0xA1, 
	0x63, 0x0C, 0x92, 0x69, 0x12, 0x8A, 0x8C, 0xC1, 0x10, 0xF4, 
	0x64, 0x88, 0xC8, 0xE8, 0x88, 0x10, 0xF2, 0xC9, 0x3F, 0x71, 
	0x95, 0x4F, 0x72, 0xE1, 0xFB, 0xA4, 0x67, 0xEB, 0xEE, 0x7C, 
	0x06, 0x5D, 0x0E, 0xB0, 0x81, 0x78, 0x2B, 0x5E, 0x96, 0x0C, 
	0xB0, 0x02, 0x0B, 0x30, 0x9F, 0xD6, 0x22, 0x9E, 0xC9, 0x81, 
	0x4D, 0xC0, 0x0D, 0xB8, 0x04, 0xFC, 0x4E, 0xBC, 0x29, 0x05, 
	0x6A, 0x80, 0x27, 0x30, 0x24, 0x1C, 0x7C, 0x05, 0x5E, 0x4A, 
	0x5A, 0xB2, 0x61, 0x51, 0xA8, 0x29, 0x80, 0xA9, 0x50, 0x07, 
	0xBC, 0x81, 0x91, 0x72, 0x8D, 0xC2, 0xD8, 0xAA, 0x6F, 0xA5, 
	0x72, 0xA1, 0x02, 0xA4, 0xAA, 0x13, 0xC6, 0xF7, 0x96, 0xBE, 
	0x1D, 0x7E, 0xD5, 0xAC, 0x6E, 0xFE, 0x1F, 0x68, 0x6B, 0x17, 
	0xC5, 0x55, 0x6A, 0x9B, 0xF5, 0x38, 0x34, 0x1A, 0xE0, 0x51, 
	0xD8, 0xD8, 0xBD, 0xF6, 0x5A, 0x4A, 0xA0, 0x7D, 0xEC, 0x3D, 
	0xE7, 0x40, 0xA3, 0x30, 0x44, 0xFB, 0xF8, 0xBA, 0x4B, 0xB2, 
	0xCF, 0xF2, 0x31, 0xEF, 0x25, 0x8D, 0xAF, 0x23, 0xB4, 0xDA, 
	0x80, 0xDD, 0xA5, 0x7D, 0x01, 0x3E, 0xA6, 0x7E, 0x01, 0x1F, 
	0x8B, 0x9D, 0x31, 0x8D, 0x81, 0x61, 0xE8, 0x0E, 0x00, 0x00, 
	0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& icons8-octagon-20_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( icons8-octagon-20_png, sizeof( icons8-octagon-20_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //ICONS8-OCTAGON-20_PNG_H
