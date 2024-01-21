#include "ArabicString.h"
#include <Windows.h>
#include <io.h>
#include <fcntl.h>

wchar_t Arabic_GetMap(wchar_t code, ARABIC_FORM_TYPE pos)
{
	static wchar_t HAMZA[ARABIC_FORM_TYPE_NUM] = { 0x0621        ,      0xFE80,      0,      0,      0 };
	static wchar_t ALEF_MADDA[ARABIC_FORM_TYPE_NUM] = { 0x0622        ,      0xFE81,      0,      0, 0xFE82 };
	static wchar_t ALEF_HAMZA_ABOVE[ARABIC_FORM_TYPE_NUM] = { 0x0623        ,      0xFE83,      0,      0, 0xFE84 };
	static wchar_t WAW_HAMZA[ARABIC_FORM_TYPE_NUM] = { 0x0624        ,      0xFE85,      0,      0, 0xFE86 };
	static wchar_t ALEF_HAMZA_BELOW[ARABIC_FORM_TYPE_NUM] = { 0x0625        ,      0xFE87,      0,      0, 0xFE88 };
	static wchar_t YEH_HAMZA[ARABIC_FORM_TYPE_NUM] = { 0x0626        ,      0xFE89, 0xFE8B, 0xFE8C, 0xFE8A };
	static wchar_t ALEF[ARABIC_FORM_TYPE_NUM] = { 0x0627        ,      0xFE8D,      0,      0, 0xFE8E };
	static wchar_t BEH[ARABIC_FORM_TYPE_NUM] = { 0x0628        ,      0xFE8F, 0xFE91, 0xFE92, 0xFE90 };
	static wchar_t TEH_MARBUTA[ARABIC_FORM_TYPE_NUM] = { 0x0629        ,      0xFE93,      0,      0, 0xFE94 };
	static wchar_t TEH[ARABIC_FORM_TYPE_NUM] = { 0x062A        ,      0xFE95, 0xFE97, 0xFE98, 0xFE96 };
	static wchar_t THEH[ARABIC_FORM_TYPE_NUM] = { 0x062B        ,      0xFE99, 0xFE9B, 0xFE9C, 0xFE9A };
	static wchar_t JEEM[ARABIC_FORM_TYPE_NUM] = { 0x062C        ,      0xFE9D, 0xFE9F, 0xFEA0, 0xFE9E };
	static wchar_t HAH[ARABIC_FORM_TYPE_NUM] = { 0x062D        ,      0xFEA1, 0xFEA3, 0xFEA4, 0xFEA2 };
	static wchar_t KHAH[ARABIC_FORM_TYPE_NUM] = { 0x062E        ,      0xFEA5, 0xFEA7, 0xFEA8, 0xFEA6 };
	static wchar_t DAL[ARABIC_FORM_TYPE_NUM] = { 0x062F        ,      0xFEA9,      0,      0, 0xFEAA };
	static wchar_t THAL[ARABIC_FORM_TYPE_NUM] = { 0x0630        ,      0xFEAB,      0,      0, 0xFEAC };
	static wchar_t REH[ARABIC_FORM_TYPE_NUM] = { 0x0631        ,      0xFEAD,      0,      0, 0xFEAE };
	static wchar_t ZAIN[ARABIC_FORM_TYPE_NUM] = { 0x0632        ,      0xFEAF,      0,      0, 0xFEB0 };
	static wchar_t SEEN[ARABIC_FORM_TYPE_NUM] = { 0x0633        ,      0xFEB1, 0xFEB3, 0xFEB4, 0xFEB2 };
	static wchar_t SHEEN[ARABIC_FORM_TYPE_NUM] = { 0x0634        ,      0xFEB5, 0xFEB7, 0xFEB8, 0xFEB6 };
	static wchar_t SAD[ARABIC_FORM_TYPE_NUM] = { 0x0635        ,      0xFEB9, 0xFEBB, 0xFEBC, 0xFEBA };
	static wchar_t DAD[ARABIC_FORM_TYPE_NUM] = { 0x0636        ,      0xFEBD, 0xFEBF, 0xFEC0, 0xFEBE };
	static wchar_t TAH[ARABIC_FORM_TYPE_NUM] = { 0x0637        ,      0xFEC1, 0xFEC3, 0xFEC4, 0xFEC2 };
	static wchar_t ZAH[ARABIC_FORM_TYPE_NUM] = { 0x0638        ,      0xFEC5, 0xFEC7, 0xFEC8, 0xFEC6 };
	static wchar_t AIN[ARABIC_FORM_TYPE_NUM] = { 0x0639        ,      0xFEC9, 0xFECB, 0xFECC, 0xFECA };
	static wchar_t GHAIN[ARABIC_FORM_TYPE_NUM] = { 0x063A        ,      0xFECD, 0xFECF, 0xFED0, 0xFECE };
	static wchar_t TATWEEL[ARABIC_FORM_TYPE_NUM] = { 0x0640        ,      0x0640,      0,      0,      0 };
	static wchar_t OX_FEH[ARABIC_FORM_TYPE_NUM] = { 0x0641        ,      0xFED1, 0xFED3, 0xFED4, 0xFED2 };
	static wchar_t QAF[ARABIC_FORM_TYPE_NUM] = { 0x0642        ,      0xFED5, 0xFED7, 0xFED8, 0xFED6 };
	static wchar_t KAF[ARABIC_FORM_TYPE_NUM] = { 0x0643        ,      0xFED9, 0xFEDB, 0xFEDC, 0xFEDA };
	static wchar_t LAM[ARABIC_FORM_TYPE_NUM] = { 0x0644        ,      0xFEDD, 0xFEDF, 0xFEE0, 0xFEDE };
	static wchar_t MEEM[ARABIC_FORM_TYPE_NUM] = { 0x0645        ,      0xFEE1, 0xFEE3, 0xFEE4, 0xFEE2 };
	static wchar_t NOON[ARABIC_FORM_TYPE_NUM] = { 0x0646        ,      0xFEE5, 0xFEE7, 0xFEE8, 0xFEE6 };
	static wchar_t HEH[ARABIC_FORM_TYPE_NUM] = { 0x0647        ,      0xFEE9, 0xFEEB, 0xFEEC, 0xFEEA };
	static wchar_t WAW[ARABIC_FORM_TYPE_NUM] = { 0x0648        ,      0xFEED,      0,      0, 0xFEEE };
	static wchar_t ALEF_MAKSURA[ARABIC_FORM_TYPE_NUM] = { 0x0649        ,      0xFEEF,      0,      0, 0xFEF0 };
	static wchar_t YEH[ARABIC_FORM_TYPE_NUM] = { 0x064A        ,      0xFEF1, 0xFEF3, 0xFEF4, 0xFEF2 };

	switch (code)
	{
	case 0x0621: return	HAMZA[pos]; break;
	case 0x0622: return	ALEF_MADDA[pos]; break;
	case 0x0623: return	ALEF_HAMZA_ABOVE[pos]; break;
	case 0x0624: return	WAW_HAMZA[pos]; break;
	case 0x0625: return	ALEF_HAMZA_BELOW[pos]; break;
	case 0x0626: return	YEH_HAMZA[pos]; break;
	case 0x0627: return	ALEF[pos]; break;
	case 0x0628: return	BEH[pos]; break;
	case 0x0629: return	TEH_MARBUTA[pos]; break;
	case 0x062A: return	TEH[pos]; break;
	case 0x062B: return	THEH[pos]; break;
	case 0x062C: return	JEEM[pos]; break;
	case 0x062D: return	HAH[pos]; break;
	case 0x062E: return	KHAH[pos]; break;
	case 0x062F: return	DAL[pos]; break;
	case 0x0630: return	THAL[pos]; break;
	case 0x0631: return	REH[pos]; break;
	case 0x0632: return	ZAIN[pos]; break;
	case 0x0633: return	SEEN[pos]; break;
	case 0x0634: return	SHEEN[pos]; break;
	case 0x0635: return	SAD[pos]; break;
	case 0x0636: return	DAD[pos]; break;
	case 0x0637: return	TAH[pos]; break;
	case 0x0638: return	ZAH[pos]; break;
	case 0x0639: return	AIN[pos]; break;
	case 0x063A: return	GHAIN[pos]; break;
	case 0x0640: return	TATWEEL[pos]; break;
	case 0x0641: return	OX_FEH[pos]; break;
	case 0x0642: return	QAF[pos]; break;
	case 0x0643: return	KAF[pos]; break;
	case 0x0644: return	LAM[pos]; break;
	case 0x0645: return	MEEM[pos]; break;
	case 0x0646: return	NOON[pos]; break;
	case 0x0647: return	HEH[pos]; break;
	case 0x0648: return	WAW[pos]; break;
	case 0x0649: return	ALEF_MAKSURA[pos]; break;
	case 0x064A: return	YEH[pos]; break;
	}
	return 0;
}

