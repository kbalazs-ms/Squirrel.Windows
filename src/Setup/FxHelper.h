#pragma once

class CFxHelper
{
public:
	static bool IsDotNet45OrHigherInstalled();
	static HRESULT InstallDotNetFramework(bool isQuiet);
private:
	static bool HandleRebootRequirement(bool isQuiet);
	static bool WriteRunOnceEntry();
	static bool RebootSystem();
};

