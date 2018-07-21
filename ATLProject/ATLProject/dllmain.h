// dllmain.h : Declaration of module class.

class CATLProjectModule : public ATL::CAtlDllModuleT< CATLProjectModule >
{
public :
	DECLARE_LIBID(LIBID_ATLProjectLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT, "{53cd0024-0bd7-4c85-a301-c2257a415097}")
};

extern class CATLProjectModule _AtlModule;
