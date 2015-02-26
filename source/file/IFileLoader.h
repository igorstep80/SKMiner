////////////////////////////////////////////////
// File:	IFileLoader.h
//
// Author:	Liam Russell (A.K.A. BitSlapper)
//
// Copyright: 2014-2015 Liam Russell
//
// License:	GNU GENERAL PUBLIC LICENSE V3
//////////////////////////////////////////////

#ifndef _IFILELOADER_H_
#define _IFILELOADER_H_

#include "../base/OSVersion.h"

template <class T>
class IFileLoader
{
private:

	///////////////////////////////////////////////////////////////////////////////
	//Copy Constructor
	///////////////////////////////////////////////////////////////////////////////
	IFileLoader(const IFileLoader& fileLoader){}

	///////////////////////////////////////////////////////////////////////////////
	//Assignment Operator
	///////////////////////////////////////////////////////////////////////////////
	IFileLoader& operator=(const IFileLoader& fileLoader) { return *this; };

public:

	///////////////////////////////////////////////////////////////////////////////
	//Constructor
	///////////////////////////////////////////////////////////////////////////////
	IFileLoader(){};

	///////////////////////////////////////////////////////////////////////////////
	//Destructor
	///////////////////////////////////////////////////////////////////////////////
	virtual ~IFileLoader() = 0;

	virtual bool Save(const std::string szSubDirectory, const std::string szFileName, T tData, bool bOverwrite = true, bool bIsBinary = false) = 0;
	virtual bool Load(const std::string szSubDirectory, const std::string szFileName, T& tData, bool bIsBinary = false) = 0;

};

#endif //_IFILELOADER_H_