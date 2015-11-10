# Visit 2.8.1 log file
ScriptVersion = "2.8.1"
if ScriptVersion != Version():
    print "This script is for VisIt %s. It may not work with version %s" % (ScriptVersion, Version())