bool Arabic_IsInComposing(wchar_t code)
{
	switch (code)
	{
	case 0x064B:         // FATHATAN
	case 0x064C:         // DAMMATAN
	case 0x064D:         // KASRATAN
	case 0x064E:         // FATHA
	case 0x064F:         // DAMMA
	case 0x0650:         // KASRA
	case 0x0651:         // SHADDA
	case 0x0652:         // SUKUN
	case 0x0653:         // MADDAH ABOVE
	case 0x0654:         // HAMZA ABOVE
	case 0x0655:         // HAMZA BELOW
	case 0x0670:         // SUPERSCRIPT ALEF
	case 0x06D6:         // HIGH LIG. SAD WITH LAM WITH ALEF MAKSURA
	case 0x06D7:         // HIGH LIG. QAF WITH LAM WITH ALEF MAKSURA
	case 0x06D8:         // HIGH MEEM INITIAL FORM
	case 0x06D9:         // HIGH LAM ALEF
	case 0x06DA:         // HIGH JEEM
	case 0x06DB:         // HIGH THREE DOTS
	case 0x06DC:         // HIGH SEEN

	// case 0x06DD:         // END OF AYAH
	// case 0x06DE:         // START OF RUB EL HIZB

	case 0x06DF:         // HIGH ROUNDED ZERO
	case 0x06E0:         // HIGH UPRIGHT RECTANGULAR ZERO
	case 0x06E1:         // HIGH DOTLESS HEAD OF KHAH
	case 0x06E2:         // HIGH MEEM ISOLATED FORM
	case 0x06E3:         // LOW SEEN
	case 0x06E4:         // HIGH MADDA
	case 0x06E7:         // HIGH YEH
	case 0x06E8:         // HIGH NOON
	case 0x06EA:         // EMPTY CENTRE LOW STOP
	case 0x06EB:         // EMPTY CENTRE HIGH STOP
	case 0x06EC:         // HIGH STOP WITH FILLED CENTRE
	case 0x06ED:         // LOW MEEM
		return true;
	}
	return false;
}

