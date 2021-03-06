/*****************************************************************************
*
* Copyright (c) 2000 - 2014, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/


// ************************************************************************* //
//                            avtSAMIFileFormat.h                           //
// ************************************************************************* //

#ifndef AVT_SAMI_FILE_FORMAT_H
#define AVT_SAMI_FILE_FORMAT_H

#include <silo.h>

#include <avtSTSDFileFormat.h>

class vtkDataSet;
class vtkDataArray;
class avtMaterial;


// ****************************************************************************
//  Class: avtSAMIFileFormat
//
//  Purpose:
//      Reads in SAMI files as a plugin to VisIt.
//
//  Programmer: miller -- generated by xml2avt
//  Creation:   Wed Oct 11 13:40:57 PST 2006
//
//  Modifications:
//
//    Mark C. Miller, Tue Nov 29 11:37:32 PST 2011
//    Added InitFile method.
// ****************************************************************************

class avtSAMIFileFormat : public avtSTSDFileFormat
{
  public:
                       avtSAMIFileFormat(const char *filename);
    virtual           ~avtSAMIFileFormat() {;};

    virtual const char    *GetType(void)   { return "SAMI"; };
    virtual void           FreeUpResources(void); 

    virtual vtkDataSet    *GetMesh(const char *);
    virtual vtkDataArray  *GetVar(const char *);
    virtual vtkDataArray  *GetVectorVar(const char *);
    virtual avtMaterial   *GetMaterial(const char *);
    virtual void          *GetAuxiliaryData(const char *var,
                                            const char *type, void *args,
                                            DestructorFunction &);

  protected:
    virtual void           PopulateDatabaseMetaData(avtDatabaseMetaData *);

  private:
      void                 InitFile();
      DBfile              *dbFile;
      int nzones, nshells, nbeams, nnodes, nmats, nslides, iorigin, ndims;
      char *xVals, *yVals, *zVals;

};

#endif
