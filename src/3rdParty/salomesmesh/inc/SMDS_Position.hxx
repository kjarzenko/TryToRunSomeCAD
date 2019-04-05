// Copyright (C) 2007-2015  CEA/DEN, EDF R&D, OPEN CASCADE
//
// Copyright (C) 2003-2007  OPEN CASCADE, EADS/CCR, LIP6, CEA/DEN,
// CEDRAT, EDF R&D, LEG, PRINCIPIA R&D, BUREAU VERITAS
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
// See http://www.salome-platform.org/ or email : webmaster.salome@opencascade.com
//

//  SMESH SMDS : implementaion of Salome mesh data structure
//  File   : SMDS_Position.hxx
//  Module : SMESH
//
#ifndef _SMDS_Position_HeaderFile
#define _SMDS_Position_HeaderFile

#include "SMESH_SMDS.hxx"

#include "SMDS_TypeOfPosition.hxx"
#include <boost/shared_ptr.hpp>

class SMDS_Position;
//typedef boost::shared_ptr<SMDS_Position> SMDS_PositionPtr;
typedef SMDS_Position* SMDS_PositionPtr;

class SMDS_EXPORT SMDS_Position
{

  public:
        virtual SMDS_TypeOfPosition GetTypeOfPosition() const = 0;
        virtual int GetDim() const;
        virtual ~SMDS_Position() {}

  protected:
          SMDS_Position();
};


#endif
