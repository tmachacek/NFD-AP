#include "c-wrapper.h"
#include "invoke-client.hpp"

extern "C" {

	InvokeClient* newInvokeClient() {
		return new InvokeClient();
	}

	const char*
	InvokeClient_Auto_Discovery(InvokeClient* v, char* p_interface_name) {
		return v->CallClientMain(p_interface_name);
	}

}
