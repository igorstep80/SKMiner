////////////////////////////////////////////////
// File:	Header.cpp
//
// Author:	Liam Russell (A.K.A. BitSlapper)
//
// Copyright:	2014-2015 Liam Russell
//
// License:	GNU GENERAL PUBLIC LICENSE V3
//////////////////////////////////////////////

#include "Header.h"


namespace Http
{
	namespace Server
	{
		//////////////////////////////////////////////////////////////////////////////
		//Constructor
		///////////////////////////////////////////////////////////////////////////////
		Header::Header()
		{
			this->m_enmEntityType = ENTITY_TYPE::HTTP_HEADER;
		}

		///////////////////////////////////////////////////////////////////////////////
		//Copy Constructor
		///////////////////////////////////////////////////////////////////////////////
		Header::Header(const Header& header) : Entity(header)
		{
			this->m_szName = header.GetName();
			this->m_szValue = header.GetValue();
		}

		///////////////////////////////////////////////////////////////////////////////
		//Assignment Operator
		///////////////////////////////////////////////////////////////////////////////
		Header& Header::operator = (const Header& header)
		{
			this->m_enmEntityType = header.GetEntityType();
			this->m_szName = header.GetName();
			this->m_szValue = header.GetValue();

			return *this;
		}

		///////////////////////////////////////////////////////////////////////////////
		//Destructor
		///////////////////////////////////////////////////////////////////////////////
		Header::~Header()
		{

		}

	}
}