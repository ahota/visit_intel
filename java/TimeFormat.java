// ***************************************************************************
//
// Copyright (c) 2000 - 2014, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-442911
// All rights reserved.
//
// This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
// full copyright notice is contained in the file COPYRIGHT located at the root
// of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
//
// Redistribution  and  use  in  source  and  binary  forms,  with  or  without
// modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of  source code must  retain the above  copyright notice,
//    this list of conditions and the disclaimer below.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
// LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
// DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ***************************************************************************

package llnl.visit;


// ****************************************************************************
// Class: TimeFormat
//
// Purpose:
//    This class encapsulates the attributes needed to format time.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class TimeFormat extends AttributeSubject
{
    private static int TimeFormat_numAdditionalAtts = 2;

    // Enum values
    public final static int DISPLAYMODE_CYCLES = 0;
    public final static int DISPLAYMODE_TIMES = 1;
    public final static int DISPLAYMODE_CYCLESANDTIMES = 2;


    public TimeFormat()
    {
        super(TimeFormat_numAdditionalAtts);

        displayMode = DISPLAYMODE_CYCLES;
        precision = 5;
    }

    public TimeFormat(int nMoreFields)
    {
        super(TimeFormat_numAdditionalAtts + nMoreFields);

        displayMode = DISPLAYMODE_CYCLES;
        precision = 5;
    }

    public TimeFormat(TimeFormat obj)
    {
        super(TimeFormat_numAdditionalAtts);

        displayMode = obj.displayMode;
        precision = obj.precision;

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return TimeFormat_numAdditionalAtts;
    }

    public boolean equals(TimeFormat obj)
    {
        // Create the return value
        return ((displayMode == obj.displayMode) &&
                (precision == obj.precision));
    }

    // Property setting methods
    public void SetDisplayMode(int displayMode_)
    {
        displayMode = displayMode_;
        Select(0);
    }

    public void SetPrecision(int precision_)
    {
        precision = precision_;
        Select(1);
    }

    // Property getting methods
    public int GetDisplayMode() { return displayMode; }
    public int GetPrecision() { return precision; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteInt(displayMode);
        if(WriteSelect(1, buf))
            buf.WriteInt(precision);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetDisplayMode(buf.ReadInt());
            break;
        case 1:
            SetPrecision(buf.ReadInt());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + indent + "displayMode = ";
        if(displayMode == DISPLAYMODE_CYCLES)
            str = str + "DISPLAYMODE_CYCLES";
        if(displayMode == DISPLAYMODE_TIMES)
            str = str + "DISPLAYMODE_TIMES";
        if(displayMode == DISPLAYMODE_CYCLESANDTIMES)
            str = str + "DISPLAYMODE_CYCLESANDTIMES";
        str = str + "\n";
        str = str + intToString("precision", precision, indent) + "\n";
        return str;
    }


    // Attributes
    private int displayMode;
    private int precision;
}

