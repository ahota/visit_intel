#*****************************************************************************
#
# Copyright (c) 2000 - 2014, Lawrence Livermore National Security, LLC
# Produced at the Lawrence Livermore National Laboratory
# LLNL-CODE-442911
# All rights reserved.
#
# This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
# full copyright notice is contained in the file COPYRIGHT located at the root
# of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
#
# Redistribution  and  use  in  source  and  binary  forms,  with  or  without
# modification, are permitted provided that the following conditions are met:
#
#  - Redistributions of  source code must  retain the above  copyright notice,
#    this list of conditions and the disclaimer below.
#  - Redistributions in binary form must reproduce the above copyright notice,
#    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
#    documentation and/or other materials provided with the distribution.
#  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
#    be used to endorse or promote products derived from this software without
#    specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
# ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
# LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
# DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
# SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
# CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
# LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
# OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
# DAMAGE.
#
# Modifications:
#   Dirk Schubert (Allinea Software), Mon Oct 15, 2012
#   Build symV2dyn only if VISIT_DDT is chosen.
#
#   Eric Brugger, Wed Dec 26 15:31:11 PST 2012
#   Always build symV2dyn, so that it can be used in the swig/python
#   directory.
#
#   Kathleen Biagas, Mon Jan 7 18:04:23 PST 2012
#   Don't build symV2dyn on Windows.
#
#   Kathleen Biagas, Thu Nov  7 07:57:14 PST 2013
#   Add VisItControlInterface_V2_plotting.h to files being installed.
#
#****************************************************************************/

# See ../CMakeLists.txt for LIBSIM_SOURCES

SET(FORTRAN_LIBSIM_SOURCES visitfortransimV2interface.c)

INCLUDE_DIRECTORIES(
${CMAKE_CURRENT_SOURCE_DIR}
${VISIT_BINARY_DIR}/include
)

IF(NOT WIN32 AND NOT VISIT_STATIC)
  # Allinea Software:
  # Create a libsimV2.so shared library for the standard VisIt
  # interface (normally provided by statically linking with libsimV2.a).
  # -fvisibility is set to default (it is normally hidden).
  # Preferred solution would be to tag each function to be exposed in
  # the shared library individually instead of exposing everything,
  # but this will do for now. Also provide debug info.
  ADD_DEFINITIONS(-g -fvisibility=default)
  ADD_LIBRARY(simV2dyn SHARED ${LIBSIM_SOURCES})
  SET(LIBSIM_DYN simV2dyn)
ENDIF(NOT WIN32 AND NOT VISIT_STATIC)

ADD_LIBRARY(simV2 STATIC ${LIBSIM_SOURCES})
ADD_LIBRARY(simV2f STATIC ${FORTRAN_LIBSIM_SOURCES})


INSTALL(TARGETS simV2 simV2f ${LIBSIM_DYN}
    ARCHIVE DESTINATION ${VISIT_INSTALLED_VERSION}/libsim/V2/lib
    LIBRARY DESTINATION ${VISIT_INSTALLED_VERSION}/libsim/V2/lib
    PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_WRITE GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)
INSTALL(FILES 
VisItControlInterface_V2.h
VisItControlInterface_V2_plotting.h
VisItDataInterface_V2.h
VisItInterfaceTypes_V2.h
VisIt_CSGMesh.h
VisIt_CommandMetaData.h
VisIt_CurveData.h
VisIt_CurveMetaData.h
VisIt_CurvilinearMesh.h
VisIt_DomainBoundaries.h
VisIt_DomainList.h
VisIt_DomainNesting.h
VisIt_ExpressionMetaData.h
VisIt_MaterialData.h
VisIt_MaterialMetaData.h
VisIt_MeshMetaData.h
VisIt_NameList.h
VisIt_PointMesh.h
VisIt_RectilinearMesh.h
VisIt_SimulationMetaData.h
VisIt_SpeciesData.h
VisIt_SpeciesMetaData.h
VisIt_UnstructuredMesh.h
VisIt_VariableData.h
VisIt_VariableMetaData.h
visitfortransimV2interface.inc
    DESTINATION ${VISIT_INSTALLED_VERSION}/libsim/V2/include
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ GROUP_WRITE WORLD_READ 
)