bool Arabic_CanCompositionSp(wchar_t cur,wchar_t prev)
{
	if(Arabic_GetMap(cur, INITIAL))
		return false;
	if (Arabic_GetMap(prev, INITIAL) || Arabic_GetMap(prev, MEDIAL))
		return true;
	
	return false;
}

wchar_t Arabic_GetComposition(wchar_t cur, wchar_t next, ARABIC_FORM_TYPE pos)
{
	static wchar_t LAM_ALEF_MADDA[ARABIC_FORM_TYPE_NUM] = { 0x0622, 0xFEF5,      0,      0, 0xFEF6 };
	static wchar_t LAM_ALEF_HAMZA_ABOVE[ARABIC_FORM_TYPE_NUM] = { 0x0623, 0xFEF7,      0,      0, 0xFEF8 };
	static wchar_t LAM_ALEF_HAMZA_BELOW[ARABIC_FORM_TYPE_NUM] = { 0x0625, 0xFEF9,      0,      0, 0xFEFA };
	static wchar_t LAM_ALEF[ARABIC_FORM_TYPE_NUM] = { 0x0627, 0xFEFB,      0,      0, 0xFEFC };

	switch (cur)
	{
	case 0x0644:
		switch (next)
		{
		case 0x0622:return LAM_ALEF_MADDA[pos]; break;
		case 0x0623:return LAM_ALEF_HAMZA_ABOVE[pos]; break;
		case 0x0625:return LAM_ALEF_HAMZA_BELOW[pos]; break;
		case 0x0627:return LAM_ALEF[pos]; break;
		}
		break;
	}
	return 0;
}

