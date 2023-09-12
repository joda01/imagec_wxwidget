#ifndef ICONS8-BLUR-20_PNG_H
#define ICONS8-BLUR-20_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char icons8-blur-20_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x14, 
	0x00, 0x00, 0x00, 0x14, 0x08, 0x06, 0x00, 0x00, 0x00, 0x8D, 
	0x89, 0x1D, 0x0D, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 
	0x73, 0x00, 0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 0x01, 
	0x00, 0x9A, 0x9C, 0x18, 0x00, 0x00, 0x00, 0xDB, 0x49, 0x44, 
	0x41, 0x54, 0x78, 0x9C, 0xBD, 0xD4, 0xBD, 0x4A, 0x03, 0x41, 
	0x14, 0xC5, 0xF1, 0x1F, 0x46, 0x2D, 0xAC, 0x94, 0xE8, 0x5B, 
	0x58, 0x19, 0xB0, 0x8F, 0x82, 0x6F, 0xA0, 0x20, 0x69, 0x15, 
	0x31, 0xAF, 0x61, 0x12, 0x49, 0xA5, 0x60, 0xE5, 0x47, 0xAF, 
	0x9D, 0x01, 0x4D, 0xF4, 0xF1, 0x64, 0xE4, 0x0A, 0x29, 0x12, 
	0x67, 0x76, 0x5D, 0xFC, 0xC3, 0x2D, 0xF6, 0xCC, 0xD9, 0x33, 
	0xC3, 0xE5, 0xCE, 0x50, 0xC6, 0x3A, 0x56, 0x35, 0xC8, 0x5D, 
	0x54, 0x23, 0xEC, 0xE1, 0x1E, 0x8F, 0xD8, 0xFF, 0x6B, 0xD8, 
	0x0A, 0xA6, 0xD8, 0x41, 0x1B, 0x1F, 0xA1, 0xD5, 0xE6, 0x1C, 
	0x97, 0x73, 0xDF, 0x7D, 0x9C, 0xD5, 0x0D, 0xDB, 0xC2, 0x27, 
	0x5A, 0x73, 0x5A, 0x2B, 0xB4, 0xB4, 0x56, 0x99, 0x01, 0xBA, 
	0x0B, 0xF4, 0x03, 0x5C, 0x55, 0x0D, 0x6B, 0x47, 0xBF, 0x96, 
	0xF1, 0xD3, 0xD7, 0x62, 0x46, 0x71, 0x92, 0x65, 0x1C, 0x62, 
	0x58, 0x1A, 0xB6, 0x89, 0x59, 0x81, 0x6F, 0x16, 0xDE, 0x2C, 
	0x17, 0x38, 0xCD, 0xDB, 0xF4, 0x62, 0x0A, 0xB2, 0x4C, 0xB0, 
	0x91, 0xB7, 0x7D, 0x7B, 0x26, 0x05, 0x3E, 0xEF, 0xCA, 0x79, 
	0x6B, 0xCC, 0x54, 0xC5, 0xFB, 0x12, 0x63, 0x93, 0x63, 0x1B, 
	0xCF, 0x25, 0x81, 0x47, 0x31, 0x36, 0x39, 0xC6, 0x31, 0x3E, 
	0x45, 0x3C, 0xE1, 0xF8, 0x97, 0xF5, 0x13, 0x3C, 0xA8, 0xC0, 
	0x1A, 0x6E, 0xE3, 0xA7, 0xF4, 0x7C, 0xA5, 0x3B, 0x9C, 0xAA, 
	0x13, 0x9B, 0xDD, 0xD4, 0x7D, 0x70, 0x77, 0x71, 0x8D, 0xD7, 
	0xA8, 0xD4, 0x8A, 0xA4, 0xFD, 0x1F, 0x5F, 0xEF, 0xC2, 0x1E, 
	0x0F, 0x91, 0x3E, 0x8B, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& icons8-blur-20_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( icons8-blur-20_png, sizeof( icons8-blur-20_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //ICONS8-BLUR-20_PNG_H
