#pragma once

#include "Core.h"

namespace Prawn {

	class PRW_API App
	{
	public:
		App();
		virtual ~App();

		void Run();
	};

	// Used by client
	App* CreateApp();

}

