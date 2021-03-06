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

#ifndef MATERIALATTRIBUTES_H
#define MATERIALATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: MaterialAttributes
//
// Purpose:
//    Attributes to control material interface reconstruction
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class STATE_API MaterialAttributes : public AttributeSubject
{
public:
    enum Algorithm
    {
        EquiT,
        EquiZ,
        Isovolume,
        PLIC,
        Discrete
    };

    // These constructors are for objects of this class
    MaterialAttributes();
    MaterialAttributes(const MaterialAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    MaterialAttributes(private_tmfs_t tmfs);
    MaterialAttributes(const MaterialAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~MaterialAttributes();

    virtual MaterialAttributes& operator = (const MaterialAttributes &obj);
    virtual bool operator == (const MaterialAttributes &obj) const;
    virtual bool operator != (const MaterialAttributes &obj) const;
private:
    void Init();
    void Copy(const MaterialAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();

    // Property setting methods
    void SetSmoothing(bool smoothing_);
    void SetForceMIR(bool forceMIR_);
    void SetCleanZonesOnly(bool cleanZonesOnly_);
    void SetNeedValidConnectivity(bool needValidConnectivity_);
    void SetAlgorithm(Algorithm algorithm_);
    void SetIterationEnabled(bool iterationEnabled_);
    void SetNumIterations(int numIterations_);
    void SetIterationDamping(float iterationDamping_);
    void SetSimplifyHeavilyMixedZones(bool simplifyHeavilyMixedZones_);
    void SetMaxMaterialsPerZone(int maxMaterialsPerZone_);
    void SetIsoVolumeFraction(float isoVolumeFraction_);
    void SetAnnealingTime(int annealingTime_);

    // Property getting methods
    bool  GetSmoothing() const;
    bool  GetForceMIR() const;
    bool  GetCleanZonesOnly() const;
    bool  GetNeedValidConnectivity() const;
    Algorithm GetAlgorithm() const;
    bool  GetIterationEnabled() const;
    int   GetNumIterations() const;
    float GetIterationDamping() const;
    bool  GetSimplifyHeavilyMixedZones() const;
    int   GetMaxMaterialsPerZone() const;
    float GetIsoVolumeFraction() const;
    int   GetAnnealingTime() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string Algorithm_ToString(Algorithm);
    static bool Algorithm_FromString(const std::string &, Algorithm &);
protected:
    static std::string Algorithm_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;


    // IDs that can be used to identify fields in case statements
    enum {
        ID_smoothing = 0,
        ID_forceMIR,
        ID_cleanZonesOnly,
        ID_needValidConnectivity,
        ID_algorithm,
        ID_iterationEnabled,
        ID_numIterations,
        ID_iterationDamping,
        ID_simplifyHeavilyMixedZones,
        ID_maxMaterialsPerZone,
        ID_isoVolumeFraction,
        ID_annealingTime,
        ID__LAST
    };

private:
    bool  smoothing;
    bool  forceMIR;
    bool  cleanZonesOnly;
    bool  needValidConnectivity;
    int   algorithm;
    bool  iterationEnabled;
    int   numIterations;
    float iterationDamping;
    bool  simplifyHeavilyMixedZones;
    int   maxMaterialsPerZone;
    float isoVolumeFraction;
    int   annealingTime;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define MATERIALATTRIBUTES_TMFS "bbbbibifbifi"

#endif