bool Arabic_IsNext(wchar_t code)
{
	return (code == 0x0640);
}

bool Arabic_IsComb1(wchar_t code)
{
	return (code == 0x0644);
}

bool Arabic_IsComb2(wchar_t code)
{
	switch (code)
	{
	case 0x0622:
	case 0x0623:
	case 0x0625:
	case 0x0627:
		return true;
	}

	return false;
}

bool Arabic_IsInMap(wchar_t code)
{
	return (code >= 0x0621 && code <= 0x064a);
}

ArabicString::ArabicString()
{
}

void ArabicString::goArabic()
{
	SetConsoleOutputCP(1256);
	SetConsoleCP(1256);
	setlocale(LC_ALL, "arabic");
	_setmode(_fileno(stdout), _O_U16TEXT);

	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = 18; // leave X as zero
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

void ArabicString::makeShape()
{
	textShape.empty();
	reTextShape.empty();
	for (size_t i = 0; i < text.length(); ++i)
	{
		wchar_t cur = text[i];
		//std::wprintf(L"i: %d\n", i);
		if (Arabic_IsInMap(cur))
		{
			//std::wprintf(L"yes its arabic\n");
			wchar_t prev = 0;
			{
				size_t prevIndex = i;
				while (prevIndex > 0)
				{
					prevIndex--;
					prev = text[prevIndex];
					if (Arabic_IsInComposing(prev))
						continue;
					else
						break;
				}

				if ((i == 0) ||
					(!Arabic_IsInMap(prev)) ||
					(!Arabic_GetMap(prev, INITIAL) && !Arabic_GetMap(prev, MEDIAL)))
				{
					prev = 0;
				}
			}
			
			wchar_t next = 0;
			{
				size_t nextIndex = i;
				while (nextIndex < text.length() - 1)
				{
					nextIndex++;
					next = text[nextIndex];
					if (Arabic_IsInComposing(next))
						continue;
					else
						break;
				}

				if ((nextIndex == i) ||
					(!Arabic_IsInMap(next)) ||
					(!Arabic_GetMap(next, MEDIAL) && !Arabic_GetMap(next, FINAL) && !Arabic_IsNext(next)))
				{
					next = 0;
				}
			}

			if (Arabic_IsComb1(cur) && Arabic_IsComb2(next))
			{
				if (prev)
					textShape += Arabic_GetComposition(cur, next, FINAL);
				else
					textShape += Arabic_GetComposition(cur, next, ISOLATED);
				i++;
			}
			else if (prev && next )
			{
				//std::wprintf(L"prev && next\n");
				if(Arabic_CanCompositionSp(cur,prev))
					textShape += Arabic_GetMap(cur, FINAL);
				else
					textShape+= Arabic_GetMap(cur, MEDIAL);
			}
			else if (prev)
			{
				//std::wprintf(L"prev\n");
				textShape+= Arabic_GetMap(cur, FINAL);
			}
			else if (next )
			{
				//std::wprintf(L" next\n");
				if(!Arabic_GetMap(cur, INITIAL))
					textShape += Arabic_GetMap(cur, ISOLATED);
				else
					textShape+= Arabic_GetMap(cur, INITIAL);
			}
			else
			{
				//std::wprintf(L"else\n");
				textShape+= Arabic_GetMap(cur, ISOLATED);
			}
		}
		else
			textShape+= cur;
	}

	for (int i = textShape.length() - 1,j=0; i >= 0; i--,j++)
		reTextShape += textShape[i];
	
}
/*
std::wostream & operator<<(std::wostream & out, const ArabicString & as)
{

	return out << as.reTextShape;
}
*/
std::wistream & operator>>(std::wistream & in, ArabicString & as)
{
	return in >> as.text;
}
/*
wchar_t& ArabicString::operator[] (int index)
{
	return text[index];
}
*/
ArabicString& ArabicString::operator= (const wchar_t * _t)
{
	text = _t;
	textShape.empty();
	reTextShape.empty();
	return *this;
}
ArabicString& ArabicString::operator= (const ArabicString & _as)
{
	if (this != &_as) {
		text = _as.text;
		textShape = _as.textShape;
		reTextShape = _as.reTextShape;
	}
	return *this;
}
