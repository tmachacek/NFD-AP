#ifndef INVOKE_CLIENT_H
#define INVOKE_CLIENT_H

//This class defines one function to call the client's main function. This is what the c-wrapper function calls

#include <iostream>
#include <string>

class InvokeClient {

	public:
		InvokeClient();

		//Interface to c-wrapper function
		const char*
		CallClientMain(std::string p_interface_name);

};
#endif
