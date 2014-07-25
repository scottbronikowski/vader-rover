// GPSInfo.h: interface for the GPSInfo class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GPSINFO_H__2040A232_786E_4C7B_8EA5_0A9438ED6C1F__INCLUDED_)
#define AFX_GPSINFO_H__2040A232_786E_4C7B_8EA5_0A9438ED6C1F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define FALSE 0
#define TRUE 1

struct GPSInfo
{
public:
	double m_latitude;
	double m_longitude;
    double m_altitude;
	unsigned long m_nSentences;
	unsigned int m_signalQuality;
	unsigned int m_satelitesInUse;

	GPSInfo();
	virtual ~GPSInfo();
};

#endif // !defined(AFX_GPSINFO_H__2040A232_786E_4C7B_8EA5_0A9438ED6C1F__INCLUDED_)
