import difflib

class RobocompDslException(Exception):
    """A base class for robocompdsl's exceptions."""


class InterfaceNotFound(RobocompDslException):
    """Acessing an Interface which is not found.
		:param interfaceName: missing Intreface
		:param validNames: valid interfaces
    """
    def __init__(self, interfaceName, validNames=None):
    	self.interfaceName = interfaceName
    	self.validNames = validNames
    	self.message = interfaceName
    	if validNames:
    		similar_list = difflib.get_close_matches(self.interfaceName, self.validNames, cutoff=0.4)
    		if len(similar_list) > 0:
    			self.message = self.message + "; Similar valid alternatives are " + ",".join(similar_list)
    	super(InterfaceNotFound, self).__init__(self.message)
