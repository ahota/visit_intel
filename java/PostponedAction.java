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
// Class: PostponedAction
//
// Purpose:
//    This class contains the attributes for controlling the viewer vis a postponed action.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class PostponedAction extends AttributeSubject
{
    private static int PostponedAction_numAdditionalAtts = 2;

    public PostponedAction()
    {
        super(PostponedAction_numAdditionalAtts);

        RPC = new ViewerRPC();
        window = 0;
    }

    public PostponedAction(int nMoreFields)
    {
        super(PostponedAction_numAdditionalAtts + nMoreFields);

        RPC = new ViewerRPC();
        window = 0;
    }

    public PostponedAction(PostponedAction obj)
    {
        super(PostponedAction_numAdditionalAtts);

        RPC = new ViewerRPC(obj.RPC);
        window = obj.window;

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return PostponedAction_numAdditionalAtts;
    }

    public boolean equals(PostponedAction obj)
    {
        // Create the return value
        return ((RPC.equals(obj.RPC)) &&
                (window == obj.window));
    }

    // Property setting methods
    public void SetRPC(ViewerRPC RPC_)
    {
        RPC = RPC_;
        Select(0);
    }

    public void SetWindow(int window_)
    {
        window = window_;
        Select(1);
    }

    // Property getting methods
    public ViewerRPC GetRPC() { return RPC; }
    public int       GetWindow() { return window; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            RPC.Write(buf);
        if(WriteSelect(1, buf))
            buf.WriteInt(window);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            RPC.Read(buf);
            Select(0);
            break;
        case 1:
            SetWindow(buf.ReadInt());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + indent + "RPC = {\n" + RPC.toString(indent + "    ") + indent + "}\n";
        str = str + intToString("window", window, indent) + "\n";
        return str;
    }


    // Attributes
    private ViewerRPC RPC;
    private int       window;
}
